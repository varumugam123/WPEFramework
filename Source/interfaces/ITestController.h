#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

struct ITestController : virtual public Core::IUnknown {
    enum { ID = 0x00000072 };

    struct ITest : virtual public Core::IUnknown {

		enum { ID = 0x00000073 };

        struct IIterator : virtual public Core::IUnknown {

            enum { ID = 0x00000074 };

            virtual void Reset() = 0;
            virtual bool IsValid() const = 0;
            virtual bool Next() = 0;

            virtual ITest* Test() const = 0;
        };

        virtual string Execute(const string& params) = 0;

        virtual string Description() const = 0;
        virtual string Signature() const = 0;
        virtual const string& Name() const = 0;

    };

    struct ICategory : virtual public Core::IUnknown {

		enum { ID = 0x00000075 };

        struct IIterator : virtual public Core::IUnknown {

            enum { ID = 0x00000076 };

            virtual void Reset() = 0;
            virtual bool IsValid() const = 0;
            virtual bool Next() = 0;

            virtual ICategory* Category() const = 0;
        };
 
        virtual const string& Category() const = 0;

        virtual void Setup() = 0;
        virtual void TearDown() = 0;

        virtual IIterator*  Tests() const = 0;
        virtual ITest*      Test(const string& name) const = 0;
    };
  
    virtual void Setup() = 0;
    virtual void TearDown() = 0;

    virtual ICategory::IIterator*  Categories() const = 0;
    virtual ICategory*             Category(const string& category) const =  0;

};

} // namespace Exchange
} // namespace WPEFramework
