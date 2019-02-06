//
// generated automatically from "IStreaming.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IStreaming
//   - class ::WPEFramework::Exchange::IStreaming::INotification
//

#include "IStreaming.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IStreaming interface stub definitions
//
// Methods:
//  (0) virtual void Register(IStreaming::INotification *) = 0
//  (1) virtual void Unregister(IStreaming::INotification *) = 0
//  (2) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (3) virtual void StartScan() = 0
//  (4) virtual void StopScan() = 0
//  (5) virtual void SetCurrentChannel(const string &) = 0
//  (6) virtual const string GetCurrentChannel() = 0
//  (7) virtual bool IsScanning() = 0
//  (8) virtual void Test(const string &) = 0

ProxyStub::MethodHandler StreamingStubMethods[] = {
    // virtual void Register(IStreaming::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IStreaming::INotification * param0 = reader.Number<IStreaming::INotification *>();
        ASSERT((param0 != nullptr) && "Null IStreaming interface pointer (IStreaming::Register() stub)");
        IStreaming::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IStreaming::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IStreaming::INotification proxy (IStreaming::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IStreaming::INotification proxy (IStreaming::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IStreaming * implementation = input.Implementation<IStreaming>();
            ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IStreaming::INotification::Release() failed (IStreaming::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IStreaming::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IStreaming::INotification * param0 = reader.Number<IStreaming::INotification *>();
        ASSERT((param0 != nullptr) && "Null IStreaming interface pointer (IStreaming::Unregister() stub)");
        IStreaming::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IStreaming::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IStreaming::INotification proxy (IStreaming::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IStreaming::INotification proxy (IStreaming::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IStreaming * implementation = input.Implementation<IStreaming>();
            ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IStreaming::INotification::Release() failed (IStreaming::Unregister() stub)");
            }
        }
    },

    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IStreaming interface pointer (IStreaming::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IStreaming::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IStreaming::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IStreaming * implementation = input.Implementation<IStreaming>();
            ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IStreaming::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual void StartScan() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::StartScan() stub)");
        implementation->StartScan();
    },

    // virtual void StopScan() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::StopScan() stub)");
        implementation->StopScan();
    },

    // virtual void SetCurrentChannel(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::SetCurrentChannel() stub)");
        implementation->SetCurrentChannel(param0);
    },

    // virtual const string GetCurrentChannel() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::GetCurrentChannel() stub)");
        const string output = implementation->GetCurrentChannel();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual bool IsScanning() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::IsScanning() stub)");
        const bool output = implementation->IsScanning();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual void Test(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IStreaming * implementation = input.Implementation<IStreaming>();
        ASSERT((implementation != nullptr) && "Null IStreaming implementation pointer (IStreaming::Test() stub)");
        implementation->Test(param0);
    },

    nullptr
}; // StreamingStubMethods[]

//
// IStreaming::INotification interface stub definitions
//
// Methods:
//  (0) virtual void ScanningStateChanged(const uint32_t) = 0
//  (1) virtual void CurrentChannelChanged(const string &) = 0
//  (2) virtual void TestNotification(const string &) = 0

ProxyStub::MethodHandler StreamingNotificationStubMethods[] = {
    // virtual void ScanningStateChanged(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IStreaming::INotification * implementation = input.Implementation<IStreaming::INotification>();
        ASSERT((implementation != nullptr) && "Null IStreaming::INotification implementation pointer (IStreaming::INotification::ScanningStateChanged() stub)");
        implementation->ScanningStateChanged(param0);
    },

    // virtual void CurrentChannelChanged(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IStreaming::INotification * implementation = input.Implementation<IStreaming::INotification>();
        ASSERT((implementation != nullptr) && "Null IStreaming::INotification implementation pointer (IStreaming::INotification::CurrentChannelChanged() stub)");
        implementation->CurrentChannelChanged(param0);
    },

    // virtual void TestNotification(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IStreaming::INotification * implementation = input.Implementation<IStreaming::INotification>();
        ASSERT((implementation != nullptr) && "Null IStreaming::INotification implementation pointer (IStreaming::INotification::TestNotification() stub)");
        implementation->TestNotification(param0);
    },

    nullptr
}; // StreamingNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IStreaming interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IStreaming::INotification *) = 0
//  (1) virtual void Unregister(IStreaming::INotification *) = 0
//  (2) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (3) virtual void StartScan() = 0
//  (4) virtual void StopScan() = 0
//  (5) virtual void SetCurrentChannel(const string &) = 0
//  (6) virtual const string GetCurrentChannel() = 0
//  (7) virtual bool IsScanning() = 0
//  (8) virtual void Test(const string &) = 0

class StreamingProxy final : public ProxyStub::UnknownProxyType<IStreaming> {
public:
    StreamingProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IStreaming::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IStreaming::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IStreaming::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IStreaming::INotification *>(param0);

        Invoke(newMessage);
    }

    uint32_t Configure(PluginHost::IShell * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<PluginHost::IShell *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void StartScan() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);
    }

    void StopScan() override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);
    }

    void SetCurrentChannel(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    const string GetCurrentChannel() override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    bool IsScanning() override
    {
        IPCMessage newMessage(BaseClass::Message(7));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    void Test(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(8));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class StreamingProxy

//
// IStreaming::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void ScanningStateChanged(const uint32_t) = 0
//  (1) virtual void CurrentChannelChanged(const string &) = 0
//  (2) virtual void TestNotification(const string &) = 0

class StreamingNotificationProxy final : public ProxyStub::UnknownProxyType<IStreaming::INotification> {
public:
    StreamingNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void ScanningStateChanged(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);
    }

    void CurrentChannelChanged(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void TestNotification(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class StreamingNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IStreaming::INotification, StreamingNotificationStubMethods, ProxyStub::UnknownStub> StreamingNotificationStub;
typedef ProxyStub::StubType<IStreaming, StreamingStubMethods, ProxyStub::UnknownStub> StreamingStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IStreaming::INotification, StreamingNotificationProxy, StreamingNotificationStub>();
        RPC::Administrator::Instance().Announce<IStreaming, StreamingProxy, StreamingStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

