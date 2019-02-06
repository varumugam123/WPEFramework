//
// generated automatically from "IContentDecryption.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IContentDecryption
//

#include "IContentDecryption.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IContentDecryption interface stub definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (1) virtual uint32_t Reset() = 0
//  (2) virtual RPC::IStringIterator * Systems() const = 0
//  (3) virtual RPC::IStringIterator * Designators(const string &) const = 0
//  (4) virtual RPC::IStringIterator * Sessions(const string &) const = 0

ProxyStub::MethodHandler ContentDecryptionStubMethods[] = {
    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IContentDecryption interface pointer (IContentDecryption::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IContentDecryption::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IContentDecryption::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IContentDecryption * implementation = input.Implementation<IContentDecryption>();
            ASSERT((implementation != nullptr) && "Null IContentDecryption implementation pointer (IContentDecryption::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IContentDecryption::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual uint32_t Reset() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IContentDecryption * implementation = input.Implementation<IContentDecryption>();
        ASSERT((implementation != nullptr) && "Null IContentDecryption implementation pointer (IContentDecryption::Reset() stub)");
        const uint32_t output = implementation->Reset();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual RPC::IStringIterator * Systems() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IContentDecryption * implementation = input.Implementation<IContentDecryption>();
        ASSERT((implementation != nullptr) && "Null IContentDecryption implementation pointer (IContentDecryption::Systems() stub)");
        RPC::IStringIterator * output = implementation->Systems();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<RPC::IStringIterator *>(output);
    },

    // virtual RPC::IStringIterator * Designators(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const IContentDecryption * implementation = input.Implementation<IContentDecryption>();
        ASSERT((implementation != nullptr) && "Null IContentDecryption implementation pointer (IContentDecryption::Designators() stub)");
        RPC::IStringIterator * output = implementation->Designators(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<RPC::IStringIterator *>(output);
    },

    // virtual RPC::IStringIterator * Sessions(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const IContentDecryption * implementation = input.Implementation<IContentDecryption>();
        ASSERT((implementation != nullptr) && "Null IContentDecryption implementation pointer (IContentDecryption::Sessions() stub)");
        RPC::IStringIterator * output = implementation->Sessions(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<RPC::IStringIterator *>(output);
    },

    nullptr
}; // ContentDecryptionStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IContentDecryption interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0
//  (1) virtual uint32_t Reset() = 0
//  (2) virtual RPC::IStringIterator * Systems() const = 0
//  (3) virtual RPC::IStringIterator * Designators(const string &) const = 0
//  (4) virtual RPC::IStringIterator * Sessions(const string &) const = 0

class ContentDecryptionProxy final : public ProxyStub::UnknownProxyType<IContentDecryption> {
public:
    ContentDecryptionProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
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

    uint32_t Reset() override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    RPC::IStringIterator * Systems() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        RPC::IStringIterator * output_implementation = reader.Number<RPC::IStringIterator *>();
        ASSERT((output_implementation != nullptr) && "Null RPC::IStringIterator implementation pointer (ContentDecryptionProxy::Systems() proxy stub)");
        RPC::IStringIterator * output = const_cast<ContentDecryptionProxy &>(*this).CreateProxy<RPC::IStringIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get RPC::IStringIterator proxy (ContentDecryptionProxy::Systems() proxy stub)");

        return output;
    }

    RPC::IStringIterator * Designators(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        RPC::IStringIterator * output_implementation = reader.Number<RPC::IStringIterator *>();
        ASSERT((output_implementation != nullptr) && "Null RPC::IStringIterator implementation pointer (ContentDecryptionProxy::Designators() proxy stub)");
        RPC::IStringIterator * output = const_cast<ContentDecryptionProxy &>(*this).CreateProxy<RPC::IStringIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get RPC::IStringIterator proxy (ContentDecryptionProxy::Designators() proxy stub)");

        return output;
    }

    RPC::IStringIterator * Sessions(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        RPC::IStringIterator * output_implementation = reader.Number<RPC::IStringIterator *>();
        ASSERT((output_implementation != nullptr) && "Null RPC::IStringIterator implementation pointer (ContentDecryptionProxy::Sessions() proxy stub)");
        RPC::IStringIterator * output = const_cast<ContentDecryptionProxy &>(*this).CreateProxy<RPC::IStringIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get RPC::IStringIterator proxy (ContentDecryptionProxy::Sessions() proxy stub)");

        return output;
    }
}; // class ContentDecryptionProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IContentDecryption, ContentDecryptionStubMethods, ProxyStub::UnknownStub> ContentDecryptionStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IContentDecryption, ContentDecryptionProxy, ContentDecryptionStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

