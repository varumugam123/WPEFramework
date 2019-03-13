#ifndef __DATAEXCHANGE_H
#define __DATAEXCHANGE_H

// ---- Include local include files ----
#include <core/core.h>

// ---- Referenced classes and types ----

// ---- Helper types and constants ----

namespace OCDM {

class DataExchange : public WPEFramework::Core::SharedBuffer {
private:
    DataExchange() = delete;
    DataExchange(const DataExchange&) = delete;
    DataExchange& operator=(const DataExchange&) = delete;
private:
    struct Administration {
        uint32_t Status;
        uint8_t KeyId[17];
        unsigned long long ByteOffset;
        uint8_t IVLength;
        uint8_t IV[16];
        uint16_t SubLength;
        uint8_t Sub[2048];
        bool InitWithLast15;
    };

public:
    DataExchange(const string& name)
        : WPEFramework::Core::SharedBuffer(name.c_str())
    {
    }
    DataExchange(const string& name, const uint32_t bufferSize)
        : WPEFramework::Core::SharedBuffer(name.c_str(), bufferSize, sizeof(Administration))
    {
        Administration* admin = reinterpret_cast<Administration*>(AdministrationBuffer());
        // Clear the administration space before using it.
        ::memset(admin, 0, sizeof(Administration));
    }
    ~DataExchange()
    {
    }

public:
    inline void Status(uint32_t status)
    {
        reinterpret_cast<Administration*>(AdministrationBuffer())->Status = status;
    }
    inline uint32_t Status() const
    {
        return (reinterpret_cast<const Administration*>(AdministrationBuffer())->Status);
    }
    inline void ByteOffset(uint32_t byteOffset) {
        reinterpret_cast<Administration*>(AdministrationBuffer())->ByteOffset = byteOffset;
    }
    inline uint32_t ByteOffset() const {
        return(reinterpret_cast<const Administration*>(AdministrationBuffer())->ByteOffset);
    }
    inline void InitWithLast15(bool initWithLast15) {
        reinterpret_cast<Administration*>(AdministrationBuffer())->InitWithLast15 = initWithLast15;
    }
    inline bool InitWithLast15() const {
        return(reinterpret_cast<const Administration*>(AdministrationBuffer())->InitWithLast15);
    }
    void SetIV(const uint8_t ivDataLength, const uint8_t ivData[])
    {
        Administration* admin = reinterpret_cast<Administration*>(AdministrationBuffer());
        ASSERT(ivDataLength <= sizeof(Administration::IV));
        admin->IVLength = (ivDataLength > sizeof(Administration::IV) ? sizeof(Administration::IV) : ivDataLength);
        ::memcpy(admin->IV, ivData, admin->IVLength);
        if (admin->IVLength < sizeof(Administration::IV)) {
            ::memset(&(admin->IV[admin->IVLength]), 0, (sizeof(Administration::IV) - admin->IVLength));
        }
    }
    void SetSubSampleData(const uint16_t length, const uint8_t* data)
    {
        Administration* admin = reinterpret_cast<Administration*>(AdministrationBuffer());
        admin->SubLength = (length > sizeof(Administration::Sub) ? sizeof(Administration::Sub) : length);
        if (data != nullptr) {
            ::memcpy(admin->Sub, data, admin->SubLength);
        }
    }
    void Write(const uint32_t length, const uint8_t* data)
    {

        if (WPEFramework::Core::SharedBuffer::Size(length) == true) {
            SetBuffer(0, length, data);
        }
    }
    void Read(const uint32_t length, uint8_t* data) const
    {
        GetBuffer(0, length, data);
    }
    const uint8_t* IVKey() const
    {
        const Administration* admin = reinterpret_cast<const Administration*>(AdministrationBuffer());
        return (admin->IV);
    }
    const uint8_t IVKeyLength() const
    {
        const Administration* admin = reinterpret_cast<const Administration*>(AdministrationBuffer());
        return (admin->IVLength);
    }
    void KeyId(const uint8_t length, const uint8_t buffer[])
    {
        Administration* admin = reinterpret_cast<Administration*>(AdministrationBuffer());
        ASSERT(length <= 16);
        admin->KeyId[0] = (length <= 16 ? length : 16);
        if (length != 0) {
            ::memcpy(&(admin->KeyId[1]), buffer, admin->KeyId[0]);
        }
    }
    const uint8_t* KeyId(uint8_t& length) const
    {
        const Administration* admin = reinterpret_cast<const Administration*>(AdministrationBuffer());
        length = admin->KeyId[0];
        ASSERT(length <= 16);
        return (length > 0 ? &admin->KeyId[1] : nullptr);
    }
};

} // namespace OCDM

#endif // __DATAEXCHANGE_H
