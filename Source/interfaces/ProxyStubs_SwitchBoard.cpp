//
// generated automatically from "ISwitchBoard.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::ISwitchBoard
//   - class ::WPEFramework::Exchange::ISwitchBoard::INotification
//

#include "ISwitchBoard.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// ISwitchBoard interface stub definitions
//
// Methods:
//  (0) virtual void Register(ISwitchBoard::INotification *) = 0
//  (1) virtual void Unregister(ISwitchBoard::INotification *) = 0
//  (2) virtual bool IsActive(const string &) const = 0
//  (3) virtual uint32_t Activate(const string &) = 0
//  (4) virtual uint32_t Deactivate(const string &) = 0

ProxyStub::MethodHandler SwitchBoardStubMethods[] = {
    // virtual void Register(ISwitchBoard::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        ISwitchBoard::INotification * param0 = reader.Number<ISwitchBoard::INotification *>();
        ASSERT((param0 != nullptr) && "Null ISwitchBoard interface pointer (ISwitchBoard::Register() stub)");
        ISwitchBoard::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<ISwitchBoard::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create ISwitchBoard::INotification proxy (ISwitchBoard::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate ISwitchBoard::INotification proxy (ISwitchBoard::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            ISwitchBoard * implementation = input.Implementation<ISwitchBoard>();
            ASSERT((implementation != nullptr) && "Null ISwitchBoard implementation pointer (ISwitchBoard::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("ISwitchBoard::INotification::Release() failed (ISwitchBoard::Register() stub)");
            }
        }
    },

    // virtual void Unregister(ISwitchBoard::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        ISwitchBoard::INotification * param0 = reader.Number<ISwitchBoard::INotification *>();
        ASSERT((param0 != nullptr) && "Null ISwitchBoard interface pointer (ISwitchBoard::Unregister() stub)");
        ISwitchBoard::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<ISwitchBoard::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create ISwitchBoard::INotification proxy (ISwitchBoard::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate ISwitchBoard::INotification proxy (ISwitchBoard::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            ISwitchBoard * implementation = input.Implementation<ISwitchBoard>();
            ASSERT((implementation != nullptr) && "Null ISwitchBoard implementation pointer (ISwitchBoard::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("ISwitchBoard::INotification::Release() failed (ISwitchBoard::Unregister() stub)");
            }
        }
    },

    // virtual bool IsActive(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const ISwitchBoard * implementation = input.Implementation<ISwitchBoard>();
        ASSERT((implementation != nullptr) && "Null ISwitchBoard implementation pointer (ISwitchBoard::IsActive() stub)");
        const bool output = implementation->IsActive(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual uint32_t Activate(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        ISwitchBoard * implementation = input.Implementation<ISwitchBoard>();
        ASSERT((implementation != nullptr) && "Null ISwitchBoard implementation pointer (ISwitchBoard::Activate() stub)");
        const uint32_t output = implementation->Activate(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Deactivate(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        ISwitchBoard * implementation = input.Implementation<ISwitchBoard>();
        ASSERT((implementation != nullptr) && "Null ISwitchBoard implementation pointer (ISwitchBoard::Deactivate() stub)");
        const uint32_t output = implementation->Deactivate(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    nullptr
}; // SwitchBoardStubMethods[]

//
// ISwitchBoard::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Activated(const string &) = 0

ProxyStub::MethodHandler SwitchBoardNotificationStubMethods[] = {
    // virtual void Activated(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        ISwitchBoard::INotification * implementation = input.Implementation<ISwitchBoard::INotification>();
        ASSERT((implementation != nullptr) && "Null ISwitchBoard::INotification implementation pointer (ISwitchBoard::INotification::Activated() stub)");
        implementation->Activated(param0);
    },

    nullptr
}; // SwitchBoardNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// ISwitchBoard interface proxy definitions
//
// Methods:
//  (0) virtual void Register(ISwitchBoard::INotification *) = 0
//  (1) virtual void Unregister(ISwitchBoard::INotification *) = 0
//  (2) virtual bool IsActive(const string &) const = 0
//  (3) virtual uint32_t Activate(const string &) = 0
//  (4) virtual uint32_t Deactivate(const string &) = 0

class SwitchBoardProxy final : public ProxyStub::UnknownProxyType<ISwitchBoard> {
public:
    SwitchBoardProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(ISwitchBoard::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<ISwitchBoard::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(ISwitchBoard::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<ISwitchBoard::INotification *>(param0);

        Invoke(newMessage);
    }

    bool IsActive(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    uint32_t Activate(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Deactivate(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }
}; // class SwitchBoardProxy

//
// ISwitchBoard::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Activated(const string &) = 0

class SwitchBoardNotificationProxy final : public ProxyStub::UnknownProxyType<ISwitchBoard::INotification> {
public:
    SwitchBoardNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Activated(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class SwitchBoardNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<ISwitchBoard::INotification, SwitchBoardNotificationStubMethods, ProxyStub::UnknownStub> SwitchBoardNotificationStub;
typedef ProxyStub::StubType<ISwitchBoard, SwitchBoardStubMethods, ProxyStub::UnknownStub> SwitchBoardStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<ISwitchBoard::INotification, SwitchBoardNotificationProxy, SwitchBoardNotificationStub>();
        RPC::Administrator::Instance().Announce<ISwitchBoard, SwitchBoardProxy, SwitchBoardStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

