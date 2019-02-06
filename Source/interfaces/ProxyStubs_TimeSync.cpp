//
// generated automatically from "ITimeSync.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::ITimeSync
//   - class ::WPEFramework::Exchange::ITimeSync::INotification
//

#include "ITimeSync.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// ITimeSync interface stub definitions
//
// Methods:
//  (0) virtual void Register(ITimeSync::INotification *) = 0
//  (1) virtual void Unregister(ITimeSync::INotification *) = 0
//  (2) virtual uint32_t Synchronize() = 0
//  (3) virtual void Cancel() = 0
//  (4) virtual string Source() const = 0
//  (5) virtual uint64_t SyncTime() const = 0

ProxyStub::MethodHandler TimeSyncStubMethods[] = {
    // virtual void Register(ITimeSync::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        ITimeSync::INotification * param0 = reader.Number<ITimeSync::INotification *>();
        ASSERT((param0 != nullptr) && "Null ITimeSync interface pointer (ITimeSync::Register() stub)");
        ITimeSync::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<ITimeSync::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create ITimeSync::INotification proxy (ITimeSync::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate ITimeSync::INotification proxy (ITimeSync::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            ITimeSync * implementation = input.Implementation<ITimeSync>();
            ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("ITimeSync::INotification::Release() failed (ITimeSync::Register() stub)");
            }
        }
    },

    // virtual void Unregister(ITimeSync::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        ITimeSync::INotification * param0 = reader.Number<ITimeSync::INotification *>();
        ASSERT((param0 != nullptr) && "Null ITimeSync interface pointer (ITimeSync::Unregister() stub)");
        ITimeSync::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<ITimeSync::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create ITimeSync::INotification proxy (ITimeSync::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate ITimeSync::INotification proxy (ITimeSync::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            ITimeSync * implementation = input.Implementation<ITimeSync>();
            ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("ITimeSync::INotification::Release() failed (ITimeSync::Unregister() stub)");
            }
        }
    },

    // virtual uint32_t Synchronize() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        ITimeSync * implementation = input.Implementation<ITimeSync>();
        ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::Synchronize() stub)");
        const uint32_t output = implementation->Synchronize();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual void Cancel() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        ITimeSync * implementation = input.Implementation<ITimeSync>();
        ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::Cancel() stub)");
        implementation->Cancel();
    },

    // virtual string Source() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const ITimeSync * implementation = input.Implementation<ITimeSync>();
        ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::Source() stub)");
        const string output = implementation->Source();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual uint64_t SyncTime() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const ITimeSync * implementation = input.Implementation<ITimeSync>();
        ASSERT((implementation != nullptr) && "Null ITimeSync implementation pointer (ITimeSync::SyncTime() stub)");
        const uint64_t output = implementation->SyncTime();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint64_t>(output);
    },

    nullptr
}; // TimeSyncStubMethods[]

//
// ITimeSync::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Completed() = 0

ProxyStub::MethodHandler TimeSyncNotificationStubMethods[] = {
    // virtual void Completed() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        ITimeSync::INotification * implementation = input.Implementation<ITimeSync::INotification>();
        ASSERT((implementation != nullptr) && "Null ITimeSync::INotification implementation pointer (ITimeSync::INotification::Completed() stub)");
        implementation->Completed();
    },

    nullptr
}; // TimeSyncNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// ITimeSync interface proxy definitions
//
// Methods:
//  (0) virtual void Register(ITimeSync::INotification *) = 0
//  (1) virtual void Unregister(ITimeSync::INotification *) = 0
//  (2) virtual uint32_t Synchronize() = 0
//  (3) virtual void Cancel() = 0
//  (4) virtual string Source() const = 0
//  (5) virtual uint64_t SyncTime() const = 0

class TimeSyncProxy final : public ProxyStub::UnknownProxyType<ITimeSync> {
public:
    TimeSyncProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(ITimeSync::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<ITimeSync::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(ITimeSync::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<ITimeSync::INotification *>(param0);

        Invoke(newMessage);
    }

    uint32_t Synchronize() override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Cancel() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);
    }

    string Source() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    uint64_t SyncTime() const override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint64_t output = reader.Number<uint64_t>();

        return output;
    }
}; // class TimeSyncProxy

//
// ITimeSync::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Completed() = 0

class TimeSyncNotificationProxy final : public ProxyStub::UnknownProxyType<ITimeSync::INotification> {
public:
    TimeSyncNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Completed() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }
}; // class TimeSyncNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<ITimeSync, TimeSyncStubMethods, ProxyStub::UnknownStub> TimeSyncStub;
typedef ProxyStub::StubType<ITimeSync::INotification, TimeSyncNotificationStubMethods, ProxyStub::UnknownStub> TimeSyncNotificationStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<ITimeSync, TimeSyncProxy, TimeSyncStub>();
        RPC::Administrator::Instance().Announce<ITimeSync::INotification, TimeSyncNotificationProxy, TimeSyncNotificationStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

