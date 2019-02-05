#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

struct IProxyStubsValidator : virtual public Core::IUnknown {
    // ToDo: set proper ID value
    enum { ID = 0x00000081 };

    virtual ~IProxyStubsValidator(){};

    enum Enum {
        ENUM_VALUE_1 = 0,
        ENUM_VALUE_2
    };

    enum class ScopedEnum {
        ScopedEnumValue1 = 0,
        ScopedEnumValue2
    };

    // ToDo: Generator should be able to generate scoped,typed enums
    enum class ScopedTypedEnum /*: long long */
    {
        ScopedTypedEnumValue1 = 0,
        ScopedTypedEnumValue2
    };

    // ****************************************************************************************************************
    // return by value
    // ****************************************************************************************************************
    // int with specific bit number
    virtual uint8_t returnByValueUint8t() = 0;
    virtual uint16_t returnByValueUint16t() = 0;
    virtual uint32_t returnByValueUint32t() = 0;
    virtual uint64_t returnByValueUint64t() = 0;
    virtual int8_t returnByValueInt8t() = 0;
    virtual int16_t returnByValueInt16t() = 0;
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
    // unsigned int
    virtual unsigned returnByValueUnsigned() = 0;
    virtual unsigned int returnByValueUnsignedInt() = 0;
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
    // string
    virtual string returnByValueString() = 0;
    // floating point
    virtual float returnByValueFloat() = 0;
    virtual double returnByValueDouble() = 0;
    virtual long double returnByValueLongDouble() = 0;
    // bool
    virtual bool returnByValueBool() = 0;
    // enum
    virtual Enum returnByValueEnum() = 0;
    virtual ScopedEnum returnByValueScopedEnum() = 0;
    virtual ScopedTypedEnum returnByValueScopedTypedEnum() = 0;

    // ****************************************************************************************************************
    // return by const value
    // ****************************************************************************************************************
    // int with specific bit number
    virtual const uint8_t returnByConstValueUint8t() = 0;
    virtual const uint16_t returnByConstValueUint16t() = 0;
    virtual const uint32_t returnByConstValueUint32t() = 0;
    virtual const uint64_t returnByConstValueUint64t() = 0;
    virtual const int8_t returnByConstValueInt8t() = 0;
    virtual const int16_t returnByConstValueInt16t() = 0;
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
    // unsigned int
    virtual const unsigned returnByConstValueUnsigned() = 0;
    virtual const unsigned int returnByConstValueUnsignedInt() = 0;
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
    // string
    virtual const string returnByConstValueString() = 0;
    // floating point
    virtual const float returnByConstValueFloat() = 0;
    virtual const double returnByConstValueDouble() = 0;
    virtual const long double returnByConstValueLongDouble() = 0;
    // bool
    virtual const bool returnByConstValueBool() = 0;
    // enum
    virtual const Enum returnByConstValueEnum() = 0;
    virtual const ScopedEnum returnByConstValueScopedEnum() = 0;
    virtual const ScopedTypedEnum returnByConstValueScopedTypedEnum() = 0;

    // ****************************************************************************************************************
    // pass by value
    // ****************************************************************************************************************
    // int with specific bit number
    virtual bool passByValueUIntStrict(uint8_t v1, uint16_t v2, uint32_t v3, uint64_t v4) = 0;
    virtual bool passByValueIntStrict(int8_t v1, int16_t v2, int32_t v3, int64_t v4) = 0;
    // short int
    virtual bool passByValueShortInt(short v1, short int v2, signed short v3, signed short int v4) = 0;
    // unsigned short int
    virtual bool passByValueUnsignedShortInt(unsigned short v1, unsigned short int v2) = 0;
    // int
    virtual bool passByValueInt(int v1, signed v2, signed int v3) = 0;
    // unsigned int
    virtual bool passByValueUnsignedInt(unsigned v1, unsigned int v2) = 0;
    // long int
    virtual bool passByValueLongInt(long v1, long int v2, signed long v3, signed long int v4) = 0;
    // unsigned long int
    virtual bool passByValueUnsignedLongInt(unsigned long v1, unsigned long int v2) = 0;
    // long long int
    virtual bool passByValueLongLongInt(long long v1, long long int v2, signed long long v3, signed long long int v4) = 0;
    // unsigned long long int
    virtual bool passByValueUnsignedLongLongInt(unsigned long long v1, unsigned long long int v2) = 0;
    // char
    virtual bool passByValueChar(char v1, signed char v2, unsigned char v3) = 0;
    // string
    virtual bool passByValueString(string v1) = 0;
    // floating point
    virtual bool passByValueFloat(float v1, double v2, long double v3) = 0;
    // bool
    virtual bool passByValueBool(bool v1) = 0;
    // enum
    virtual bool passByValueEnum(Enum v1, ScopedEnum v2, ScopedTypedEnum v3) = 0;

