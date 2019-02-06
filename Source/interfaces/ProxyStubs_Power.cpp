//
// generated automatically from "IPower.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IPower
//   - class ::WPEFramework::Exchange::IPower::INotification
//

#include "IPower.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IPower interface stub definitions
//
// Methods:
//  (0) virtual void Register(IPower::INotification *) = 0
//  (1) virtual void Unregister(IPower::INotification *) = 0
//  (2) virtual IPower::PCState GetState() const = 0
//  (3) virtual IPower::PCStatus SetState(const IPower::PCState, const uint32_t) = 0
//  (4) virtual void PowerKey() = 0
//  (5) virtual void Configure(const string &) = 0

ProxyStub::MethodHandler PowerStubMethods[] = {
    // virtual void Register(IPower::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IPower::INotification * param0 = reader.Number<IPower::INotification *>();
        ASSERT((param0 != nullptr) && "Null IPower interface pointer (IPower::Register() stub)");
        IPower::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IPower::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IPower::INotification proxy (IPower::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IPower::INotification proxy (IPower::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IPower * implementation = input.Implementation<IPower>();
            ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IPower::INotification::Release() failed (IPower::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IPower::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IPower::INotification * param0 = reader.Number<IPower::INotification *>();
        ASSERT((param0 != nullptr) && "Null IPower interface pointer (IPower::Unregister() stub)");
        IPower::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IPower::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IPower::INotification proxy (IPower::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IPower::INotification proxy (IPower::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IPower * implementation = input.Implementation<IPower>();
            ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IPower::INotification::Release() failed (IPower::Unregister() stub)");
            }
        }
    },

    // virtual IPower::PCState GetState() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IPower * implementation = input.Implementation<IPower>();
        ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::GetState() stub)");
        const IPower::PCState output = implementation->GetState();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IPower::PCState>(output);
    },

    // virtual IPower::PCStatus SetState(const IPower::PCState, const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const IPower::PCState param0 = reader.Number<IPower::PCState>();
        const uint32_t param1 = reader.Number<uint32_t>();

        // call implementation
        IPower * implementation = input.Implementation<IPower>();
        ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::SetState() stub)");
        const IPower::PCStatus output = implementation->SetState(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IPower::PCStatus>(output);
    },

    // virtual void PowerKey() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IPower * implementation = input.Implementation<IPower>();
        ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::PowerKey() stub)");
        implementation->PowerKey();
    },

    // virtual void Configure(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IPower * implementation = input.Implementation<IPower>();
        ASSERT((implementation != nullptr) && "Null IPower implementation pointer (IPower::Configure() stub)");
        implementation->Configure(param0);
    },

    nullptr
}; // PowerStubMethods[]

//
// IPower::INotification interface stub definitions
//
// Methods:
//  (0) virtual void StateChange(const IPower::PCState) = 0

ProxyStub::MethodHandler PowerNotificationStubMethods[] = {
    // virtual void StateChange(const IPower::PCState) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const IPower::PCState param0 = reader.Number<IPower::PCState>();

        // call implementation
        IPower::INotification * implementation = input.Implementation<IPower::INotification>();
        ASSERT((implementation != nullptr) && "Null IPower::INotification implementation pointer (IPower::INotification::StateChange() stub)");
        implementation->StateChange(param0);
    },

    nullptr
}; // PowerNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IPower interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IPower::INotification *) = 0
//  (1) virtual void Unregister(IPower::INotification *) = 0
//  (2) virtual IPower::PCState GetState() const = 0
//  (3) virtual IPower::PCStatus SetState(const IPower::PCState, const uint32_t) = 0
//  (4) virtual void PowerKey() = 0
//  (5) virtual void Configure(const string &) = 0

class PowerProxy final : public ProxyStub::UnknownProxyType<IPower> {
public:
    PowerProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IPower::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IPower::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IPower::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IPower::INotification *>(param0);

        Invoke(newMessage);
    }

    IPower::PCState GetState() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const IPower::PCState output = reader.Number<IPower::PCState>();

        return output;
    }

    IPower::PCStatus SetState(const IPower::PCState param0, const uint32_t param1) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const IPower::PCState>(param0);
        writer.Number<const uint32_t>(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const IPower::PCStatus output = reader.Number<IPower::PCStatus>();

        return output;
    }

    void PowerKey() override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);
    }

    void Configure(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class PowerProxy

//
// IPower::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void StateChange(const IPower::PCState) = 0

class PowerNotificationProxy final : public ProxyStub::UnknownProxyType<IPower::INotification> {
public:
    PowerNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void StateChange(const IPower::PCState param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const IPower::PCState>(param0);

        Invoke(newMessage);
    }
}; // class PowerNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IPower::INotification, PowerNotificationStubMethods, ProxyStub::UnknownStub> PowerNotificationStub;
typedef ProxyStub::StubType<IPower, PowerStubMethods, ProxyStub::UnknownStub> PowerStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IPower::INotification, PowerNotificationProxy, PowerNotificationStub>();
        RPC::Administrator::Instance().Announce<IPower, PowerProxy, PowerStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

