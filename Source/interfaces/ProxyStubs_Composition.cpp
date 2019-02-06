//
// generated automatically from "IComposition.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IComposition
//   - class ::WPEFramework::Exchange::IComposition::IClient
//   - class ::WPEFramework::Exchange::IComposition::INotification
//

#include "IComposition.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IComposition interface stub definitions
//
// Methods:
//  (0) virtual void Register(IComposition::INotification *) = 0
//  (1) virtual void Unregister(IComposition::INotification *) = 0
//  (2) virtual IComposition::IClient * Client(const uint8_t) = 0
//  (3) virtual IComposition::IClient * Client(const string &) = 0
//  (4) virtual uint32_t Geometry(const string &, const IComposition::Rectangle &) = 0
//  (5) virtual IComposition::Rectangle Geometry(const string &) const = 0
//  (6) virtual uint32_t ToTop(const string &) = 0
//  (7) virtual uint32_t PutBelow(const string &, const string &) = 0
//  (8) virtual RPC::IStringIterator * ClientsInZorder() const = 0
//  (9) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (10) virtual void Resolution(const IComposition::ScreenResolution) = 0
//  (11) virtual IComposition::ScreenResolution Resolution() const = 0

ProxyStub::MethodHandler CompositionStubMethods[] = {
    // virtual void Register(IComposition::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IComposition::INotification * param0 = reader.Number<IComposition::INotification *>();
        ASSERT((param0 != nullptr) && "Null IComposition interface pointer (IComposition::Register() stub)");
        IComposition::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IComposition::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IComposition::INotification proxy (IComposition::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IComposition::INotification proxy (IComposition::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IComposition * implementation = input.Implementation<IComposition>();
            ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IComposition::INotification::Release() failed (IComposition::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IComposition::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IComposition::INotification * param0 = reader.Number<IComposition::INotification *>();
        ASSERT((param0 != nullptr) && "Null IComposition interface pointer (IComposition::Unregister() stub)");
        IComposition::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IComposition::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IComposition::INotification proxy (IComposition::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IComposition::INotification proxy (IComposition::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IComposition * implementation = input.Implementation<IComposition>();
            ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IComposition::INotification::Release() failed (IComposition::Unregister() stub)");
            }
        }
    },

    // virtual IComposition::IClient * Client(const uint8_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint8_t param0 = reader.Number<uint8_t>();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Client() stub)");
        IComposition::IClient * output = implementation->Client(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IComposition::IClient *>(output);
    },

    // virtual IComposition::IClient * Client(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Client() stub)");
        IComposition::IClient * output = implementation->Client(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IComposition::IClient *>(output);
    },

    // virtual uint32_t Geometry(const string &, const IComposition::Rectangle &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        // (decompose IComposition::Rectangle)
        IComposition::Rectangle param1;
        param1.x = reader.Number<uint32_t>();
        param1.y = reader.Number<uint32_t>();
        param1.width = reader.Number<uint32_t>();
        param1.height = reader.Number<uint32_t>();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Geometry() stub)");
        const uint32_t output = implementation->Geometry(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual IComposition::Rectangle Geometry(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Geometry() stub)");
        const IComposition::Rectangle output = implementation->Geometry(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        // (decompose IComposition::Rectangle)
        writer.Number<uint32_t>(output.x);
        writer.Number<uint32_t>(output.y);
        writer.Number<uint32_t>(output.width);
        writer.Number<uint32_t>(output.height);
    },

    // virtual uint32_t ToTop(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::ToTop() stub)");
        const uint32_t output = implementation->ToTop(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t PutBelow(const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::PutBelow() stub)");
        const uint32_t output = implementation->PutBelow(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual RPC::IStringIterator * ClientsInZorder() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::ClientsInZorder() stub)");
        RPC::IStringIterator * output = implementation->ClientsInZorder();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<RPC::IStringIterator *>(output);
    },

    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IComposition interface pointer (IComposition::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IComposition::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IComposition::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IComposition * implementation = input.Implementation<IComposition>();
            ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IComposition::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual void Resolution(const IComposition::ScreenResolution) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const IComposition::ScreenResolution param0 = reader.Number<IComposition::ScreenResolution>();

        // call implementation
        IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Resolution() stub)");
        implementation->Resolution(param0);
    },

    // virtual IComposition::ScreenResolution Resolution() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IComposition * implementation = input.Implementation<IComposition>();
        ASSERT((implementation != nullptr) && "Null IComposition implementation pointer (IComposition::Resolution() stub)");
        const IComposition::ScreenResolution output = implementation->Resolution();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IComposition::ScreenResolution>(output);
    },

    nullptr
}; // CompositionStubMethods[]

//
// IComposition::IClient interface stub definitions
//
// Methods:
//  (0) virtual string Name() const = 0
//  (1) virtual void Kill() = 0
//  (2) virtual void Opacity(const uint32_t) = 0
//  (3) virtual void ChangedGeometry(const IComposition::Rectangle &) = 0
//  (4) virtual void ChangedZOrder(const uint8_t) = 0

