//
// generated automatically from "IDictionary.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IDictionary
//   - class ::WPEFramework::Exchange::IDictionary::INotification
//   - class ::WPEFramework::Exchange::IDictionary::IIterator
//

#include "IDictionary.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IDictionary interface stub definitions
//
// Methods:
//  (0) virtual void Register(const string &, IDictionary::INotification *) = 0
//  (1) virtual void Unregister(const string &, IDictionary::INotification *) = 0
//  (2) virtual bool Get(const string &, const string &, string &) const = 0
//  (3) virtual bool Set(const string &, const string &, const string &) = 0
//  (4) virtual IDictionary::IIterator * Get(const string &) const = 0

ProxyStub::MethodHandler DictionaryStubMethods[] = {
    // virtual void Register(const string &, IDictionary::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        IDictionary::INotification * param1 = reader.Number<IDictionary::INotification *>();
        ASSERT((param1 != nullptr) && "Null IDictionary interface pointer (IDictionary::Register() stub)");
        IDictionary::INotification * param1_proxy = RPC::Administrator::Instance().CreateProxy<IDictionary::INotification>(channel, param1, true, false);
        ASSERT((param1_proxy != nullptr) && "Failed to create IDictionary::INotification proxy (IDictionary::Register() stub)");

        if (param1_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IDictionary::INotification proxy (IDictionary::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IDictionary * implementation = input.Implementation<IDictionary>();
            ASSERT((implementation != nullptr) && "Null IDictionary implementation pointer (IDictionary::Register() stub)");
            implementation->Register(param0, param1_proxy);

            if (param1_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IDictionary::INotification::Release() failed (IDictionary::Register() stub)");
            }
        }
    },

    // virtual void Unregister(const string &, IDictionary::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        IDictionary::INotification * param1 = reader.Number<IDictionary::INotification *>();
        ASSERT((param1 != nullptr) && "Null IDictionary interface pointer (IDictionary::Unregister() stub)");
        IDictionary::INotification * param1_proxy = RPC::Administrator::Instance().CreateProxy<IDictionary::INotification>(channel, param1, true, false);
        ASSERT((param1_proxy != nullptr) && "Failed to create IDictionary::INotification proxy (IDictionary::Unregister() stub)");

        if (param1_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IDictionary::INotification proxy (IDictionary::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IDictionary * implementation = input.Implementation<IDictionary>();
            ASSERT((implementation != nullptr) && "Null IDictionary implementation pointer (IDictionary::Unregister() stub)");
            implementation->Unregister(param0, param1_proxy);

            if (param1_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IDictionary::INotification::Release() failed (IDictionary::Unregister() stub)");
            }
        }
    },

    // virtual bool Get(const string &, const string &, string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());
        RPC::Data::Frame::Reader reader(input.Reader());
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        // TODO
    },

    // virtual bool Set(const string &, const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();
        const string param2 = reader.Text();

        // call implementation
        IDictionary * implementation = input.Implementation<IDictionary>();
        ASSERT((implementation != nullptr) && "Null IDictionary implementation pointer (IDictionary::Set() stub)");
        const bool output = implementation->Set(param0, param1, param2);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual IDictionary::IIterator * Get(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const IDictionary * implementation = input.Implementation<IDictionary>();
        ASSERT((implementation != nullptr) && "Null IDictionary implementation pointer (IDictionary::Get() stub)");
        IDictionary::IIterator * output = implementation->Get(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IDictionary::IIterator *>(output);
    },

    nullptr
}; // DictionaryStubMethods[]

//
// IDictionary::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Modified(const string &, const string &, const string &) = 0

ProxyStub::MethodHandler DictionaryNotificationStubMethods[] = {
    // virtual void Modified(const string &, const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();
        const string param2 = reader.Text();

        // call implementation
        IDictionary::INotification * implementation = input.Implementation<IDictionary::INotification>();
        ASSERT((implementation != nullptr) && "Null IDictionary::INotification implementation pointer (IDictionary::INotification::Modified() stub)");
        implementation->Modified(param0, param1, param2);
    },

    nullptr
}; // DictionaryNotificationStubMethods[]

//
// IDictionary::IIterator interface stub definitions
//
// Methods:
//  (0) virtual void Reset() = 0
//  (1) virtual bool IsValid() const = 0
//  (2) virtual bool Next() = 0
//  (3) virtual const string Key() const = 0
//  (4) virtual const string Value() const = 0

