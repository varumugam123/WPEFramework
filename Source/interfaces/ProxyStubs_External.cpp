//
// generated automatically from "IExternal.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IExternal
//   - class ::WPEFramework::Exchange::IExternal::INotification
//   - class ::WPEFramework::Exchange::IExternal::IFactory
//   - class ::WPEFramework::Exchange::IExternal::IFactory::INotification
//

#include "IExternal.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IExternal interface stub definitions
//
// Methods:
//  (0) virtual void Register(IExternal::IFactory::INotification *) = 0 
//  (1) virtual void Unregister(IExternal::IFactory::INotification *) = 0 
//  (2) virtual IExternal::condition Condition() const = 0 
//  (3) virtual uint32_t Identifier() const = 0 
//  (4) virtual uint32_t Type() const = 0 
//  (5) virtual int32_t Minimum() const = 0 
//  (6) virtual int32_t Maximum() const = 0 
//  (7) virtual uint32_t Get(int32_t &) const = 0 
//  (8) virtual uint32_t Set(const int32_t) = 0 
//  (9) virtual void Trigger() = 0 

ProxyStub::MethodHandler ExternalStubMethods[] = {
    // virtual void Register(IExternal::IFactory::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal::IFactory::INotification * param0 = reader.Number<IExternal::IFactory::INotification *>();
        ASSERT((param0 != nullptr) && "Null IExternal interface pointer (IExternal::Register() stub)");
        IExternal::IFactory::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal::IFactory::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal::IFactory::INotification proxy (IExternal::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal::IFactory::INotification proxy (IExternal::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal * implementation = input.Implementation<IExternal>();
            ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::IFactory::INotification::Release() failed (IExternal::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IExternal::IFactory::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal::IFactory::INotification * param0 = reader.Number<IExternal::IFactory::INotification *>();
        ASSERT((param0 != nullptr) && "Null IExternal interface pointer (IExternal::Unregister() stub)");
        IExternal::IFactory::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal::IFactory::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal::IFactory::INotification proxy (IExternal::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal::IFactory::INotification proxy (IExternal::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal * implementation = input.Implementation<IExternal>();
            ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::IFactory::INotification::Release() failed (IExternal::Unregister() stub)");
            }
        }
    },

    // virtual IExternal::condition Condition() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Condition() stub)");
        const IExternal::condition output = implementation->Condition();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IExternal::condition>(output);
    },

    // virtual uint32_t Identifier() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Identifier() stub)");
        const uint32_t output = implementation->Identifier();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Type() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Type() stub)");
        const uint32_t output = implementation->Type();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual int32_t Minimum() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Minimum() stub)");
        const int32_t output = implementation->Minimum();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<int32_t>(output);
    },

    // virtual int32_t Maximum() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Maximum() stub)");
        const int32_t output = implementation->Maximum();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<int32_t>(output);
    },

    // virtual uint32_t Get(int32_t &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        int32_t param0 = reader.Number<int32_t>();

        // call implementation
        const IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Get() stub)");
        const uint32_t output = implementation->Get(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Set(const int32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const int32_t param0 = reader.Number<int32_t>();

        // call implementation
        IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Set() stub)");
        const uint32_t output = implementation->Set(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual void Trigger() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IExternal * implementation = input.Implementation<IExternal>();
        ASSERT((implementation != nullptr) && "Null IExternal implementation pointer (IExternal::Trigger() stub)");
        implementation->Trigger();
    },

    nullptr
}; // ExternalStubMethods[]

//
// IExternal::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Update() = 0 

ProxyStub::MethodHandler ExternalNotificationStubMethods[] = {
    // virtual void Update() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IExternal::INotification * implementation = input.Implementation<IExternal::INotification>();
        ASSERT((implementation != nullptr) && "Null IExternal::INotification implementation pointer (IExternal::INotification::Update() stub)");
        implementation->Update();
    },

    nullptr
}; // ExternalNotificationStubMethods[]

//
// IExternal::IFactory interface stub definitions
//
// Methods:
//  (0) virtual void Register(IExternal::IFactory::INotification *) = 0 
//  (1) virtual void Unregister(IExternal::IFactory::INotification *) = 0 
//  (2) virtual IExternal * Resource(const uint32_t) = 0 

