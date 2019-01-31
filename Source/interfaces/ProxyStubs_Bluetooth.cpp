//
// generated automatically from "IBluetooth.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IBluetooth
//   - class ::WPEFramework::Exchange::IBluetooth::IDevice
//   - class ::WPEFramework::Exchange::IBluetooth::IDevice::IIterator
//   - class ::WPEFramework::Exchange::IBluetooth::INotification
//

#include "IBluetooth.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IBluetooth interface stub definitions
//
// Methods:
//  (0) virtual bool IsScanning() const = 0 
//  (1) virtual uint32_t Register(IBluetooth::INotification *) = 0 
//  (2) virtual uint32_t Unregister(IBluetooth::INotification *) = 0 
//  (3) virtual bool Scan(const bool) = 0 
//  (4) virtual IBluetooth::IDevice * Device(const string &) = 0 
//  (5) virtual IBluetooth::IDevice::IIterator * Devices() = 0 

ProxyStub::MethodHandler BluetoothStubMethods[] = {
    // virtual bool IsScanning() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth * implementation = input.Implementation<IBluetooth>();
        ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::IsScanning() stub)");
        const bool output = implementation->IsScanning();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual uint32_t Register(IBluetooth::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IBluetooth::INotification * param0 = reader.Number<IBluetooth::INotification *>();
        ASSERT((param0 != nullptr) && "Null IBluetooth interface pointer (IBluetooth::Register() stub)");
        IBluetooth::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IBluetooth::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IBluetooth::INotification proxy (IBluetooth::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IBluetooth::INotification proxy (IBluetooth::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IBluetooth * implementation = input.Implementation<IBluetooth>();
            ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::Register() stub)");
            const uint32_t output = implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IBluetooth::INotification::Release() failed (IBluetooth::Register() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual uint32_t Unregister(IBluetooth::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IBluetooth::INotification * param0 = reader.Number<IBluetooth::INotification *>();
        ASSERT((param0 != nullptr) && "Null IBluetooth interface pointer (IBluetooth::Unregister() stub)");
        IBluetooth::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IBluetooth::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IBluetooth::INotification proxy (IBluetooth::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IBluetooth::INotification proxy (IBluetooth::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IBluetooth * implementation = input.Implementation<IBluetooth>();
            ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::Unregister() stub)");
            const uint32_t output = implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IBluetooth::INotification::Release() failed (IBluetooth::Unregister() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual bool Scan(const bool) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const bool param0 = reader.Boolean();

        // call implementation
        IBluetooth * implementation = input.Implementation<IBluetooth>();
        ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::Scan() stub)");
        const bool output = implementation->Scan(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual IBluetooth::IDevice * Device(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IBluetooth * implementation = input.Implementation<IBluetooth>();
        ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::Device() stub)");
        IBluetooth::IDevice * output = implementation->Device(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IBluetooth::IDevice *>(output);
    },

    // virtual IBluetooth::IDevice::IIterator * Devices() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBluetooth * implementation = input.Implementation<IBluetooth>();
        ASSERT((implementation != nullptr) && "Null IBluetooth implementation pointer (IBluetooth::Devices() stub)");
        IBluetooth::IDevice::IIterator * output = implementation->Devices();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IBluetooth::IDevice::IIterator *>(output);
    },

    nullptr
}; // BluetoothStubMethods[]

//
// IBluetooth::IDevice interface stub definitions
//
// Methods:
//  (0) virtual string Address() const = 0 
//  (1) virtual string Name() const = 0 
//  (2) virtual bool IsDiscovered() const = 0 
//  (3) virtual bool IsPaired() const = 0 
//  (4) virtual bool IsConnected() const = 0 
//  (5) virtual uint32_t Pair(const string &) = 0 
//  (6) virtual uint32_t Unpair() = 0 

ProxyStub::MethodHandler BluetoothDeviceStubMethods[] = {
    // virtual string Address() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::Address() stub)");
        const string output = implementation->Address();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual string Name() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::Name() stub)");
        const string output = implementation->Name();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual bool IsDiscovered() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::IsDiscovered() stub)");
        const bool output = implementation->IsDiscovered();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool IsPaired() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::IsPaired() stub)");
        const bool output = implementation->IsPaired();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool IsConnected() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::IsConnected() stub)");
        const bool output = implementation->IsConnected();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual uint32_t Pair(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::Pair() stub)");
        const uint32_t output = implementation->Pair(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Unpair() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBluetooth::IDevice * implementation = input.Implementation<IBluetooth::IDevice>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (IBluetooth::IDevice::Unpair() stub)");
        const uint32_t output = implementation->Unpair();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    nullptr
}; // BluetoothDeviceStubMethods[]

//
// IBluetooth::IDevice::IIterator interface stub definitions
//
// Methods:
//  (0) virtual void Reset() = 0 
//  (1) virtual bool IsValid() const = 0 
//  (2) virtual bool Next() = 0 
//  (3) virtual IBluetooth::IDevice * Current() = 0 

ProxyStub::MethodHandler BluetoothDeviceIteratorStubMethods[] = {
    // virtual void Reset() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBluetooth::IDevice::IIterator * implementation = input.Implementation<IBluetooth::IDevice::IIterator>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice::IIterator implementation pointer (IBluetooth::IDevice::IIterator::Reset() stub)");
        implementation->Reset();
    },

    // virtual bool IsValid() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBluetooth::IDevice::IIterator * implementation = input.Implementation<IBluetooth::IDevice::IIterator>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice::IIterator implementation pointer (IBluetooth::IDevice::IIterator::IsValid() stub)");
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
        IBluetooth::IDevice::IIterator * implementation = input.Implementation<IBluetooth::IDevice::IIterator>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice::IIterator implementation pointer (IBluetooth::IDevice::IIterator::Next() stub)");
        const bool output = implementation->Next();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual IBluetooth::IDevice * Current() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBluetooth::IDevice::IIterator * implementation = input.Implementation<IBluetooth::IDevice::IIterator>();
        ASSERT((implementation != nullptr) && "Null IBluetooth::IDevice::IIterator implementation pointer (IBluetooth::IDevice::IIterator::Current() stub)");
        IBluetooth::IDevice * output = implementation->Current();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<IBluetooth::IDevice *>(output);
    },

    nullptr
}; // BluetoothDeviceIteratorStubMethods[]

