#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

struct IProxyStubsValidator : virtual public Core::IUnknown {
    // ToDo: set proper ID value
    enum { ID = 0x00000081 };

    virtual ~IProxyStubsValidator() {};

    virtual void dummyAction() = 0;
};

} // namespace Exchange
} // namespace WPEFramework
