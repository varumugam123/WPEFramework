#include "open_cdm_ext.h"

#include "open_cdm_impl.h"

#include "ExtendedOpenCDMSession.h"

#define ASSERT_NOT_EXECUTED() {                             \
    fprintf(stderr, "Error: didn't expect to use %s (%s:%d)!!\n", __PRETTY_FUNCTION__, __FILE__, __LINE__); \
    abort(); \
}

// TODO: naming: Extended...Ext
// TODO: shares code with ExtendedOpenCDMSession, maybe intro baseclass?
struct ExtendedOpenCDMSessionExt : public OpenCDMSession {
private:
    ExtendedOpenCDMSessionExt() = delete;
    ExtendedOpenCDMSessionExt(const ExtendedOpenCDMSessionExt&) = delete;
    ExtendedOpenCDMSessionExt& operator= (ExtendedOpenCDMSessionExt&) = delete;

    enum sessionState {
        // Initialized.
        SESSION_INIT    = 0x00,

        // ExtendedOpenCDMSessionExt created, waiting for message callback.
        SESSION_MESSAGE = 0x01,
        SESSION_READY   = 0x02,
        SESSION_ERROR   = 0x04,
        SESSION_LOADED  = 0x08,
        SESSION_UPDATE  = 0x10
    };

public:
    ExtendedOpenCDMSessionExt(
        OpenCDMAccessor* system, const uint8_t drmHeader[], uint32_t drmHeaderLength)
        : OpenCDMSession()
        //, _sink(this)
        , _state(SESSION_INIT)
        , _message()
        , _URL()
        , _error()
        , _errorCode(0)
        , _sysError(0)
        , _userData(this)
        , _realSession(nullptr)
     {

        std::string bufferId;
        OCDM::ISessionExt* realSession = nullptr;

        // TODO: real conversion between license types
        system->CreateSessionExt(drmHeader, drmHeaderLength, realSession);

        if (realSession == nullptr) {
            TRACE_L1("Creating a Session failed. %d", __LINE__);
        }
        else {
            // TODO ?
            OpenCDMSession::SessionExt(realSession);
        }

        _realSession = realSession;
    }

    virtual ~ExtendedOpenCDMSessionExt() {
        // TODO: do we need something like this here as well?
        /*
        if (OpenCDMSession::IsValid() == true) {
            OpenCDMSession::Session(nullptr);
        }
        */
    }

    uint32_t SessionIdExt() const
    {
        return _realSession->SessionIdExt();
    }

    uint16_t PlaylevelCompressedVideo() const
    {
        return _realSession->PlaylevelCompressedVideo();
    }

    uint16_t PlaylevelUncompressedVideo() const
    {
        return _realSession->PlaylevelUncompressedVideo();
    }

    uint16_t PlaylevelAnalogVideo() const
    {
        return _realSession->PlaylevelAnalogVideo();
    }

    uint16_t PlaylevelCompressedAudio() const
    {
        return _realSession->PlaylevelCompressedAudio();
    }

    uint16_t PlaylevelUncompressedAudio() const
    {
        return _realSession->PlaylevelUncompressedAudio();
    }

    std::string GetContentIdExt() const
    {
        return _realSession->GetContentIdExt();
    }

    void SetContentIdExt(const std::string & contentId)
    {
        _realSession->SetContentIdExt(contentId);
    }

    OCDM::ISessionExt::LicenseTypeExt GetLicenseTypeExt() const
    {
        return _realSession->GetLicenseTypeExt();
    }

    void SetLicenseTypeExt(OCDM::ISessionExt::LicenseTypeExt licenseType)
    {
        _realSession->SetLicenseTypeExt(licenseType);
    }

    OCDM::ISessionExt::SessionStateExt GetSessionStateExt() const
    {
        return _realSession->GetSessionStateExt();
    }

    void SetSessionStateExt(OCDM::ISessionExt::SessionStateExt sessionState)
    {
        _realSession->SetSessionStateExt(sessionState);
    }

    OCDM::OCDM_RESULT SetDrmHeader(const uint8_t drmHeader[], uint32_t drmHeaderLength)
    {
        return _realSession->SetDrmHeader(drmHeader, drmHeaderLength);
    }

    OCDM::OCDM_RESULT GetChallengeDataNetflix(uint8_t * challenge, uint32_t & challengeSize, uint32_t isLDL)
    {
        return _realSession->GetChallengeDataNetflix(challenge, challengeSize, isLDL);
    }

    OCDM::OCDM_RESULT StoreLicenseData(const uint8_t licenseData[], uint32_t licenseDataSize, unsigned char * secureStopId)
    {
        return _realSession->StoreLicenseData(licenseData, licenseDataSize, secureStopId);
    }

