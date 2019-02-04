#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {
namespace ProxyStubsValidator {

struct Uint8_t : virtual public Core::IUnknown {
    virtual uint8_t returnByValue() = 0;
    virtual uint8_t passByValue(uint8_t value) = 0;
    virtual uint8_t passByValueConst(const uint8_t value) = 0;
    virtual void passByReference(uint8_t& value) = 0;
    virtual uint8_t passByConstReference(const uint8_t& value) = 0;
};

template<typename T>
T returnByValue(T desiredValue)
{
    T value = 123;
    return value;
}

class Impl : virtual public Uint8_t
{
    Impl() = default;
    ~Impl() = default;

    virtual uint8_t returnByValue()
    {
        return returnByValue(123)
    }

    virtual uint8_t passByValue(uint8_t value)
    {
        uint8_t value = 123;
        return value;
    }
    virtual uint8_t passByValueConst(const uint8_t value)
    {
        uint8_t value = 123;
        return value;
    }
    virtual void passByReference(uint8_t& value)
    {
        value = 123;
    }
    virtual uint8_t passByConstReference(const uint8_t& value)
    {
        uint8_t temp = value;
        return value;
    }
};

} // namespace ProxyStubsValidator
struct IProxyStubsValidator : virtual public Core::IUnknown {
    // ToDo: set proper ID value
    enum { ID = 0x00000081 };

    virtual ~IProxyStubsValidator(){};

    virtual void dummyAction() = 0;

    // 
    // return by value
    //
    // int with specific bit number
    virtual uint8_t returnByValueUint8t() = 0;
    virtual uint32_t returnByValueUint32t() = 0;
    virtual uint64_t returnByValueUint64t() = 0;
    virtual int8_t returnByValueInt8t() = 0;
    virtual int32_t returnByValueInt32t() = 0;
    virtual int64_t returnByValueInt64t() = 0;

    // short int
    virtual short returnByValueShort() = 0;
    virtual short int returnByValueShortInt() = 0;
    virtual signed short returnByValueSignedShort() = 0;
    virtual signed short int returnByValueSignedShortInt() = 0;

    // unsigned short int
    virtual unsigned short returnByValueUnsignedShort() = 0;
    virtual unsigned short int returnByValueUnsignedShortInt() = 0;

    // int
    virtual int returnByValueInt() = 0;
    virtual signed returnByValueSigned() = 0;
    virtual signed int returnByValueSignedInt() = 0;

    // long int
    virtual long returnByValueLong() = 0;
    virtual long int returnByValueLongInt() = 0;
    virtual signed long returnByValueSignedLong() = 0;
    virtual signed long int returnByValueSignedLongInt() = 0;

    // unsigned long int
    virtual unsigned long returnByValueUnsignedLong() = 0;
    virtual unsigned long int returnByValueUnsignedLongInt() = 0;

    // long long int
    virtual long long returnByValueLongLong() = 0;
    virtual long long int returnByValueLongLongInt() = 0;
    virtual signed long long returnByValueSignedLongLong() = 0;
    virtual signed long long int returnByValueSignedLongLongInt() = 0;

    // unsigned long long int
    virtual unsigned long long returnByValueUnsignedLongLong() = 0;
    virtual unsigned long long int returnByValueUnsignedLongLongInt() = 0;

    // char
    virtual signed char returnByValueSignedChar() = 0;
    virtual unsigned char returnByValueUnsignedChar() = 0;
    virtual char returnByValueChar() = 0;
    // ToDo: fix/delete
    // virtual wchar_t returnByValueWchart() = 0;

    // string
    virtual string returnByValueString() = 0;

    // floating point
    virtual float returnByValueFloat() = 0;
    virtual double returnByValueDouble() = 0;
    virtual long double returnByValueLongDouble() = 0;

    //
    // return by const value
    //
    // int with specific bit number
    virtual const uint8_t returnByConstValueUint8t() = 0;
    virtual const uint32_t returnByConstValueUint32t() = 0;
    virtual const uint64_t returnByConstValueUint64t() = 0;
    virtual const int8_t returnByConstValueInt8t() = 0;
    virtual const int32_t returnByConstValueInt32t() = 0;
    virtual const int64_t returnByConstValueInt64t() = 0;

    // short int
    virtual const short returnByConstValueShort() = 0;
    virtual const short int returnByConstValueShortInt() = 0;
    virtual const signed short returnByConstValueSignedShort() = 0;
    virtual const signed short int returnByConstValueSignedShortInt() = 0;