    // ****************************************************************************************************************
    // pass by const value
    // ****************************************************************************************************************
    // int with specific bit number
    virtual bool passByConstValueUIntStrict(const uint8_t v1, const uint16_t v2, const uint32_t v3, const uint64_t v4) = 0;
    virtual bool passByConstValueIntStrict(const int8_t v1, const int16_t v2, const int32_t v3, const int64_t v4) = 0;
    // short int
    virtual bool passByConstValueShortInt(const short v1, const short int v2, const signed short v3, const signed short int v4) = 0;
    // unsigned short int
    virtual bool passByConstValueUnsignedShortInt(const unsigned short v1, const unsigned short int v2) = 0;
    // int
    virtual bool passByConstValueInt(const int v1, const signed v2, const signed int v3) = 0;
    // unsigned int
    virtual bool passByConstValueUnsignedInt(const unsigned v1, const unsigned int v2) = 0;
    // long int
    virtual bool passByConstValueLongInt(const long v1, const long int v2, const signed long v3, const signed long int v4) = 0;
    // unsigned long int
    virtual bool passByConstValueUnsignedLongInt(const unsigned long v1, const unsigned long int v2) = 0;
    // long long int
    virtual bool passByConstValueLongLongInt(const long long v1, const long long int v2, const signed long long v3, const signed long long int v4) = 0;
    // unsigned long long int
    virtual bool passByConstValueUnsignedLongLongInt(const unsigned long long v1, const unsigned long long int v2) = 0;
    // char
    virtual bool passByConstValueChar(const char v1, const signed char v2, const unsigned char v3) = 0;
    // string
    virtual bool passByConstValueString(const string v1) = 0;
    // floating point
    virtual bool passByConstValueFloat(const float v1, const double v2, const long double v3) = 0;
    // bool
    virtual bool passByConstValueBool(const bool v1) = 0;
    // enum
    virtual bool passByConstValueEnum(const Enum v1, const ScopedEnum v2, const ScopedTypedEnum v3) = 0;

    // ****************************************************************************************************************
    // pass by reference
    // ****************************************************************************************************************
    // int with specific bit number
    virtual void passByReferenceUIntStrict(uint8_t& v1, uint16_t& v2, uint32_t& v3, uint64_t& v4) = 0;
    virtual void passByReferenceIntStrict(int8_t& v1, int16_t& v2, int32_t& v3, int64_t& v4) = 0;
    // short int
    virtual void passByReferenceShortInt(short& v1, short int& v2, signed short& v3, signed short int& v4) = 0;
    // unsigned short int
    virtual void passByReferenceUnsignedShortInt(unsigned short& v1, unsigned short int& v2) = 0;
    // int
    virtual void passByReferenceInt(int& v1, signed& v2, signed int& v3) = 0;
    // unsigned int
    virtual void passByReferenceUnsignedInt(unsigned& v1, unsigned int& v2) = 0;
    // long int
    virtual void passByReferenceLongInt(long& v1, long int& v2, signed long& v3, signed long int& v4) = 0;
    // unsigned long int
    virtual void passByReferenceUnsignedLongInt(unsigned long& v1, unsigned long int& v2) = 0;
    // long long int
    virtual void passByReferenceLongLongInt(long long& v1, long long int& v2, signed long long& v3, signed long long int& v4) = 0;
    // unsigned long long int
    virtual void passByReferenceUnsignedLongLongInt(unsigned long long& v1, unsigned long long int& v2) = 0;
    // char
    virtual void passByReferenceChar(char& v1, signed char& v2, unsigned char& v3) = 0;
    // string
    virtual void passByReferenceString(string& v1) = 0;
    // floating point
    virtual void passByReferenceFloat(float& v1, double& v2, long double& v3) = 0;
    // bool
    virtual void passByReferenceBool(bool& v1) = 0;

    // ****************************************************************************************************************
    // pass by const reference
    // ****************************************************************************************************************
    // int with specific bit number
    virtual bool passByConstReferenceUIntStrict(const uint8_t& v1, const uint16_t& v2, const uint32_t& v3, const uint64_t& v4) = 0;
    virtual bool passByConstReferenceIntStrict(const int8_t& v1, const int16_t& v2, const int32_t& v3, const int64_t& v4) = 0;
    // short int
    virtual bool passByConstReferenceShortInt(const short& v1, const short int& v2, const signed short& v3, const signed short int& v4) = 0;
    // unsigned short int
    virtual bool passByConstReferenceUnsignedShortInt(const unsigned short& v1, const unsigned short int& v2) = 0;
    // int
    virtual bool passByConstReferenceInt(const int& v1, const signed& v2, const signed int& v3) = 0;
    // unsigned int
    virtual bool passByConstReferenceUnsignedInt(const unsigned& v1, const unsigned int& v2) = 0;
    // long int
    virtual bool passByConstReferenceLongInt(const long& v1, const long int& v2, const signed long& v3, const signed long int& v4) = 0;
    // unsigned long int
    virtual bool passByConstReferenceUnsignedLongInt(const unsigned long& v1, const unsigned long int& v2) = 0;
    // long long int
    virtual bool passByConstReferenceLongLongInt(const long long& v1, const long long int& v2, const signed long long& v3, const signed long long int& v4) = 0;
    // unsigned long long int
    virtual bool passByConstReferenceUnsignedLongLongInt(const unsigned long long& v1, const unsigned long long int& v2) = 0;
    // char
    virtual bool passByConstReferenceChar(const char& v1, const signed char& v2, const unsigned char& v3) = 0;
    // string
    virtual bool passByConstReferenceString(const string& v1) = 0;
    // floating point
    virtual bool passByConstReferenceFloat(const float& v1, const double& v2, const long double& v3) = 0;
    // bool
    virtual bool passByConstReferenceBool(const bool& v1) = 0;

    // ToDo:
    //      - nesting
    //      - pass by pointer
    //      - pass by const pointer
    //      - pass by const pointer const
    //      -
};

} // namespace Exchange
} // namespace WPEFramework