    OCDM::OCDM_RESULT InitDecryptContextByKid()
    {
        return _realSession->InitDecryptContextByKid();
    }

private:
    //WPEFramework::Core::Sink<Sink> _sink;
    WPEFramework::Core::StateTrigger<sessionState> _state;
    std::string _message;
    std::string _URL;
    std::string _error;
    uint32_t _errorCode;
    OCDM::OCDM_RESULT _sysError;
    void* _userData;
    OCDM::ISessionExt* _realSession;
};

struct OpenCDMSystemExt* opencdm_create_system_ext(struct OpenCDMAccessor * system, const char keySystem[])
{
    OpenCDMAccessor* output = opencdm_create_system();

    // TODO: read from JSON, OCDM side

    const char readDir[] = "/home/sander/Projects/Netflix/5.0/build/build/netflix5/build/src/platform/gibbon/data/dpi/playready";
    const char storeLocation[] = "/home/sander/Projects/Netflix/5.0/build/build/netflix5/build/src/platform/gibbon/data/var/dpi/playready/storage/drmstore";
    output->CreateSystemNetflix(readDir, storeLocation);

    output->InitSystemNetflix();

    // TODO: create struct/class keeping track of selected key system.
    return reinterpret_cast<OpenCDMSystemExt *>(output);
}

OpenCDMError opencdm_system_get_version(struct OpenCDMAccessor* system, const char keySystem[], char versionStr[])
{
    // TODO: use keySystem
    versionStr[0] = '\0';

    std::string versionStdStr = system->GetVersionExt();

    assert(versionStdStr.length() < 64);

    strcpy(versionStr, versionStdStr.c_str());

    return ERROR_NONE;
}

OpenCDMError opencdm_system_ext_get_ldl_session_limit(OpenCDMSystemExt* system, uint32_t * ldlLimit)
{
    *ldlLimit = (reinterpret_cast<OpenCDMAccessor*>(system))->GetLdlSessionLimit();
    return ERROR_NONE;
}

OpenCDMError opencdm_system_ext_enable_secure_stop(struct OpenCDMSystemExt* system, uint32_t use)
{
    // TODO: conversion
    return (OpenCDMError)(reinterpret_cast<OpenCDMAccessor*>(system))->EnableSecureStop(use != 0);
}

OpenCDMError opencdm_system_ext_commit_secure_stop(OpenCDMSystemExt* system, const unsigned char sessionID[], uint32_t sessionIDLength, const unsigned char serverResponse[], uint32_t serverResponseLength)
{
    return (OpenCDMError)(reinterpret_cast<OpenCDMAccessor*>(system))->CommitSecureStop(sessionID, sessionIDLength, serverResponse, serverResponseLength);
}

OpenCDMError opencdm_system_get_drm_time(struct OpenCDMAccessor* system, const char keySystem[], uint64_t * time)
{
    // TODO: use keySystem
    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (system != nullptr) {
        time_t cTime;
        cTime = system->GetDrmSystemTime();
        *time = static_cast<uint64_t>(cTime);
        result = ERROR_NONE;
    }
    return (result);
}

OpenCDMError opencdm_create_session_ext(struct OpenCDMAccessor* system, struct OpenCDMSession ** opencdmSession, const uint8_t drmHeader[], uint32_t drmHeaderLength)
{
    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (system != nullptr) {
        *opencdmSession = new ExtendedOpenCDMSessionExt(system, drmHeader, drmHeaderLength);
        result = OpenCDMError::ERROR_NONE;
    }

    return (result);
}

uint32_t opencdm_session_get_session_id_ext(struct OpenCDMSession * opencdmSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(opencdmSession);

    return sessionExt->SessionIdExt();
}

OpenCDMError opencdm_destroy_session_ext(OpenCDMSession * opencdmSession)
{
    OpenCDMError result (OpenCDMError::ERROR_INVALID_SESSION);

    if (opencdmSession != nullptr) {
        result = OpenCDMError::ERROR_NONE;
        opencdmSession->Release();
    }

    return (result);
}

uint16_t opencdm_session_get_playlevel_compressed_video(OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    return sessionExt->PlaylevelCompressedVideo();
}

uint16_t opencdm_session_get_playlevel_uncompressed_video(OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    return sessionExt->PlaylevelUncompressedVideo();
}

uint16_t opencdm_session_get_playlevel_analog_video(OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    return sessionExt->PlaylevelAnalogVideo();
}

uint16_t opencdm_session_get_playlevel_compressed_audio(OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    return sessionExt->PlaylevelCompressedAudio();
}

uint16_t opencdm_session_get_playlevel_uncompressed_audio(OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    return sessionExt->PlaylevelUncompressedAudio();
}

OpenCDMError opencdm_session_get_content_id(struct OpenCDMSession * opencdmSession, char * buffer, uint32_t * bufferSize)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(opencdmSession);

    std::string contentIdStr = sessionExt->GetContentIdExt();

    if (*bufferSize == 0) {
        *bufferSize = contentIdStr.length();
    } else {
        assert(contentIdStr.length() <= *bufferSize);

        *bufferSize = contentIdStr.length();
        memcpy(buffer, contentIdStr.c_str(), *bufferSize);
    }

    return ERROR_NONE;
}

