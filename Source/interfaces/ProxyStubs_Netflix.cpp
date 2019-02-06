//
// generated automatically from "INetflix.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::INetflix
//   - class ::WPEFramework::Exchange::INetflix::INotification
//

#include "INetflix.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// INetflix interface stub definitions
//
// Methods:
//  (0) virtual void Register(INetflix::INotification *) = 0
//  (1) virtual void Unregister(INetflix::INotification *) = 0
//  (2) virtual string GetESN() const = 0
//  (3) virtual void FactoryReset() = 0
//  (4) virtual void SystemCommand(const string &) = 0
//  (5) virtual void Language(const string &) = 0
//  (6) virtual void SetVisible(bool) = 0

ProxyStub::MethodHandler NetflixStubMethods[] = {
    // virtual void Register(INetflix::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        INetflix::INotification * param0 = reader.Number<INetflix::INotification *>();
        ASSERT((param0 != nullptr) && "Null INetflix interface pointer (INetflix::Register() stub)");
        INetflix::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<INetflix::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create INetflix::INotification proxy (INetflix::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate INetflix::INotification proxy (INetflix::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            INetflix * implementation = input.Implementation<INetflix>();
            ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("INetflix::INotification::Release() failed (INetflix::Register() stub)");
            }
        }
    },

    // virtual void Unregister(INetflix::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        INetflix::INotification * param0 = reader.Number<INetflix::INotification *>();
        ASSERT((param0 != nullptr) && "Null INetflix interface pointer (INetflix::Unregister() stub)");
        INetflix::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<INetflix::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create INetflix::INotification proxy (INetflix::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate INetflix::INotification proxy (INetflix::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            INetflix * implementation = input.Implementation<INetflix>();
            ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("INetflix::INotification::Release() failed (INetflix::Unregister() stub)");
            }
        }
    },

    // virtual string GetESN() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const INetflix * implementation = input.Implementation<INetflix>();
        ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::GetESN() stub)");
        const string output = implementation->GetESN();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual void FactoryReset() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        INetflix * implementation = input.Implementation<INetflix>();
        ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::FactoryReset() stub)");
        implementation->FactoryReset();
    },

    // virtual void SystemCommand(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        INetflix * implementation = input.Implementation<INetflix>();
        ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::SystemCommand() stub)");
        implementation->SystemCommand(param0);
    },

    // virtual void Language(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        INetflix * implementation = input.Implementation<INetflix>();
        ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::Language() stub)");
        implementation->Language(param0);
    },

    // virtual void SetVisible(bool) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const bool param0 = reader.Boolean();

        // call implementation
        INetflix * implementation = input.Implementation<INetflix>();
        ASSERT((implementation != nullptr) && "Null INetflix implementation pointer (INetflix::SetVisible() stub)");
        implementation->SetVisible(param0);
    },

    nullptr
}; // NetflixStubMethods[]

//
// INetflix::INotification interface stub definitions
//
// Methods:
//  (0) virtual void StateChange(const INetflix::state) = 0

ProxyStub::MethodHandler NetflixNotificationStubMethods[] = {
    // virtual void StateChange(const INetflix::state) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const INetflix::state param0 = reader.Number<INetflix::state>();

        // call implementation
        INetflix::INotification * implementation = input.Implementation<INetflix::INotification>();
        ASSERT((implementation != nullptr) && "Null INetflix::INotification implementation pointer (INetflix::INotification::StateChange() stub)");
        implementation->StateChange(param0);
    },

    nullptr
}; // NetflixNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// INetflix interface proxy definitions
//
// Methods:
//  (0) virtual void Register(INetflix::INotification *) = 0
//  (1) virtual void Unregister(INetflix::INotification *) = 0
//  (2) virtual string GetESN() const = 0
//  (3) virtual void FactoryReset() = 0
//  (4) virtual void SystemCommand(const string &) = 0
//  (5) virtual void Language(const string &) = 0
//  (6) virtual void SetVisible(bool) = 0

class NetflixProxy final : public ProxyStub::UnknownProxyType<INetflix> {
public:
    NetflixProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(INetflix::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<INetflix::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(INetflix::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<INetflix::INotification *>(param0);

        Invoke(newMessage);
    }

    string GetESN() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    void FactoryReset() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);
    }

    void SystemCommand(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void Language(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void SetVisible(bool param0) override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Boolean(param0);

        Invoke(newMessage);
    }
}; // class NetflixProxy

//
// INetflix::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void StateChange(const INetflix::state) = 0

class NetflixNotificationProxy final : public ProxyStub::UnknownProxyType<INetflix::INotification> {
public:
    NetflixNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void StateChange(const INetflix::state param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const INetflix::state>(param0);

        Invoke(newMessage);
    }
}; // class NetflixNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<INetflix::INotification, NetflixNotificationStubMethods, ProxyStub::UnknownStub> NetflixNotificationStub;
typedef ProxyStub::StubType<INetflix, NetflixStubMethods, ProxyStub::UnknownStub> NetflixStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<INetflix::INotification, NetflixNotificationProxy, NetflixNotificationStub>();
        RPC::Administrator::Instance().Announce<INetflix, NetflixProxy, NetflixStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

