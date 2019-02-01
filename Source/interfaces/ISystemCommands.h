#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    struct ISystemCommands : virtual public Core::IUnknown {
        enum { ID = 0x00000080 };

        using CommandId = string;

        struct ICommand : virtual public Core::IUnknown {
            enum { ID = 0x00000081 };

            virtual ~ICommand() {}

            virtual uint32_t Execute(const string& params) = 0;
            virtual string Description() const = 0;
            virtual CommandId Id() const = 0;

            class ParamsIterator;
        };

        virtual ~ISystemCommands() {}

        virtual uint32_t Execute(const CommandId& id, const string& params) = 0;
        virtual RPC::IStringIterator* SupportedCommands() const = 0;
        virtual ICommand* Command(const CommandId& id) const = 0;
    };

}  // namespace Exchange
}  // namespace WPEFramework