OpenCDMError opencdm_session_set_content_id(struct OpenCDMSession * opencdmSession, const char contentId[], uint32_t contentIdLength)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(opencdmSession);

    std::string contentIdStr(contentId, contentIdLength);
    sessionExt->SetContentIdExt(contentIdStr);

    return ERROR_NONE;
}

OpenCDMError opencdm_session_set_drm_header(struct OpenCDMSession * opencdmSession, const uint8_t drmHeader[], uint32_t drmHeaderSize)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(opencdmSession);

    // TODO: real conversion
    return (OpenCDMError)sessionExt->SetDrmHeader(drmHeader, drmHeaderSize);
}

OpenCDMError opencdm_session_get_challenge_data(struct OpenCDMSession * mOpenCDMSession, uint8_t * challenge, uint32_t * challengeSize, uint32_t isLDL)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    // TODO: real conversion
    return (OpenCDMError)sessionExt->GetChallengeDataNetflix(challenge, *challengeSize, isLDL);
}

OpenCDMError opencdm_session_store_license_data(struct OpenCDMSession * mOpenCDMSession, const uint8_t licenseData[], uint32_t licenseDataSize, unsigned char * secureStopId)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    // TODO: real conversion
    return (OpenCDMError)sessionExt->StoreLicenseData(licenseData, licenseDataSize, secureStopId);
}

OpenCDMError opencdm_session_init_decrypt_context_by_kid(struct OpenCDMSession * mOpenCDMSession)
{
    ExtendedOpenCDMSessionExt* sessionExt = static_cast<ExtendedOpenCDMSessionExt*>(mOpenCDMSession);

    // TODO: real conversion
    return (OpenCDMError)sessionExt->InitDecryptContextByKid();
}

OpenCDMError opencdm_init_system_ext(struct OpenCDMAccessor* system)
{
    return (OpenCDMError)system->InitSystemNetflix();
}

OpenCDMError opencdm_delete_secure_store(struct OpenCDMSystemExt* system)
{
    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (system != nullptr) {
        // TODO: real conversion
        result = (OpenCDMError)(reinterpret_cast<OpenCDMAccessor*>(system))->DeleteSecureStore();
    }
    return (result);
}

OpenCDMError opencdm_get_secure_store_hash_ext(struct OpenCDMSystemExt* system, uint8_t secureStoreHash[], uint32_t secureStoreHashLength)
{
    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (system != nullptr) {
        // TODO: real conversion
        result = (OpenCDMError)(reinterpret_cast<OpenCDMAccessor*>(system))->GetSecureStoreHash(secureStoreHash, secureStoreHashLength);
    }
    return (result);
}

OpenCDMError opencdm_system_teardown(struct OpenCDMAccessor* system)
{
    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (system != nullptr) {
        // TODO: real conversion
        result = (OpenCDMError)system->TeardownSystemNetflix();
    }
    return (result);
}

/**
 * \brief Create DRM session (for actual decrypting of data).
 *
 * Creates an instance of \ref OpenCDMSession using initialization data.
 * \param keySystem DRM system to create the session for.
 * \param licenseType DRM specifc signed integer selecting License Type (e.g. "Limited Duration" for PlayReady).
 * \param initDataType Type of data passed in \ref initData.
 * \param initData Initialization data.
 * \param initDataLength Length (in bytes) of initialization data.
 * \param CDMData CDM data.
 * \param CDMDataLength Length (in bytes) of \ref CDMData.
 * \param session Output parameter that will contain pointer to instance of \ref OpenCDMSession.
 * \return Zero on success, non-zero on error.
 */
OpenCDMError opencdm_create_session(struct OpenCDMAccessor* system, const char keySystem[], const LicenseType licenseType,
                                    const char initDataType[], const uint8_t initData[], const uint16_t initDataLength,
                                    const uint8_t CDMData[], const uint16_t CDMDataLength, OpenCDMSessionCallbacks * callbacks,
                                    struct OpenCDMSession** session) {

    OpenCDMError result (ERROR_INVALID_ACCESSOR);

    if (strcmp(keySystem, "com.netflix.playready") != 0) {
        if (system != nullptr) {
            *session = new ExtendedOpenCDMSession(static_cast<OCDM::IAccessorOCDM*>(system), std::string(keySystem), std::string(initDataType), initData, initDataLength,CDMData,CDMDataLength, licenseType, callbacks);

            result = (*session != nullptr ? OpenCDMError::ERROR_NONE : OpenCDMError::ERROR_INVALID_SESSION);
        }
    } else {
        if (system != nullptr) {
            *session = new ExtendedOpenCDMSessionExt(system, initData, initDataLength);
            result = OpenCDMError::ERROR_NONE;
        }
    }

    return (result);
}