    // unsigned short int
    virtual const unsigned short returnByConstValueUnsignedShort() = 0;
    virtual const unsigned short int returnByConstValueUnsignedShortInt() = 0;

    // int
    virtual const int returnByConstValueInt() = 0;
    virtual const signed returnByConstValueSigned() = 0;
    virtual const signed int returnByConstValueSignedInt() = 0;

    // long int
    virtual const long returnByConstValueLong() = 0;
    virtual const long int returnByConstValueLongInt() = 0;
    virtual const signed long returnByConstValueSignedLong() = 0;
    virtual const signed long int returnByConstValueSignedLongInt() = 0;

    // unsigned long int
    virtual const unsigned long returnByConstValueUnsignedLong() = 0;
    virtual const unsigned long int returnByConstValueUnsignedLongInt() = 0;

    // long long int
    virtual const long long returnByConstValueLongLong() = 0;
    virtual const long long int returnByConstValueLongLongInt() = 0;
    virtual const signed long long returnByConstValueSignedLongLong() = 0;
    virtual const signed long long int returnByConstValueSignedLongLongInt() = 0;

    // unsigned long long int
    virtual const unsigned long long returnByConstValueUnsignedLongLong() = 0;
    virtual const unsigned long long int returnByConstValueUnsignedLongLongInt() = 0;

    // char
    virtual const signed char returnByConstValueSignedChar() = 0;
    virtual const unsigned char returnByConstValueUnsignedChar() = 0;
    virtual const char returnByConstValueChar() = 0;
    // ToDo: fix/delete
    // virtual const wchar_t returnByConstValueWchart() = 0;

    // string
    virtual const string returnByConstValueString() = 0;

    // floating point
    virtual const float returnByConstValueFloat() = 0;
    virtual const double returnByConstValueDouble() = 0;
    virtual const long double returnByConstValueLongDouble() = 0;

    //
    // pass by value
    //
    // int with specific bit number
    virtual uint8_t passByValueUint8t(uint8_t value) = 0;
    virtual uint32_t passByValueUint32t(uint32_t value) = 0;
    virtual uint64_t passByValueUint64t(uint64_t value) = 0;
    virtual int8_t passByValueInt8t(int8_t value) = 0;
    virtual int32_t passByValueInt32t(int32_t value) = 0;
    virtual int64_t passByValueInt64t(int64_t value) = 0;

    // short int
    virtual short passByValueShort(short value) = 0;
    virtual short int passByValueShortInt(short int value) = 0;
    virtual signed short passByValueSignedShort(signed short value) = 0;
    virtual signed short int passByValueSignedShortInt(signed short int value) = 0;

    // unsigned short int
    virtual unsigned short passByValueUnsginedShort(unsigned short value) = 0;
    virtual unsigned short int passByValueUnsignedShortInt(unsigned short int value) = 0;

    // int
    virtual int passByValueInt(int value) = 0;
    virtual signed passByValueSigned(signed value) = 0;
    virtual signed int passByValueSignedInt(signed int value) = 0;

    // long int
    virtual long passByValueLong(long value) = 0;
    virtual long int passByValueLongInt(long int value) = 0;
    virtual signed long passByValueSignedLong(signed long value) = 0;
    virtual signed long int passByValueSignedLongLong(signed long int value) = 0;

    // unsigned long int
    virtual unsigned long passByValueUnsignedLong(unsigned long value) = 0;
    virtual unsigned long int passByValueUnsignedLongInt(unsigned long int value) = 0;

    // long long int
    virtual long long passByValueLongLong(long long value) = 0;
    virtual long long int passByValueLongLongInt(long long int value) = 0;
    virtual signed long long passByValueSignedLongLong(signed long long value) = 0;
    virtual signed long long int passByValueSignedLongLongInt(signed long long int value) = 0;

    // unsigned long long int
    virtual unsigned long long passByValueUnsignedLongLong(unsigned long long value) = 0;
    virtual unsigned long long int passByValueUnsignedLongLongInt(unsigned long long int value) = 0;

    // char
    virtual signed char passByValueSignedChar(signed char value) = 0;
    virtual unsigned char passByValueUnsignedChar(unsigned char value) = 0;
    virtual char passByValueChar(char value) = 0;
    // ToDo: fix/delete
    // virtual wchar_t passByValueWchart(wchar_t value) = 0;

    // floating point
    virtual float passByValueFloat(float value) = 0;
    virtual double passByValueDouble(double value) = 0;
    virtual long double passByValueLongDouble(long double value) = 0;

