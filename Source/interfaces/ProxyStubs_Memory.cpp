//
// generated automatically from "IMemory.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IMemory
//

#include "IMemory.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IMemory interface stub definitions
//
// Methods:
//  (0) virtual uint64_t Resident() const = 0
//  (1) virtual uint64_t Allocated() const = 0
//  (2) virtual uint64_t Shared() const = 0
//  (3) virtual uint8_t Processes() const = 0
//  (4) virtual const bool IsOperational() const = 0
//  (5) virtual void Observe(const uint32_t) = 0

ProxyStub::MethodHandler MemoryStubMethods[] = {
    // virtual uint64_t Resident() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::Resident() stub)");
        const uint64_t output = implementation->Resident();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint64_t>(output);
    },

    // virtual uint64_t Allocated() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::Allocated() stub)");
        const uint64_t output = implementation->Allocated();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint64_t>(output);
    },

    // virtual uint64_t Shared() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::Shared() stub)");
        const uint64_t output = implementation->Shared();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint64_t>(output);
    },

    // virtual uint8_t Processes() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::Processes() stub)");
        const uint8_t output = implementation->Processes();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint8_t>(output);
    },

    // virtual const bool IsOperational() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::IsOperational() stub)");
        const bool output = implementation->IsOperational();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual void Observe(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IMemory * implementation = input.Implementation<IMemory>();
        ASSERT((implementation != nullptr) && "Null IMemory implementation pointer (IMemory::Observe() stub)");
        implementation->Observe(param0);
    },

    nullptr
}; // MemoryStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IMemory interface proxy definitions
//
// Methods:
//  (0) virtual uint64_t Resident() const = 0
//  (1) virtual uint64_t Allocated() const = 0
//  (2) virtual uint64_t Shared() const = 0
//  (3) virtual uint8_t Processes() const = 0
//  (4) virtual const bool IsOperational() const = 0
//  (5) virtual void Observe(const uint32_t) = 0

class MemoryProxy final : public ProxyStub::UnknownProxyType<IMemory> {
public:
    MemoryProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    uint64_t Resident() const override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint64_t output = reader.Number<uint64_t>();

        return output;
    }

    uint64_t Allocated() const override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint64_t output = reader.Number<uint64_t>();

        return output;
    }

    uint64_t Shared() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint64_t output = reader.Number<uint64_t>();

        return output;
    }

    uint8_t Processes() const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint8_t output = reader.Number<uint8_t>();

        return output;
    }

    const bool IsOperational() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    void Observe(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);
    }
}; // class MemoryProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IMemory, MemoryStubMethods, ProxyStub::UnknownStub> MemoryStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IMemory, MemoryProxy, MemoryStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