//
// IBluetooth::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Update(IBluetooth::IDevice *) = 0 

ProxyStub::MethodHandler BluetoothNotificationStubMethods[] = {
    // virtual void Update(IBluetooth::IDevice *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IBluetooth::IDevice * param0 = reader.Number<IBluetooth::IDevice *>();
        ASSERT((param0 != nullptr) && "Null IBluetooth::INotification interface pointer (IBluetooth::INotification::Update() stub)");
        IBluetooth::IDevice * param0_proxy = RPC::Administrator::Instance().CreateProxy<IBluetooth::IDevice>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IBluetooth::IDevice proxy (IBluetooth::INotification::Update() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IBluetooth::IDevice proxy (IBluetooth::INotification::Update() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IBluetooth::INotification * implementation = input.Implementation<IBluetooth::INotification>();
            ASSERT((implementation != nullptr) && "Null IBluetooth::INotification implementation pointer (IBluetooth::INotification::Update() stub)");
            implementation->Update(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IBluetooth::IDevice::Release() failed (IBluetooth::INotification::Update() stub)");
            }
        }
    },

    nullptr
}; // BluetoothNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IBluetooth interface proxy definitions
//
// Methods:
//  (0) virtual bool IsScanning() const = 0 
//  (1) virtual uint32_t Register(IBluetooth::INotification *) = 0 
//  (2) virtual uint32_t Unregister(IBluetooth::INotification *) = 0 
//  (3) virtual bool Scan(const bool) = 0 
//  (4) virtual IBluetooth::IDevice * Device(const string &) = 0 
//  (5) virtual IBluetooth::IDevice::IIterator * Devices() = 0 