    //
    // pass by const value
    // int with specific bit number
    virtual uint8_t passByValueConstUint8t(const uint8_t value) = 0;
    virtual uint32_t passByValueConstUint32t(const uint32_t value) = 0;
    virtual uint64_t passByValueConstUint64t(const uint64_t value) = 0;
    virtual int8_t passByValueConstInt8t(const int8_t value) = 0;
    virtual int32_t passByValueConstInt32t(const int32_t value) = 0;
    virtual int64_t passByValueConstInt64t(const int64_t value) = 0;

    // short int
    virtual short passByValueConstShort(const short value) = 0;
    virtual short int passByValueConstShortInt(const short int value) = 0;
    virtual signed short passByValueConstSignedShort(const signed short value) = 0;
    virtual signed short int passByValueConstSignedShortInt(const signed short int value) = 0;

    // unsigned short int
    virtual unsigned short passByValueConstUnsginedShort(const unsigned short value) = 0;
    virtual unsigned short int passByValueConstUnsignedShortInt(const unsigned short int value) = 0;

    // int
    virtual int passByValueConstInt(const int value) = 0;
    virtual signed passByValueConstSigned(const signed value) = 0;
    virtual signed int passByValueConstSignedInt(const signed int value) = 0;

    // long int
    virtual long passByValueConstLong(const long value) = 0;
    virtual long int passByValueConstLongInt(const long int value) = 0;
    virtual signed long passByValueConstSignedLong(const signed long value) = 0;
    virtual signed long int passByValueConstSignedLongLong(const signed long int value) = 0;

    // unsigned long int
    virtual unsigned long passByValueConstUnsignedLong(const unsigned long value) = 0;
    virtual unsigned long int passByValueConstUnsignedLongInt(const unsigned long int value) = 0;

    // long long int
    virtual long long passByValueConstLongLong(const long long value) = 0;
    virtual long long int passByValueConstLongLongInt(const long long int value) = 0;
    virtual signed long long passByValueConstSignedLongLong(const signed long long value) = 0;
    virtual signed long long int passByValueConstSignedLongLongInt(const signed long long int value) = 0;

    // unsigned long long int
    virtual unsigned long long passByValueConstUnsignedLongLong(const unsigned long long value) = 0;
    virtual unsigned long long int passByValueConstUnsignedLongLongInt(const unsigned long long int value) = 0;

    // char
    virtual signed char passByValueConstSignedChar(const signed char value) = 0;
    virtual unsigned char passByValueConstUnsignedChar(const unsigned char value) = 0;
    virtual char passByValueConstChar(const char value) = 0;
    // ToDo: fix/delete
    // virtual wchar_t passByValueConstWchart(const wchar_t value) = 0;

    // floating point
    virtual float passByValueConstFloat(const float value) = 0;
    virtual double passByValueConstDouble(const double value) = 0;
    virtual long double passByValueConstLongDouble(const long double value) = 0;

    //
    // pass by reference
    //
    // int with specific bit number
    virtual void passByReferenceUint8t(uint8_t& value) = 0;
    virtual void passByReferenceUint32t(uint32_t& value) = 0;
    virtual void passByReferenceUint64t(uint64_t& value) = 0;
    virtual void passByReferenceInt8t(int8_t& value) = 0;
    virtual void passByReferenceInt32t(int32_t& value) = 0;
    virtual void passByReferenceInt64t(int64_t& value) = 0;

    // short int
    virtual void passByReferenceShort(short& value) = 0;
    virtual void passByReferenceShortInt(short int& value) = 0;
    virtual void passByReferenceSignedShort(signed short& value) = 0;
    virtual void passByReferenceSignedShortInt(signed short int& value) = 0;

    // unsigned short int
    virtual void passByReferenceUnsginedShort(unsigned short& value) = 0;
    virtual void passByReferenceUnsignedShortInt(unsigned short int& value) = 0;

    // int
    virtual void passByReferenceInt(int& value) = 0;
    virtual void passByReferenceSigned(signed& value) = 0;
    virtual void passByReferenceSignedInt(signed int& value) = 0;

    // long int
    virtual void passByReferenceLong(long& value) = 0;
    virtual void passByReferenceLongInt(long int& value) = 0;
    virtual void passByReferenceSignedLong(signed long& value) = 0;
    virtual void passByReferenceSignedLongLong(signed long int& value) = 0;

    // unsigned long int
    virtual void passByReferenceUnsignedLong(unsigned long& value) = 0;
    virtual void passByReferenceUnsignedLongInt(unsigned long int& value) = 0;

