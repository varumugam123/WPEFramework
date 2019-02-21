#pragma once

namespace WPEFramework {
namespace RPC {

    enum IDS {
        ID_REMOTEPROCESS = 0x00000001,
        ID_REMOTEPROCESS_NOTIFICATION = 0x00000002,
        ID_TRACEITERATOR = 0x00000003,
        ID_TRACECONTROLLER = 0x00000004,
        ID_STRINGITERATOR = 0x00000005,
        ID_VALUEITERATOR = 0x00000006,

        ID_ACCESSOROCDM = 0x00000010,
        ID_ACCESSOROCDM_EXTENSION = 0x00000011,
        ID_ACCESSOROCDM_NOTIFICATION = 0x00000012,
        ID_SESSION = 0x00000013,
        ID_SESSION_CALLBACK = 0x00000014,
        ID_SESSION_EXTENSION = 0x00000015,

        ID_PLUGIN = 0x00000020,
        ID_PLUGIN_NOTIFICATION = 0x00000021,
        ID_PLUGINEXTENDED = 0x00000022,
        ID_WEB = 0x00000023,
        ID_WEBSOCKET = 0x00000024,
        ID_DISPATCHER = 0x00000025,
        ID_TEXTSOCKET = 0x00000026,
        ID_CHANNEL = 0x00000027,
        ID_SECURITY = 0x00000028,

        ID_SHELL = 0x00000030,
        ID_STATECONTROL = 0x00000031,
        ID_STATECONTROL_NOTIFICATION = 0x00000032,
        ID_SUBSYSTEM = 0x00000033,
        ID_SUBSYSTEM_NOTIFICATION = 0x00000034,
        ID_SUBSYSTEM_INTERNET = 0x00000035,
        ID_SUBSYSTEM_LOCATION = 0x00000036,
        ID_SUBSYSTEM_IDENTIFIER = 0x00000037,
        ID_SUBSYSTEM_TIME = 0x00000038,
    };
}
}