ProxyStub::MethodHandler DictionaryIteratorStubMethods[] = {
    // virtual void Reset() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IDictionary::IIterator * implementation = input.Implementation<IDictionary::IIterator>();
        ASSERT((implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (IDictionary::IIterator::Reset() stub)");
        implementation->Reset();
    },

    // virtual bool IsValid() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IDictionary::IIterator * implementation = input.Implementation<IDictionary::IIterator>();
        ASSERT((implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (IDictionary::IIterator::IsValid() stub)");
        const bool output = implementation->IsValid();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool Next() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IDictionary::IIterator * implementation = input.Implementation<IDictionary::IIterator>();
        ASSERT((implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (IDictionary::IIterator::Next() stub)");
        const bool output = implementation->Next();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual const string Key() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IDictionary::IIterator * implementation = input.Implementation<IDictionary::IIterator>();
        ASSERT((implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (IDictionary::IIterator::Key() stub)");
        const string output = implementation->Key();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual const string Value() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IDictionary::IIterator * implementation = input.Implementation<IDictionary::IIterator>();
        ASSERT((implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (IDictionary::IIterator::Value() stub)");
        const string output = implementation->Value();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    nullptr
}; // DictionaryIteratorStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IDictionary interface proxy definitions
//
// Methods:
//  (0) virtual void Register(const string &, IDictionary::INotification *) = 0
//  (1) virtual void Unregister(const string &, IDictionary::INotification *) = 0
//  (2) virtual bool Get(const string &, const string &, string &) const = 0
//  (3) virtual bool Set(const string &, const string &, const string &) = 0
//  (4) virtual IDictionary::IIterator * Get(const string &) const = 0

class DictionaryProxy final : public ProxyStub::UnknownProxyType<IDictionary> {
public:
    DictionaryProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(const string & param0, IDictionary::INotification * param1) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Number<IDictionary::INotification *>(param1);

        Invoke(newMessage);
    }

    void Unregister(const string & param0, IDictionary::INotification * param1) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Number<IDictionary::INotification *>(param1);

        Invoke(newMessage);
    }

    bool Get(const string & param0, const string & param1, string & param2) const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        // TODO

        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        // TODO

        // return ...
    }

    bool Set(const string & param0, const string & param1, const string & param2) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);
        writer.Text(param2);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    IDictionary::IIterator * Get(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IDictionary::IIterator * output_implementation = reader.Number<IDictionary::IIterator *>();
        ASSERT((output_implementation != nullptr) && "Null IDictionary::IIterator implementation pointer (DictionaryProxy::Get() proxy stub)");
        IDictionary::IIterator * output = const_cast<DictionaryProxy &>(*this).CreateProxy<IDictionary::IIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IDictionary::IIterator proxy (DictionaryProxy::Get() proxy stub)");

        return output;
    }
}; // class DictionaryProxy

//
// IDictionary::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Modified(const string &, const string &, const string &) = 0

class DictionaryNotificationProxy final : public ProxyStub::UnknownProxyType<IDictionary::INotification> {
public:
    DictionaryNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Modified(const string & param0, const string & param1, const string & param2) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);
        writer.Text(param2);

        Invoke(newMessage);
    }
}; // class DictionaryNotificationProxy

//
// IDictionary::IIterator interface proxy definitions
//
// Methods:
//  (0) virtual void Reset() = 0
//  (1) virtual bool IsValid() const = 0
//  (2) virtual bool Next() = 0
//  (3) virtual const string Key() const = 0
//  (4) virtual const string Value() const = 0

class DictionaryIteratorProxy final : public ProxyStub::UnknownProxyType<IDictionary::IIterator> {
public:
    DictionaryIteratorProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Reset() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }

    bool IsValid() const override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool Next() override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    const string Key() const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    const string Value() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }
}; // class DictionaryIteratorProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IDictionary, DictionaryStubMethods, ProxyStub::UnknownStub> DictionaryStub;
typedef ProxyStub::StubType<IDictionary::IIterator, DictionaryIteratorStubMethods, ProxyStub::UnknownStub> DictionaryIteratorStub;
typedef ProxyStub::StubType<IDictionary::INotification, DictionaryNotificationStubMethods, ProxyStub::UnknownStub> DictionaryNotificationStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IDictionary, DictionaryProxy, DictionaryStub>();
        RPC::Administrator::Instance().Announce<IDictionary::IIterator, DictionaryIteratorProxy, DictionaryIteratorStub>();
        RPC::Administrator::Instance().Announce<IDictionary::INotification, DictionaryNotificationProxy, DictionaryNotificationStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

