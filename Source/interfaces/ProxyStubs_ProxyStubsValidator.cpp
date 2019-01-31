//
// generated automatically from "IProxyStubsValidator.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IProxyStubsValidator
//

#include "IProxyStubsValidator.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IProxyStubsValidator interface stub definitions
//
// Methods:
//  (0) virtual void dummyAction() = 0 

ProxyStub::MethodHandler ProxyStubsValidatorStubMethods[] = {
    // virtual void dummyAction() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IProxyStubsValidator * implementation = input.Implementation<IProxyStubsValidator>();
        ASSERT((implementation != nullptr) && "Null IProxyStubsValidator implementation pointer (IProxyStubsValidator::dummyAction() stub)");
        implementation->dummyAction();
    },

    nullptr
}; // ProxyStubsValidatorStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IProxyStubsValidator interface proxy definitions
//
// Methods:
//  (0) virtual void dummyAction() = 0 

class ProxyStubsValidatorProxy final : public ProxyStub::UnknownProxyType<IProxyStubsValidator> {
public:
    ProxyStubsValidatorProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void dummyAction() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }
}; // class ProxyStubsValidatorProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IProxyStubsValidator, ProxyStubsValidatorStubMethods, ProxyStub::UnknownStub> ProxyStubsValidatorStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IProxyStubsValidator, ProxyStubsValidatorProxy, ProxyStubsValidatorStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

