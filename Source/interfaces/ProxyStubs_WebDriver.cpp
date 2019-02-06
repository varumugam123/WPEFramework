//
// generated automatically from "IWebDriver.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IWebDriver
//

#include "IWebDriver.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IWebDriver interface stub definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0

ProxyStub::MethodHandler WebDriverStubMethods[] = {
    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IWebDriver interface pointer (IWebDriver::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IWebDriver::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IWebDriver::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IWebDriver * implementation = input.Implementation<IWebDriver>();
            ASSERT((implementation != nullptr) && "Null IWebDriver implementation pointer (IWebDriver::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IWebDriver::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    nullptr
}; // WebDriverStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IWebDriver interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0

class WebDriverProxy final : public ProxyStub::UnknownProxyType<IWebDriver> {
public:
    WebDriverProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    uint32_t Configure(PluginHost::IShell * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<PluginHost::IShell *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }
}; // class WebDriverProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IWebDriver, WebDriverStubMethods, ProxyStub::UnknownStub> WebDriverStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IWebDriver, WebDriverProxy, WebDriverStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