class BluetoothProxy final : public ProxyStub::UnknownProxyType<IBluetooth> {
public:
    BluetoothProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    bool IsScanning() const override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    uint32_t Register(IBluetooth::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IBluetooth::INotification *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Unregister(IBluetooth::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IBluetooth::INotification *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    bool Scan(const bool param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Boolean(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    IBluetooth::IDevice * Device(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IBluetooth::IDevice * output_implementation = reader.Number<IBluetooth::IDevice *>();
        ASSERT((output_implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (BluetoothProxy::Device() proxy stub)");
        IBluetooth::IDevice * output = CreateProxy<IBluetooth::IDevice>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IBluetooth::IDevice proxy (BluetoothProxy::Device() proxy stub)");

        return output;
    }

    IBluetooth::IDevice::IIterator * Devices() override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IBluetooth::IDevice::IIterator * output_implementation = reader.Number<IBluetooth::IDevice::IIterator *>();
        ASSERT((output_implementation != nullptr) && "Null IBluetooth::IDevice::IIterator implementation pointer (BluetoothProxy::Devices() proxy stub)");
        IBluetooth::IDevice::IIterator * output = CreateProxy<IBluetooth::IDevice::IIterator>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IBluetooth::IDevice::IIterator proxy (BluetoothProxy::Devices() proxy stub)");

        return output;
    }
}; // class BluetoothProxy

//
// IBluetooth::IDevice interface proxy definitions
//
// Methods:
//  (0) virtual string Address() const = 0 
//  (1) virtual string Name() const = 0 
//  (2) virtual bool IsDiscovered() const = 0 
//  (3) virtual bool IsPaired() const = 0 
//  (4) virtual bool IsConnected() const = 0 
//  (5) virtual uint32_t Pair(const string &) = 0 
//  (6) virtual uint32_t Unpair() = 0 

class BluetoothDeviceProxy final : public ProxyStub::UnknownProxyType<IBluetooth::IDevice> {
public:
    BluetoothDeviceProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    string Address() const override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    string Name() const override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    bool IsDiscovered() const override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool IsPaired() const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool IsConnected() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    uint32_t Pair(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Unpair() override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }
}; // class BluetoothDeviceProxy

//
// IBluetooth::IDevice::IIterator interface proxy definitions
//
// Methods:
//  (0) virtual void Reset() = 0 
//  (1) virtual bool IsValid() const = 0 
//  (2) virtual bool Next() = 0 
//  (3) virtual IBluetooth::IDevice * Current() = 0 

class BluetoothDeviceIteratorProxy final : public ProxyStub::UnknownProxyType<IBluetooth::IDevice::IIterator> {
public:
    BluetoothDeviceIteratorProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
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

    IBluetooth::IDevice * Current() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        IBluetooth::IDevice * output_implementation = reader.Number<IBluetooth::IDevice *>();
        ASSERT((output_implementation != nullptr) && "Null IBluetooth::IDevice implementation pointer (BluetoothDeviceIteratorProxy::Current() proxy stub)");
        IBluetooth::IDevice * output = CreateProxy<IBluetooth::IDevice>(output_implementation);
        ASSERT((output != nullptr) && "Failed to get IBluetooth::IDevice proxy (BluetoothDeviceIteratorProxy::Current() proxy stub)");

        return output;
    }
}; // class BluetoothDeviceIteratorProxy

//
// IBluetooth::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Update(IBluetooth::IDevice *) = 0 

class BluetoothNotificationProxy final : public ProxyStub::UnknownProxyType<IBluetooth::INotification> {
public:
    BluetoothNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Update(IBluetooth::IDevice * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IBluetooth::IDevice *>(param0);

        Invoke(newMessage);
    }
}; // class BluetoothNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IBluetooth::IDevice::IIterator, BluetoothDeviceIteratorStubMethods, ProxyStub::UnknownStub> BluetoothDeviceIteratorStub;
typedef ProxyStub::StubType<IBluetooth, BluetoothStubMethods, ProxyStub::UnknownStub> BluetoothStub;
typedef ProxyStub::StubType<IBluetooth::IDevice, BluetoothDeviceStubMethods, ProxyStub::UnknownStub> BluetoothDeviceStub;
typedef ProxyStub::StubType<IBluetooth::INotification, BluetoothNotificationStubMethods, ProxyStub::UnknownStub> BluetoothNotificationStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IBluetooth::IDevice::IIterator, BluetoothDeviceIteratorProxy, BluetoothDeviceIteratorStub>();
        RPC::Administrator::Instance().Announce<IBluetooth, BluetoothProxy, BluetoothStub>();
        RPC::Administrator::Instance().Announce<IBluetooth::IDevice, BluetoothDeviceProxy, BluetoothDeviceStub>();
        RPC::Administrator::Instance().Announce<IBluetooth::INotification, BluetoothNotificationProxy, BluetoothNotificationStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