ProxyStub::MethodHandler ExternalFactoryStubMethods[] = {
    // virtual void Register(IExternal::IFactory::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal::IFactory::INotification * param0 = reader.Number<IExternal::IFactory::INotification *>();
        ASSERT((param0 != nullptr) && "Null IExternal::IFactory interface pointer (IExternal::IFactory::Register() stub)");
        IExternal::IFactory::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal::IFactory::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal::IFactory::INotification proxy (IExternal::IFactory::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal::IFactory::INotification proxy (IExternal::IFactory::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal::IFactory * implementation = input.Implementation<IExternal::IFactory>();
            ASSERT((implementation != nullptr) && "Null IExternal::IFactory implementation pointer (IExternal::IFactory::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::IFactory::INotification::Release() failed (IExternal::IFactory::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IExternal::IFactory::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal::IFactory::INotification * param0 = reader.Number<IExternal::IFactory::INotification *>();
        ASSERT((param0 != nullptr) && "Null IExternal::IFactory interface pointer (IExternal::IFactory::Unregister() stub)");
        IExternal::IFactory::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal::IFactory::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal::IFactory::INotification proxy (IExternal::IFactory::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal::IFactory::INotification proxy (IExternal::IFactory::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal::IFactory * implementation = input.Implementation<IExternal::IFactory>();
            ASSERT((implementation != nullptr) && "Null IExternal::IFactory implementation pointer (IExternal::IFactory::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::IFactory::INotification::Release() failed (IExternal::IFactory::Unregister() stub)");
            }
        }
    },

    // virtual IExternal * Resource(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IExternal::IFactory * implementation = input.Implementation<IExternal::IFactory>();
        ASSERT((implementation != nullptr) && "Null IExternal::IFactory implementation pointer (IExternal::IFactory::Resource() stub)");
        IExternal * output = implementation->Resource(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IExternal *>(output);
    },

    nullptr
}; // ExternalFactoryStubMethods[]

//
// IExternal::IFactory::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Activated(IExternal *) = 0 
//  (1) virtual void Deactivated(IExternal *) = 0 

ProxyStub::MethodHandler ExternalFactoryNotificationStubMethods[] = {
    // virtual void Activated(IExternal *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal * param0 = reader.Number<IExternal *>();
        ASSERT((param0 != nullptr) && "Null IExternal::IFactory::INotification interface pointer (IExternal::IFactory::INotification::Activated() stub)");
        IExternal * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal proxy (IExternal::IFactory::INotification::Activated() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal proxy (IExternal::IFactory::INotification::Activated() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal::IFactory::INotification * implementation = input.Implementation<IExternal::IFactory::INotification>();
            ASSERT((implementation != nullptr) && "Null IExternal::IFactory::INotification implementation pointer (IExternal::IFactory::INotification::Activated() stub)");
            implementation->Activated(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::Release() failed (IExternal::IFactory::INotification::Activated() stub)");
            }
        }
    },

    // virtual void Deactivated(IExternal *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IExternal * param0 = reader.Number<IExternal *>();
        ASSERT((param0 != nullptr) && "Null IExternal::IFactory::INotification interface pointer (IExternal::IFactory::INotification::Deactivated() stub)");
        IExternal * param0_proxy = RPC::Administrator::Instance().CreateProxy<IExternal>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IExternal proxy (IExternal::IFactory::INotification::Deactivated() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IExternal proxy (IExternal::IFactory::INotification::Deactivated() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IExternal::IFactory::INotification * implementation = input.Implementation<IExternal::IFactory::INotification>();
            ASSERT((implementation != nullptr) && "Null IExternal::IFactory::INotification implementation pointer (IExternal::IFactory::INotification::Deactivated() stub)");
            implementation->Deactivated(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IExternal::Release() failed (IExternal::IFactory::INotification::Deactivated() stub)");
            }
        }
    },

    nullptr
}; // ExternalFactoryNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IExternal interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IExternal::IFactory::INotification *) = 0 
//  (1) virtual void Unregister(IExternal::IFactory::INotification *) = 0 
//  (2) virtual IExternal::condition Condition() const = 0 
//  (3) virtual uint32_t Identifier() const = 0 
//  (4) virtual uint32_t Type() const = 0 
//  (5) virtual int32_t Minimum() const = 0 
//  (6) virtual int32_t Maximum() const = 0 
//  (7) virtual uint32_t Get(int32_t &) const = 0 
//  (8) virtual uint32_t Set(const int32_t) = 0 
//  (9) virtual void Trigger() = 0 

class ExternalProxy final : public ProxyStub::UnknownProxyType<IExternal> {
public:
    ExternalProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IExternal::IFactory::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal::IFactory::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IExternal::IFactory::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal::IFactory::INotification *>(param0);

        Invoke(newMessage);
    }

    IExternal::condition Condition() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const IExternal::condition output = reader.Number<IExternal::condition>();

        return output;
    }

    uint32_t Identifier() const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Type() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    int32_t Minimum() const override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const int32_t output = reader.Number<int32_t>();

        return output;
    }

    int32_t Maximum() const override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const int32_t output = reader.Number<int32_t>();

        return output;
    }

    uint32_t Get(int32_t & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(7));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<int32_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Set(const int32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(8));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const int32_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Trigger() override
    {
        IPCMessage newMessage(BaseClass::Message(9));

        Invoke(newMessage);
    }
}; // class ExternalProxy