    // long long int
    virtual void passByReferenceLongLong(long long& value) = 0;
    virtual void passByReferenceLongLongInt(long long int& value) = 0;
    virtual void passByReferenceSignedLongLong(signed long long& value) = 0;
    virtual void passByReferenceSignedLongLongInt(signed long long int& value) = 0;

    // unsigned long long int
    virtual void passByReferenceUnsignedLongLong(unsigned long long& value) = 0;
    virtual void passByReferenceUnsignedLongLongInt(unsigned long long int& value) = 0;

    // char
    virtual void passByReferenceSignedChar(signed char& value) = 0;
    virtual void passByReferenceUnsignedChar(unsigned char& value) = 0;
    virtual void passByReferenceChar(char& value) = 0;
    // ToDo: fix/delete
    // virtual void passByReferenceWchart(wchar_t& value) = 0;

    // floating point
    virtual void passByReferenceFloat(float& value) = 0;
    virtual void passByReferenceDouble(double& value) = 0;
    virtual void passByReferenceLongDouble(long double& value) = 0;

    //
    // pass by const reference
    //
    // int with specific bit number
    virtual uint8_t passByConstReferenceUint8t(const uint8_t& value) = 0;
    virtual uint32_t passByConstReferenceUint32t(const uint32_t& value) = 0;
    virtual uint64_t passByConstReferenceUint64t(const uint64_t& value) = 0;
    virtual int8_t passByConstReferenceInt8t(const int8_t& value) = 0;
    virtual int32_t passByConstReferenceInt32t(const int32_t& value) = 0;
    virtual int64_t passByConstReferenceInt64t(const int64_t& value) = 0;

    // short int
    virtual short passByConstReferenceShort(const short& value) = 0;
    virtual short int passByConstReferenceShortInt(const short int& value) = 0;
    virtual signed short passByConstReferenceSignedShort(const signed short& value) = 0;
    virtual signed short int passByConstReferenceSignedShortInt(const signed short int& value) = 0;

    // unsigned short int
    virtual unsigned short passByConstReferenceUnsginedShort(const unsigned short& value) = 0;
    virtual unsigned short int passByConstReferenceUnsignedShortInt(const unsigned short int& value) = 0;

    // int
    virtual int passByConstReferenceInt(const int& value) = 0;
    virtual signed passByConstReferenceSigned(const signed& value) = 0;
    virtual signed int passByConstReferenceSignedInt(const signed int& value) = 0;

    // long int
    virtual long passByConstReferenceLong(const long& value) = 0;
    virtual long int passByConstReferenceLongInt(const long int& value) = 0;
    virtual signed long passByConstReferenceSignedLong(const signed long& value) = 0;
    virtual signed long int passByConstReferenceSignedLongLong(const signed long int& value) = 0;

    // unsigned long int
    virtual unsigned long passByConstReferenceUnsignedLong(const unsigned long& value) = 0;
    virtual unsigned long int passByConstReferenceUnsignedLongInt(const unsigned long int& value) = 0;

    // long long int
    virtual long long passByConstReferenceLongLong(const long long& value) = 0;
    virtual long long int passByConstReferenceLongLongInt(const long long int& value) = 0;
    virtual signed long long passByConstReferenceSignedLongLong(const signed long long& value) = 0;
    virtual signed long long int passByConstReferenceSignedLongLongInt(const signed long long int& value) = 0;

    // unsigned long long int
    virtual unsigned long long passByConstReferenceUnsignedLongLong(const unsigned long long& value) = 0;
    virtual unsigned long long int passByConstReferenceUnsignedLongLongInt(const unsigned long long int& value) = 0;

    // char
    virtual signed char passByConstReferenceSignedChar(const signed char& value) = 0;
    virtual unsigned char passByConstReferenceUnsignedChar(const unsigned char& value) = 0;
    virtual char passByConstReferenceChar(const char& value) = 0;
    // ToDo: fix/delete
    // virtual wchar_t passByConstReferenceWchart(const wchar_t& value) = 0;

    // floating point
    virtual float passByConstReferenceFloat(const float& value) = 0;
    virtual double passByConstReferenceDouble(const double& value) = 0;
    virtual long double passByConstReferenceLongDouble(const long double& value) = 0;

    // ToDo:
    //      - nesting
    //      - pass by pointer
    //      - pass by const pointer
    //      - pass by const pointer const
    //      -
};

} // namespace Exchange
} // namespace WPEFramework