ProxyStub::MethodHandler CompositionClientStubMethods[] = {
    // virtual string Name() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IComposition::IClient * implementation = input.Implementation<IComposition::IClient>();
        ASSERT((implementation != nullptr) && "Null IComposition::IClient implementation pointer (IComposition::IClient::Name() stub)");
        const string output = implementation->Name();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual void Kill() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IComposition::IClient * implementation = input.Implementation<IComposition::IClient>();
        ASSERT((implementation != nullptr) && "Null IComposition::IClient implementation pointer (IComposition::IClient::Kill() stub)");
        implementation->Kill();
    },

    // virtual void Opacity(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IComposition::IClient * implementation = input.Implementation<IComposition::IClient>();
        ASSERT((implementation != nullptr) && "Null IComposition::IClient implementation pointer (IComposition::IClient::Opacity() stub)");
        implementation->Opacity(param0);
    },

    // virtual void ChangedGeometry(const IComposition::Rectangle &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        // (decompose IComposition::Rectangle)
        IComposition::Rectangle param0;
        param0.x = reader.Number<uint32_t>();
        param0.y = reader.Number<uint32_t>();
        param0.width = reader.Number<uint32_t>();
        param0.height = reader.Number<uint32_t>();

        // call implementation
        IComposition::IClient * implementation = input.Implementation<IComposition::IClient>();
        ASSERT((implementation != nullptr) && "Null IComposition::IClient implementation pointer (IComposition::IClient::ChangedGeometry() stub)");
        implementation->ChangedGeometry(param0);
    },

    // virtual void ChangedZOrder(const uint8_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint8_t param0 = reader.Number<uint8_t>();

        // call implementation
        IComposition::IClient * implementation = input.Implementation<IComposition::IClient>();
        ASSERT((implementation != nullptr) && "Null IComposition::IClient implementation pointer (IComposition::IClient::ChangedZOrder() stub)");
        implementation->ChangedZOrder(param0);
    },

    nullptr
}; // CompositionClientStubMethods[]

//
// IComposition::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Attached(IComposition::IClient *) = 0
//  (1) virtual void Detached(IComposition::IClient *) = 0

ProxyStub::MethodHandler CompositionNotificationStubMethods[] = {
    // virtual void Attached(IComposition::IClient *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IComposition::IClient * param0 = reader.Number<IComposition::IClient *>();
        ASSERT((param0 != nullptr) && "Null IComposition::INotification interface pointer (IComposition::INotification::Attached() stub)");
        IComposition::IClient * param0_proxy = RPC::Administrator::Instance().CreateProxy<IComposition::IClient>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IComposition::IClient proxy (IComposition::INotification::Attached() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IComposition::IClient proxy (IComposition::INotification::Attached() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IComposition::INotification * implementation = input.Implementation<IComposition::INotification>();
            ASSERT((implementation != nullptr) && "Null IComposition::INotification implementation pointer (IComposition::INotification::Attached() stub)");
            implementation->Attached(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IComposition::IClient::Release() failed (IComposition::INotification::Attached() stub)");
            }
        }
    },

    // virtual void Detached(IComposition::IClient *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IComposition::IClient * param0 = reader.Number<IComposition::IClient *>();
        ASSERT((param0 != nullptr) && "Null IComposition::INotification interface pointer (IComposition::INotification::Detached() stub)");
        IComposition::IClient * param0_proxy = RPC::Administrator::Instance().CreateProxy<IComposition::IClient>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IComposition::IClient proxy (IComposition::INotification::Detached() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IComposition::IClient proxy (IComposition::INotification::Detached() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IComposition::INotification * implementation = input.Implementation<IComposition::INotification>();
            ASSERT((implementation != nullptr) && "Null IComposition::INotification implementation pointer (IComposition::INotification::Detached() stub)");
            implementation->Detached(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IComposition::IClient::Release() failed (IComposition::INotification::Detached() stub)");
            }
        }
    },

    nullptr
}; // CompositionNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IComposition interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IComposition::INotification *) = 0
//  (1) virtual void Unregister(IComposition::INotification *) = 0
//  (2) virtual IComposition::IClient * Client(const uint8_t) = 0
//  (3) virtual IComposition::IClient * Client(const string &) = 0
//  (4) virtual uint32_t Geometry(const string &, const IComposition::Rectangle &) = 0
//  (5) virtual IComposition::Rectangle Geometry(const string &) const = 0
//  (6) virtual uint32_t ToTop(const string &) = 0
//  (7) virtual uint32_t PutBelow(const string &, const string &) = 0
//  (8) virtual RPC::IStringIterator * ClientsInZorder() const = 0
//  (9) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (10) virtual void Resolution(const IComposition::ScreenResolution) = 0
//  (11) virtual IComposition::ScreenResolution Resolution() const = 0

class CompositionProxy final : public ProxyStub::UnknownProxyType<IComposition> {
public:
    CompositionProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IComposition::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IComposition::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IComposition::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IComposition::INotification *>(param0);