//
// IExternal::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Update() = 0 

class ExternalNotificationProxy final : public ProxyStub::UnknownProxyType<IExternal::INotification> {
public:
    ExternalNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Update() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }
}; // class ExternalNotificationProxy

//
// IExternal::IFactory interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IExternal::IFactory::INotification *) = 0 
//  (1) virtual void Unregister(IExternal::IFactory::INotification *) = 0 
//  (2) virtual IExternal * Resource(const uint32_t) = 0 

class ExternalFactoryProxy final : public ProxyStub::UnknownProxyType<IExternal::IFactory> {
public:
    ExternalFactoryProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IExternal::IFactory::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal::IFactory::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IExternal::IFactory::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal::IFactory::INotification *>(param0);

        Invoke(newMessage);
    }

    IExternal * Resource(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IExternal * output_implementation = reader.Number<IExternal *>();
        ASSERT((output_implementation != nullptr) && "Null IExternal implementation pointer (ExternalFactoryProxy::Resource() proxy stub)");
        IExternal * output = CreateProxy<IExternal>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IExternal proxy (ExternalFactoryProxy::Resource() proxy stub)");

        return output;
    }
}; // class ExternalFactoryProxy

//
// IExternal::IFactory::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Activated(IExternal *) = 0 
//  (1) virtual void Deactivated(IExternal *) = 0 

class ExternalFactoryNotificationProxy final : public ProxyStub::UnknownProxyType<IExternal::IFactory::INotification> {
public:
    ExternalFactoryNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Activated(IExternal * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal *>(param0);

        Invoke(newMessage);
    }

    void Deactivated(IExternal * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IExternal *>(param0);

        Invoke(newMessage);
    }
}; // class ExternalFactoryNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IExternal::INotification, ExternalNotificationStubMethods, ProxyStub::UnknownStub> ExternalNotificationStub;
typedef ProxyStub::StubType<IExternal, ExternalStubMethods, ProxyStub::UnknownStub> ExternalStub;
typedef ProxyStub::StubType<IExternal::IFactory, ExternalFactoryStubMethods, ProxyStub::UnknownStub> ExternalFactoryStub;
typedef ProxyStub::StubType<IExternal::IFactory::INotification, ExternalFactoryNotificationStubMethods, ProxyStub::UnknownStub> ExternalFactoryNotificationStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IExternal::INotification, ExternalNotificationProxy, ExternalNotificationStub>();
        RPC::Administrator::Instance().Announce<IExternal, ExternalProxy, ExternalStub>();
        RPC::Administrator::Instance().Announce<IExternal::IFactory, ExternalFactoryProxy, ExternalFactoryStub>();
        RPC::Administrator::Instance().Announce<IExternal::IFactory::INotification, ExternalFactoryNotificationProxy, ExternalFactoryNotificationStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

