//
// generated automatically from "IIPNetwork.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IIPNetwork
//   - class ::WPEFramework::Exchange::IIPNetwork::IDNSServers
//

#include "IIPNetwork.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IIPNetwork interface stub definitions
//
// Methods:
//  (0) virtual uint32_t AddAddress(const string &) = 0
//  (1) virtual uint32_t AddAddress(const string &, const string &, const string &, const string &, const uint8_t) = 0
//  (2) virtual uint32_t RemoveAddress(const string &, const string &, const string &, const string &) = 0
//  (3) virtual uint32_t AddDNS(IIPNetwork::IDNSServers *) = 0
//  (4) virtual uint32_t RemoveDNS(IIPNetwork::IDNSServers *) = 0

ProxyStub::MethodHandler IPNetworkStubMethods[] = {
    // virtual uint32_t AddAddress(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IIPNetwork * implementation = input.Implementation<IIPNetwork>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork implementation pointer (IIPNetwork::AddAddress() stub)");
        const uint32_t output = implementation->AddAddress(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t AddAddress(const string &, const string &, const string &, const string &, const uint8_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();
        const string param2 = reader.Text();
        const string param3 = reader.Text();
        const uint8_t param4 = reader.Number<uint8_t>();

        // call implementation
        IIPNetwork * implementation = input.Implementation<IIPNetwork>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork implementation pointer (IIPNetwork::AddAddress() stub)");
        const uint32_t output = implementation->AddAddress(param0, param1, param2, param3, param4);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t RemoveAddress(const string &, const string &, const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();
        const string param2 = reader.Text();
        const string param3 = reader.Text();

        // call implementation
        IIPNetwork * implementation = input.Implementation<IIPNetwork>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork implementation pointer (IIPNetwork::RemoveAddress() stub)");
        const uint32_t output = implementation->RemoveAddress(param0, param1, param2, param3);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t AddDNS(IIPNetwork::IDNSServers *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IIPNetwork::IDNSServers * param0 = reader.Number<IIPNetwork::IDNSServers *>();
        ASSERT((param0 != nullptr) && "Null IIPNetwork interface pointer (IIPNetwork::AddDNS() stub)");
        IIPNetwork::IDNSServers * param0_proxy = RPC::Administrator::Instance().CreateProxy<IIPNetwork::IDNSServers>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IIPNetwork::IDNSServers proxy (IIPNetwork::AddDNS() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IIPNetwork::IDNSServers proxy (IIPNetwork::AddDNS() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IIPNetwork * implementation = input.Implementation<IIPNetwork>();
            ASSERT((implementation != nullptr) && "Null IIPNetwork implementation pointer (IIPNetwork::AddDNS() stub)");
            const uint32_t output = implementation->AddDNS(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IIPNetwork::IDNSServers::Release() failed (IIPNetwork::AddDNS() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual uint32_t RemoveDNS(IIPNetwork::IDNSServers *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IIPNetwork::IDNSServers * param0 = reader.Number<IIPNetwork::IDNSServers *>();
        ASSERT((param0 != nullptr) && "Null IIPNetwork interface pointer (IIPNetwork::RemoveDNS() stub)");
        IIPNetwork::IDNSServers * param0_proxy = RPC::Administrator::Instance().CreateProxy<IIPNetwork::IDNSServers>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IIPNetwork::IDNSServers proxy (IIPNetwork::RemoveDNS() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IIPNetwork::IDNSServers proxy (IIPNetwork::RemoveDNS() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IIPNetwork * implementation = input.Implementation<IIPNetwork>();
            ASSERT((implementation != nullptr) && "Null IIPNetwork implementation pointer (IIPNetwork::RemoveDNS() stub)");
            const uint32_t output = implementation->RemoveDNS(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IIPNetwork::IDNSServers::Release() failed (IIPNetwork::RemoveDNS() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    nullptr
}; // IPNetworkStubMethods[]

//
// IIPNetwork::IDNSServers interface stub definitions
//
// Methods:
//  (0) virtual void Reset() = 0
//  (1) virtual bool Next() = 0
//  (2) virtual string Server() const = 0

ProxyStub::MethodHandler IPNetworkDNSServersStubMethods[] = {
    // virtual void Reset() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IIPNetwork::IDNSServers * implementation = input.Implementation<IIPNetwork::IDNSServers>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork::IDNSServers implementation pointer (IIPNetwork::IDNSServers::Reset() stub)");
        implementation->Reset();
    },

    // virtual bool Next() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IIPNetwork::IDNSServers * implementation = input.Implementation<IIPNetwork::IDNSServers>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork::IDNSServers implementation pointer (IIPNetwork::IDNSServers::Next() stub)");
        const bool output = implementation->Next();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual string Server() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IIPNetwork::IDNSServers * implementation = input.Implementation<IIPNetwork::IDNSServers>();
        ASSERT((implementation != nullptr) && "Null IIPNetwork::IDNSServers implementation pointer (IIPNetwork::IDNSServers::Server() stub)");
        const string output = implementation->Server();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    nullptr
}; // IPNetworkDNSServersStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IIPNetwork interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t AddAddress(const string &) = 0
//  (1) virtual uint32_t AddAddress(const string &, const string &, const string &, const string &, const uint8_t) = 0
//  (2) virtual uint32_t RemoveAddress(const string &, const string &, const string &, const string &) = 0
//  (3) virtual uint32_t AddDNS(IIPNetwork::IDNSServers *) = 0
//  (4) virtual uint32_t RemoveDNS(IIPNetwork::IDNSServers *) = 0

class IPNetworkProxy final : public ProxyStub::UnknownProxyType<IIPNetwork> {
public:
    IPNetworkProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    uint32_t AddAddress(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t AddAddress(const string & param0, const string & param1, const string & param2, const string & param3, const uint8_t param4) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);
        writer.Text(param2);
        writer.Text(param3);
        writer.Number<const uint8_t>(param4);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t RemoveAddress(const string & param0, const string & param1, const string & param2, const string & param3) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);
        writer.Text(param2);
        writer.Text(param3);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t AddDNS(IIPNetwork::IDNSServers * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IIPNetwork::IDNSServers *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t RemoveDNS(IIPNetwork::IDNSServers * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IIPNetwork::IDNSServers *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }
}; // class IPNetworkProxy

//
// IIPNetwork::IDNSServers interface proxy definitions
//
// Methods:
//  (0) virtual void Reset() = 0
//  (1) virtual bool Next() = 0
//  (2) virtual string Server() const = 0

class IPNetworkDNSServersProxy final : public ProxyStub::UnknownProxyType<IIPNetwork::IDNSServers> {
public:
    IPNetworkDNSServersProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Reset() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }

    bool Next() override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    string Server() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }
}; // class IPNetworkDNSServersProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IIPNetwork::IDNSServers, IPNetworkDNSServersStubMethods, ProxyStub::UnknownStub> IPNetworkDNSServersStub;
typedef ProxyStub::StubType<IIPNetwork, IPNetworkStubMethods, ProxyStub::UnknownStub> IPNetworkStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IIPNetwork::IDNSServers, IPNetworkDNSServersProxy, IPNetworkDNSServersStub>();
        RPC::Administrator::Instance().Announce<IIPNetwork, IPNetworkProxy, IPNetworkStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