        Invoke(newMessage);
    }

    IComposition::IClient * Client(const uint8_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint8_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IComposition::IClient * output_implementation = reader.Number<IComposition::IClient *>();
        ASSERT((output_implementation != nullptr) && "Null IComposition::IClient implementation pointer (CompositionProxy::Client() proxy stub)");
        IComposition::IClient * output = CreateProxy<IComposition::IClient>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IComposition::IClient proxy (CompositionProxy::Client() proxy stub)");

        return output;
    }

    IComposition::IClient * Client(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IComposition::IClient * output_implementation = reader.Number<IComposition::IClient *>();
        ASSERT((output_implementation != nullptr) && "Null IComposition::IClient implementation pointer (CompositionProxy::Client() proxy stub)");
        IComposition::IClient * output = CreateProxy<IComposition::IClient>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IComposition::IClient proxy (CompositionProxy::Client() proxy stub)");

        return output;
    }

    uint32_t Geometry(const string & param0, const IComposition::Rectangle & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        // (decompose IComposition::Rectangle)
        writer.Number<uint32_t>(param1.x);
        writer.Number<uint32_t>(param1.y);
        writer.Number<uint32_t>(param1.width);
        writer.Number<uint32_t>(param1.height);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    IComposition::Rectangle Geometry(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        // (decompose IComposition::Rectangle)
        IComposition::Rectangle output;
        output.x = reader.Number<uint32_t>();
        output.y = reader.Number<uint32_t>();
        output.width = reader.Number<uint32_t>();
        output.height = reader.Number<uint32_t>();

        return output;
    }

    uint32_t ToTop(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t PutBelow(const string & param0, const string & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(7));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    RPC::IStringIterator * ClientsInZorder() const override
    {
        IPCMessage newMessage(BaseClass::Message(8));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        RPC::IStringIterator * output_implementation = reader.Number<RPC::IStringIterator *>();
        ASSERT((output_implementation != nullptr) && "Null RPC::IStringIterator implementation pointer (CompositionProxy::ClientsInZorder() proxy stub)");
        RPC::IStringIterator * output = const_cast<CompositionProxy &>(*this).CreateProxy<RPC::IStringIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get RPC::IStringIterator proxy (CompositionProxy::ClientsInZorder() proxy stub)");

        return output;
    }

    uint32_t Configure(PluginHost::IShell * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(9));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<PluginHost::IShell *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Resolution(const IComposition::ScreenResolution param0) override
    {
        IPCMessage newMessage(BaseClass::Message(10));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const IComposition::ScreenResolution>(param0);

        Invoke(newMessage);
    }

    IComposition::ScreenResolution Resolution() const override
    {
        IPCMessage newMessage(BaseClass::Message(11));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const IComposition::ScreenResolution output = reader.Number<IComposition::ScreenResolution>();

        return output;
    }
}; // class CompositionProxy

//
// IComposition::IClient interface proxy definitions
//
// Methods:
//  (0) virtual string Name() const = 0
//  (1) virtual void Kill() = 0
//  (2) virtual void Opacity(const uint32_t) = 0
//  (3) virtual void ChangedGeometry(const IComposition::Rectangle &) = 0
//  (4) virtual void ChangedZOrder(const uint8_t) = 0

class CompositionClientProxy final : public ProxyStub::UnknownProxyType<IComposition::IClient> {
public:
    CompositionClientProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    string Name() const override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    void Kill() override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);
    }

    void Opacity(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);
    }

    void ChangedGeometry(const IComposition::Rectangle & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        // (decompose IComposition::Rectangle)
        writer.Number<uint32_t>(param0.x);
        writer.Number<uint32_t>(param0.y);
        writer.Number<uint32_t>(param0.width);
        writer.Number<uint32_t>(param0.height);

        Invoke(newMessage);
    }

    void ChangedZOrder(const uint8_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint8_t>(param0);

        Invoke(newMessage);
    }
}; // class CompositionClientProxy

//
// IComposition::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Attached(IComposition::IClient *) = 0
//  (1) virtual void Detached(IComposition::IClient *) = 0

class CompositionNotificationProxy final : public ProxyStub::UnknownProxyType<IComposition::INotification> {
public:
    CompositionNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Attached(IComposition::IClient * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IComposition::IClient *>(param0);

        Invoke(newMessage);
    }

    void Detached(IComposition::IClient * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IComposition::IClient *>(param0);

        Invoke(newMessage);
    }
}; // class CompositionNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IComposition::IClient, CompositionClientStubMethods, ProxyStub::UnknownStub> CompositionClientStub;
typedef ProxyStub::StubType<IComposition::INotification, CompositionNotificationStubMethods, ProxyStub::UnknownStub> CompositionNotificationStub;
typedef ProxyStub::StubType<IComposition, CompositionStubMethods, ProxyStub::UnknownStub> CompositionStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IComposition::IClient, CompositionClientProxy, CompositionClientStub>();
        RPC::Administrator::Instance().Announce<IComposition::INotification, CompositionNotificationProxy, CompositionNotificationStub>();
        RPC::Administrator::Instance().Announce<IComposition, CompositionProxy, CompositionStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

