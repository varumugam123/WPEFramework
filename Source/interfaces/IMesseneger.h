#include "Module.h"

namespace WPEFramework {
namespace Exchange {

struct IMessenger : public Core::IUnknown {

    enum { ID = 0x40 };
    struct INotification : public Core::IUnknown {
        enum { ID = 0x41 };
        virtual void Message(const string& msg) = 0;
        virtual void Joined() = 0;
        virtual void Left() = 0;
    };

    struct IController : public Core::IUnknown {
        enum { ID = 0x42 };
        virtual void Created(const string& id) = 0;
        virtual void Destroyed(const string& id) = 0;
    };

    struct IRoom : public Core::IUnknown {
        enum { ID = 0x43 };
        virtual uint32_t SendMessage(const string& message) = 0;
    };

    virtual IRoom* Join(const string& id, INotification* notification) = 0;
    virtual void Register(IController* controller) = 0;
    virtual void Unegister(IController* controller) = 0;
};

} // namespace Exchange
} // namespace WPEFramework
