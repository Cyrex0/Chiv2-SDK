﻿#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AkAudio.EAkCallbackType
	 */
	enum class AkAudio_EAkCallbackType : uint8_t
	{
		EAkCallbackType__EndOfEvent          = 0,
		EAkCallbackType__Marker              = 1,
		EAkCallbackType__Duration            = 2,
		EAkCallbackType__Starvation          = 3,
		EAkCallbackType__MusicPlayStarted    = 4,
		EAkCallbackType__MusicSyncBeat       = 5,
		EAkCallbackType__MusicSyncBar        = 6,
		EAkCallbackType__MusicSyncEntry      = 7,
		EAkCallbackType__MusicSyncExit       = 8,
		EAkCallbackType__MusicSyncGrid       = 9,
		EAkCallbackType__MusicSyncUserCue    = 10,
		EAkCallbackType__MusicSyncPoint      = 11,
		EAkCallbackType__MIDIEvent           = 12,
		EAkCallbackType__EAkCallbackType_MAX = 13
	};

	/**
	 * Enum AkAudio.EAkResult
	 */
	enum class AkAudio_EAkResult : uint8_t
	{
		EAkResult__NotImplemented              = 0,
		EAkResult__Success                     = 1,
		EAkResult__Fail                        = 2,
		EAkResult__PartialSuccess              = 3,
		EAkResult__NotCompatible               = 4,
		EAkResult__AlreadyConnected            = 5,
		EAkResult__InvalidFile                 = 6,
		EAkResult__AudioFileHeaderTooLarge     = 7,
		EAkResult__MaxReached                  = 8,
		EAkResult__InvalidID                   = 9,
		EAkResult__IDNotFound                  = 10,
		EAkResult__InvalidInstanceID           = 11,
		EAkResult__NoMoreData                  = 12,
		EAkResult__InvalidStateGroup           = 13,
		EAkResult__ChildAlreadyHasAParent      = 14,
		EAkResult__InvalidLanguage             = 15,
		EAkResult__CannotAddItseflAsAChild     = 16,
		EAkResult__InvalidParameter            = 17,
		EAkResult__ElementAlreadyInList        = 18,
		EAkResult__PathNotFound                = 19,
		EAkResult__PathNoVertices              = 20,
		EAkResult__PathNotRunning              = 21,
		EAkResult__PathNotPaused               = 22,
		EAkResult__PathNodeAlreadyInList       = 23,
		EAkResult__PathNodeNotInList           = 24,
		EAkResult__DataNeeded                  = 25,
		EAkResult__NoDataNeeded                = 26,
		EAkResult__DataReady                   = 27,
		EAkResult__NoDataReady                 = 28,
		EAkResult__InsufficientMemory          = 29,
		EAkResult__Cancelled                   = 30,
		EAkResult__UnknownBankID               = 31,
		EAkResult__BankReadError               = 32,
		EAkResult__InvalidSwitchType           = 33,
		EAkResult__FormatNotReady              = 34,
		EAkResult__WrongBankVersion            = 35,
		EAkResult__FileNotFound                = 36,
		EAkResult__DeviceNotReady              = 37,
		EAkResult__BankAlreadyLoaded           = 38,
		EAkResult__RenderedFX                  = 39,
		EAkResult__ProcessNeeded               = 40,
		EAkResult__ProcessDone                 = 41,
		EAkResult__MemManagerNotInitialized    = 42,
		EAkResult__StreamMgrNotInitialized     = 43,
		EAkResult__SSEInstructionsNotSupported = 44,
		EAkResult__Busy                        = 45,
		EAkResult__UnsupportedChannelConfig    = 46,
		EAkResult__PluginMediaNotAvailable     = 47,
		EAkResult__MustBeVirtualized           = 48,
		EAkResult__CommandTooLarge             = 49,
		EAkResult__RejectedByFilter            = 50,
		EAkResult__InvalidCustomPlatformName   = 51,
		EAkResult__DLLCannotLoad               = 52,
		EAkResult__DLLPathNotFound             = 53,
		EAkResult__NoJavaVM                    = 54,
		EAkResult__OpenSLError                 = 55,
		EAkResult__PluginNotRegistered         = 56,
		EAkResult__DataAlignmentError          = 57,
		EAkResult__EAkResult_MAX               = 58
	};

	/**
	 * Enum AkAudio.EAkAndroidAudioAPI
	 */
	enum class AkAudio_EAkAndroidAudioAPI : uint8_t
	{
		EAkAndroidAudioAPI__AAudio                 = 0,
		EAkAndroidAudioAPI__OpenSL_ES              = 1,
		EAkAndroidAudioAPI__EAkAndroidAudioAPI_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkAudioSessionMode
	 */
	enum class AkAudio_EAkAudioSessionMode : uint8_t
	{
		EAkAudioSessionMode__Default                 = 0,
		EAkAudioSessionMode__VoiceChat               = 1,
		EAkAudioSessionMode__GameChat                = 2,
		EAkAudioSessionMode__VideoRecording          = 3,
		EAkAudioSessionMode__Measurement             = 4,
		EAkAudioSessionMode__MoviePlayback           = 5,
		EAkAudioSessionMode__VideoChat               = 6,
		EAkAudioSessionMode__EAkAudioSessionMode_MAX = 7
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategoryOptions
	 */
	enum class AkAudio_EAkAudioSessionCategoryOptions : uint8_t
	{
		EAkAudioSessionCategoryOptions__MixWithOthers                      = 0,
		EAkAudioSessionCategoryOptions__DuckOthers                         = 1,
		EAkAudioSessionCategoryOptions__AllowBluetooth                     = 2,
		EAkAudioSessionCategoryOptions__DefaultToSpeaker                   = 3,
		EAkAudioSessionCategoryOptions__EAkAudioSessionCategoryOptions_MAX = 4
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategory
	 */
	enum class AkAudio_EAkAudioSessionCategory : uint8_t
	{
		EAkAudioSessionCategory__Ambient                     = 0,
		EAkAudioSessionCategory__SoloAmbient                 = 1,
		EAkAudioSessionCategory__PlayAndRecord               = 2,
		EAkAudioSessionCategory__EAkAudioSessionCategory_MAX = 3
	};

	/**
	 * Enum AkAudio.EReflectionFilterBits
	 */
	enum class AkAudio_EReflectionFilterBits : uint8_t
	{
		EReflectionFilterBits__Wall                      = 0,
		EReflectionFilterBits__Ceiling                   = 1,
		EReflectionFilterBits__Floor                     = 2,
		EReflectionFilterBits__EReflectionFilterBits_MAX = 3
	};

	/**
	 * Enum AkAudio.AkCodecId
	 */
	enum class AkAudio_EAkCodecId : uint8_t
	{
		AkCodecId__Bank            = 0,
		AkCodecId__PCM             = 1,
		AkCodecId__ADPCM           = 2,
		AkCodecId__XMA             = 3,
		AkCodecId__Vorbis          = 4,
		AkCodecId__WiiADPCM        = 5,
		AkCodecId__PCMEX           = 6,
		AkCodecId__ExternalSource  = 7,
		AkCodecId__XWMA            = 8,
		AkCodecId__AAC             = 9,
		AkCodecId__FilePackage     = 10,
		AkCodecId__ATRAC9          = 11,
		AkCodecId__VAG             = 12,
		AkCodecId__ProfilerCapture = 13,
		AkCodecId__AnalysisFile    = 14,
		AkCodecId__MIDI            = 15,
		AkCodecId__OpusNX          = 16,
		AkCodecId__CAF             = 17,
		AkCodecId__AkOpus          = 18,
		AkCodecId__AkCodecId_MAX   = 19
	};

	/**
	 * Enum AkAudio.EAkMidiCcValues
	 */
	enum class AkAudio_EAkMidiCcValues : uint8_t
	{
		EAkMidiCcValues__AkMidiCcBankSelectCoarse  = 0,
		EAkMidiCcValues__AkMidiCcModWheelCoarse    = 1,
		EAkMidiCcValues__AkMidiCcBreathCtrlCoarse  = 2,
		EAkMidiCcValues__AkMidiCcCtrl3Coarse       = 3,
		EAkMidiCcValues__AkMidiCcFootPedalCoarse   = 4,
		EAkMidiCcValues__AkMidiCcPortamentoCoarse  = 5,
		EAkMidiCcValues__AkMidiCcDataEntryCoarse   = 6,
		EAkMidiCcValues__AkMidiCcVolumeCoarse      = 7,
		EAkMidiCcValues__AkMidiCcBalanceCoarse     = 8,
		EAkMidiCcValues__AkMidiCcCtrl9Coarse       = 9,
		EAkMidiCcValues__AkMidiCcPanPositionCoarse = 10,
		EAkMidiCcValues__AkMidiCcExpressionCoarse  = 11,
		EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse = 12,
		EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse = 13,
		EAkMidiCcValues__AkMidiCcCtrl14Coarse      = 14,
		EAkMidiCcValues__AkMidiCcCtrl15Coarse      = 15,
		EAkMidiCcValues__AkMidiCcGenSlider1        = 16,
		EAkMidiCcValues__AkMidiCcGenSlider2        = 17,
		EAkMidiCcValues__AkMidiCcGenSlider3        = 18,
		EAkMidiCcValues__AkMidiCcGenSlider4        = 19,
		EAkMidiCcValues__AkMidiCcCtrl20Coarse      = 20,
		EAkMidiCcValues__AkMidiCcCtrl21Coarse      = 21,
		EAkMidiCcValues__AkMidiCcCtrl22Coarse      = 22,
		EAkMidiCcValues__AkMidiCcCtrl23Coarse      = 23,
		EAkMidiCcValues__AkMidiCcCtrl24Coarse      = 24,
		EAkMidiCcValues__AkMidiCcCtrl25Coarse      = 25,
		EAkMidiCcValues__AkMidiCcCtrl26Coarse      = 26,
		EAkMidiCcValues__AkMidiCcCtrl27Coarse      = 27,
		EAkMidiCcValues__AkMidiCcCtrl28Coarse      = 28,
		EAkMidiCcValues__AkMidiCcCtrl29Coarse      = 29,
		EAkMidiCcValues__AkMidiCcCtrl30Coarse      = 30,
		EAkMidiCcValues__AkMidiCcCtrl31Coarse      = 31,
		EAkMidiCcValues__AkMidiCcBankSelectFine    = 32,
		EAkMidiCcValues__AkMidiCcModWheelFine      = 33,
		EAkMidiCcValues__AkMidiCcBreathCtrlFine    = 34,
		EAkMidiCcValues__AkMidiCcCtrl3Fine         = 35,
		EAkMidiCcValues__AkMidiCcFootPedalFine     = 36,
		EAkMidiCcValues__AkMidiCcPortamentoFine    = 37,
		EAkMidiCcValues__AkMidiCcDataEntryFine     = 38,
		EAkMidiCcValues__AkMidiCcVolumeFine        = 39,
		EAkMidiCcValues__AkMidiCcBalanceFine       = 40,
		EAkMidiCcValues__AkMidiCcCtrl9Fine         = 41,
		EAkMidiCcValues__AkMidiCcPanPositionFine   = 42,
		EAkMidiCcValues__AkMidiCcExpressionFine    = 43,
		EAkMidiCcValues__AkMidiCcEffectCtrl1Fine   = 44,
		EAkMidiCcValues__AkMidiCcEffectCtrl2Fine   = 45,
		EAkMidiCcValues__AkMidiCcCtrl14Fine        = 46,
		EAkMidiCcValues__AkMidiCcCtrl15Fine        = 47,
		EAkMidiCcValues__AkMidiCcCtrl20Fine        = 48,
		EAkMidiCcValues__AkMidiCcCtrl21Fine        = 49,
		EAkMidiCcValues__AkMidiCcCtrl22Fine        = 50,
		EAkMidiCcValues__AkMidiCcCtrl23Fine        = 51,
		EAkMidiCcValues__AkMidiCcCtrl24Fine        = 52,
		EAkMidiCcValues__AkMidiCcCtrl25Fine        = 53,
		EAkMidiCcValues__AkMidiCcCtrl26Fine        = 54,
		EAkMidiCcValues__AkMidiCcCtrl27Fine        = 55,
		EAkMidiCcValues__AkMidiCcCtrl28Fine        = 56,
		EAkMidiCcValues__AkMidiCcCtrl29Fine        = 57,
		EAkMidiCcValues__AkMidiCcCtrl30Fine        = 58,
		EAkMidiCcValues__AkMidiCcCtrl31Fine        = 59,
		EAkMidiCcValues__AkMidiCcHoldPedal         = 60,
		EAkMidiCcValues__AkMidiCcPortamentoOnOff   = 61,
		EAkMidiCcValues__AkMidiCcSustenutoPedal    = 62,
		EAkMidiCcValues__AkMidiCcSoftPedal         = 63,
		EAkMidiCcValues__AkMidiCcLegatoPedal       = 64,
		EAkMidiCcValues__AkMidiCcHoldPedal2        = 65,
		EAkMidiCcValues__AkMidiCcSoundVariation    = 66,
		EAkMidiCcValues__AkMidiCcSoundTimbre       = 67,
		EAkMidiCcValues__AkMidiCcSoundReleaseTime  = 68,
		EAkMidiCcValues__AkMidiCcSoundAttackTime   = 69,
		EAkMidiCcValues__AkMidiCcSoundBrightness   = 70,
		EAkMidiCcValues__AkMidiCcSoundCtrl6        = 71,
		EAkMidiCcValues__AkMidiCcSoundCtrl7        = 72,
		EAkMidiCcValues__AkMidiCcSoundCtrl8        = 73,
		EAkMidiCcValues__AkMidiCcSoundCtrl9        = 74,
		EAkMidiCcValues__AkMidiCcSoundCtrl10       = 75,
		EAkMidiCcValues__AkMidiCcGeneralButton1    = 76,
		EAkMidiCcValues__AkMidiCcGeneralButton2    = 77,
		EAkMidiCcValues__AkMidiCcGeneralButton3    = 78,
		EAkMidiCcValues__AkMidiCcGeneralButton4    = 79,
		EAkMidiCcValues__AkMidiCcReverbLevel       = 80,
		EAkMidiCcValues__AkMidiCcTremoloLevel      = 81,
		EAkMidiCcValues__AkMidiCcChorusLevel       = 82,
		EAkMidiCcValues__AkMidiCcCelesteLevel      = 83,
		EAkMidiCcValues__AkMidiCcPhaserLevel       = 84,
		EAkMidiCcValues__AkMidiCcDataButtonP1      = 85,
		EAkMidiCcValues__AkMidiCcDataButtonM1      = 86,
		EAkMidiCcValues__AkMidiCcNonRegisterCoarse = 87,
		EAkMidiCcValues__AkMidiCcNonRegisterFine   = 88,
		EAkMidiCcValues__AkMidiCcAllSoundOff       = 89,
		EAkMidiCcValues__AkMidiCcAllControllersOff = 90,
		EAkMidiCcValues__AkMidiCcLocalKeyboard     = 91,
		EAkMidiCcValues__AkMidiCcAllNotesOff       = 92,
		EAkMidiCcValues__AkMidiCcOmniModeOff       = 93,
		EAkMidiCcValues__AkMidiCcOmniModeOn        = 94,
		EAkMidiCcValues__AkMidiCcOmniMonophonicOn  = 95,
		EAkMidiCcValues__AkMidiCcOmniPolyphonicOn  = 96,
		EAkMidiCcValues__EAkMidiCcValues_MAX       = 97
	};

	/**
	 * Enum AkAudio.EAkMidiEventType
	 */
	enum class AkAudio_EAkMidiEventType : uint8_t
	{
		EAkMidiEventType__AkMidiEventTypeInvalid           = 0,
		EAkMidiEventType__AkMidiEventTypeNoteOff           = 1,
		EAkMidiEventType__AkMidiEventTypeNoteOn            = 2,
		EAkMidiEventType__AkMidiEventTypeNoteAftertouch    = 3,
		EAkMidiEventType__AkMidiEventTypeController        = 4,
		EAkMidiEventType__AkMidiEventTypeProgramChange     = 5,
		EAkMidiEventType__AkMidiEventTypeChannelAftertouch = 6,
		EAkMidiEventType__AkMidiEventTypePitchBend         = 7,
		EAkMidiEventType__AkMidiEventTypeSysex             = 8,
		EAkMidiEventType__AkMidiEventTypeEscape            = 9,
		EAkMidiEventType__AkMidiEventTypeMeta              = 10,
		EAkMidiEventType__EAkMidiEventType_MAX             = 11
	};

	/**
	 * Enum AkAudio.ERTPCValueType
	 */
	enum class AkAudio_ERTPCValueType : uint8_t
	{
		ERTPCValueType__Default            = 0,
		ERTPCValueType__Global             = 1,
		ERTPCValueType__GameObject         = 2,
		ERTPCValueType__PlayingID          = 3,
		ERTPCValueType__Unavailable        = 4,
		ERTPCValueType__ERTPCValueType_MAX = 5
	};

	/**
	 * Enum AkAudio.EAkCurveInterpolation
	 */
	enum class AkAudio_EAkCurveInterpolation : uint8_t
	{
		EAkCurveInterpolation__Log3                      = 0,
		EAkCurveInterpolation__Sine                      = 1,
		EAkCurveInterpolation__Log1                      = 2,
		EAkCurveInterpolation__InvSCurve                 = 3,
		EAkCurveInterpolation__Linear                    = 4,
		EAkCurveInterpolation__SCurve                    = 5,
		EAkCurveInterpolation__Exp1                      = 6,
		EAkCurveInterpolation__SineRecip                 = 7,
		EAkCurveInterpolation__Exp3                      = 8,
		EAkCurveInterpolation__LastFadeCurve             = 9,
		EAkCurveInterpolation__Constant                  = 10,
		EAkCurveInterpolation__EAkCurveInterpolation_MAX = 11
	};

	/**
	 * Enum AkAudio.AkActionOnEventType
	 */
	enum class AkAudio_EAkActionOnEventType : uint8_t
	{
		AkActionOnEventType__Stop                    = 0,
		AkActionOnEventType__Pause                   = 1,
		AkActionOnEventType__Resume                  = 2,
		AkActionOnEventType__Break                   = 3,
		AkActionOnEventType__ReleaseEnvelope         = 4,
		AkActionOnEventType__AkActionOnEventType_MAX = 5
	};

	/**
	 * Enum AkAudio.AkMultiPositionType
	 */
	enum class AkAudio_EAkMultiPositionType : uint8_t
	{
		AkMultiPositionType__SingleSource            = 0,
		AkMultiPositionType__MultiSources            = 1,
		AkMultiPositionType__MultiDirections         = 2,
		AkMultiPositionType__AkMultiPositionType_MAX = 3
	};

	/**
	 * Enum AkAudio.AkSpeakerConfiguration
	 */
	enum class AkAudio_EAkSpeakerConfiguration : uint8_t
	{
		AkSpeakerConfiguration__Ak_Speaker_Front_Left          = 0,
		AkSpeakerConfiguration__Ak_Speaker_Front_Right         = 1,
		AkSpeakerConfiguration__Ak_Speaker_Front_Center        = 2,
		AkSpeakerConfiguration__Ak_Speaker_Low_Frequency       = 3,
		AkSpeakerConfiguration__Ak_Speaker_Back_Left           = 4,
		AkSpeakerConfiguration__Ak_Speaker_Back_Right          = 5,
		AkSpeakerConfiguration__Ak_Speaker_Back_Center         = 6,
		AkSpeakerConfiguration__Ak_Speaker_Side_Left           = 7,
		AkSpeakerConfiguration__Ak_Speaker_Side_Right          = 8,
		AkSpeakerConfiguration__Ak_Speaker_Top                 = 9,
		AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left   = 10,
		AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center = 11,
		AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right  = 12,
		AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left    = 13,
		AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center  = 14,
		AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right   = 15,
		AkSpeakerConfiguration__Ak_Speaker_MAX                 = 16
	};

	/**
	 * Enum AkAudio.AkChannelConfiguration
	 */
	enum class AkAudio_EAkChannelConfiguration : uint8_t
	{
		AkChannelConfiguration__Ak_Parent               = 0,
		AkChannelConfiguration__Ak_LFE                  = 1,
		AkChannelConfiguration__Ak_1                    = 2,
		AkChannelConfiguration__Ak_2                    = 3,
		AkChannelConfiguration__Ak_201                  = 4,
		AkChannelConfiguration__Ak_3                    = 5,
		AkChannelConfiguration__Ak_301                  = 6,
		AkChannelConfiguration__Ak_4                    = 7,
		AkChannelConfiguration__Ak_401                  = 8,
		AkChannelConfiguration__Ak_5                    = 9,
		AkChannelConfiguration__Ak_501                  = 10,
		AkChannelConfiguration__Ak_7                    = 11,
		AkChannelConfiguration__Ak_5_1                  = 12,
		AkChannelConfiguration__Ak_7_1                  = 13,
		AkChannelConfiguration__Ak_7_101                = 14,
		AkChannelConfiguration__Ak_Auro_9               = 15,
		AkChannelConfiguration__Ak_Auro_10              = 16,
		AkChannelConfiguration__Ak_Auro_11              = 17,
		AkChannelConfiguration__Ak_Auro_13              = 18,
		AkChannelConfiguration__Ak_Ambisonics_1st_order = 19,
		AkChannelConfiguration__Ak_Ambisonics_2nd_order = 20,
		AkChannelConfiguration__Ak_Ambisonics_3rd_order = 21,
		AkChannelConfiguration__Ak_MAX                  = 22
	};

	/**
	 * Enum AkAudio.AkAcousticPortalState
	 */
	enum class AkAudio_EAkAcousticPortalState : uint8_t
	{
		AkAcousticPortalState__Closed                    = 0,
		AkAcousticPortalState__Open                      = 1,
		AkAcousticPortalState__AkAcousticPortalState_MAX = 2
	};

	/**
	 * Enum AkAudio.PanningRule
	 */
	enum class AkAudio_EPanningRule : uint8_t
	{
		PanningRule__PanningRule_Speakers   = 0,
		PanningRule__PanningRule_Headphones = 1,
		PanningRule__PanningRule_MAX        = 2
	};

	/**
	 * Enum AkAudio.AkMeshType
	 */
	enum class AkAudio_EAkMeshType : uint8_t
	{
		AkMeshType__StaticMesh     = 0,
		AkMeshType__CollisionMesh  = 1,
		AkMeshType__AkMeshType_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkHololensAudioAPI
	 */
	enum class AkAudio_EAkHololensAudioAPI : uint8_t
	{
		EAkHololensAudioAPI__Wasapi                  = 0,
		EAkHololensAudioAPI__XAudio2                 = 1,
		EAkHololensAudioAPI__DirectSound             = 2,
		EAkHololensAudioAPI__EAkHololensAudioAPI_MAX = 3
	};

	/**
	 * Enum AkAudio.EAkCommSystem
	 */
	enum class AkAudio_EAkCommSystem : uint8_t
	{
		EAkCommSystem__Socket            = 0,
		EAkCommSystem__HTCS              = 1,
		EAkCommSystem__EAkCommSystem_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkChannelMask
	 */
	enum class AkAudio_EAkChannelMask : uint8_t
	{
		EAkChannelMask__FrontLeft          = 0,
		EAkChannelMask__FrontRight         = 1,
		EAkChannelMask__FrontCenter        = 2,
		EAkChannelMask__LowFrequency       = 3,
		EAkChannelMask__BackLeft           = 4,
		EAkChannelMask__BackRight          = 5,
		EAkChannelMask__BackCenter         = 6,
		EAkChannelMask__SideLeft           = 7,
		EAkChannelMask__SideRight          = 8,
		EAkChannelMask__Top                = 9,
		EAkChannelMask__HeightFrontLeft    = 10,
		EAkChannelMask__HeightFrontCenter  = 11,
		EAkChannelMask__HeightFrontRight   = 12,
		EAkChannelMask__HeightBackLeft     = 13,
		EAkChannelMask__HeightBackCenter   = 14,
		EAkChannelMask__HeightBackRight    = 15,
		EAkChannelMask__EAkChannelMask_MAX = 16
	};

	/**
	 * Enum AkAudio.EAkChannelConfigType
	 */
	enum class AkAudio_EAkChannelConfigType : uint8_t
	{
		EAkChannelConfigType__Anonymous                = 0,
		EAkChannelConfigType__Standard                 = 1,
		EAkChannelConfigType__Ambisonic                = 2,
		EAkChannelConfigType__EAkChannelConfigType_MAX = 3
	};

	/**
	 * Enum AkAudio.EAkDiffractionFlags
	 */
	enum class AkAudio_EAkDiffractionFlags : uint8_t
	{
		EAkDiffractionFlags__UseBuiltInParam            = 0,
		EAkDiffractionFlags__UseObstruction             = 1,
		EAkDiffractionFlags__CalcEmitterVirtualPosition = 2,
		EAkDiffractionFlags__EAkDiffractionFlags_MAX    = 3
	};

	/**
	 * Enum AkAudio.EAkPanningRule
	 */
	enum class AkAudio_EAkPanningRule : uint8_t
	{
		EAkPanningRule__Speakers           = 0,
		EAkPanningRule__Headphones         = 1,
		EAkPanningRule__EAkPanningRule_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkWindowsAudioAPI
	 */
	enum class AkAudio_EAkWindowsAudioAPI : uint8_t
	{
		EAkWindowsAudioAPI__Wasapi                 = 0,
		EAkWindowsAudioAPI__XAudio2                = 1,
		EAkWindowsAudioAPI__DirectSound            = 2,
		EAkWindowsAudioAPI__EAkWindowsAudioAPI_MAX = 3
	};

	/**
	 * Enum AkAudio.EAkWinGDKAudioAPI
	 */
	enum class AkAudio_EAkWinGDKAudioAPI : uint8_t
	{
		EAkWinGDKAudioAPI__Wasapi                = 0,
		EAkWinGDKAudioAPI__XAudio2               = 1,
		EAkWinGDKAudioAPI__DirectSound           = 2,
		EAkWinGDKAudioAPI__EAkWinGDKAudioAPI_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AkAudio.AkMainOutputSettings
	 * Size -> 0x0028
	 */
	struct FAkMainOutputSettings
	{
	public:
		class FString                                              AudioDeviceShareset;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AkAudio_EAkPanningRule                                     PanningRule;                                             // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B1Y[0x3];                                   // 0x0014(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		AkAudio_EAkChannelConfigType                               ChannelConfigType;                                       // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CVR[0x3];                                   // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   ChannelMask;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfChannels;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYR9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkSpatialAudioSettings
	 * Size -> 0x0020
	 */
	struct FAkSpatialAudioSettings
	{
	public:
		uint32_t                                                   MaxSoundPropagationDepth;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DiffractionFlags;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementThreshold;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfPrimaryRays;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReflectionOrder;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDiffractionOnReflections;                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDirectPathDiffraction;                             // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGFU[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumPathLength;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTransmission;                                      // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQQO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettings
	 * Size -> 0x0060
	 */
	struct FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   MaximumNumberOfMemoryPools;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumNumberOfPositioningPaths;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CommandQueueSize;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SamplesPerFrame;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkMainOutputSettings                               MainOutputSettings;                                      // 0x0010(0x0028) Edit, NativeAccessSpecifierPublic
		float                                                      StreamingLookAheadRatio;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NumberOfRefillsInVoice;                                  // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PS0S[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkSpatialAudioSettings                             SpatialAudioSettings;                                    // 0x0040(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   SampleRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HSQ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettings
	 * Size -> 0x0020
	 */
	struct FAkCommunicationSettings
	{
	public:
		uint32_t                                                   PoolSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DiscoveryBroadcastPort;                                  // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CommandPort;                                             // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NotificationPort;                                        // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXVN[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NetworkName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
	{
	public:
		bool                                                       InitializeSystemComms;                                   // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGZL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
	 * Size -> 0x0008
	 */
	struct FAkAdvancedSpatialAudioSettings
	{
	public:
		float                                                      DiffractionShadowAttenuationFactor;                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffractionShadowDegrees;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettings
	 * Size -> 0x0034
	 */
	struct FAkAdvancedInitializationSettings
	{
	public:
		uint32_t                                                   IO_MemorySize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IO_Granularity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetAutoStreamBufferLength;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamCache;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP7O[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaximumPinnedBytesInCache;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGameSyncPreparation;                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSJO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ContinuousPlaybackLookAhead;                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MonitorQueuePoolSize;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumHardwareTimeoutMs;                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugOutOfRangeCheckEnabled;                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2JG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugOutOfRangeLimit;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkAdvancedSpatialAudioSettings                     SpatialAudioSettings;                                    // 0x002C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
	 * Size -> 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
	 */
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
	{
	public:
		bool                                                       EnableMultiCoreRendering;                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUIY[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RoundFrameSizeToHardwareSize;                            // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QU9X[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkBoolPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkBoolPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkWwiseObjectDetails
	 * Size -> 0x0030
	 */
	struct FAkWwiseObjectDetails
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkWwiseItemToControl
	 * Size -> 0x0040
	 */
	struct FAkWwiseItemToControl
	{
	public:
		struct FAkWwiseObjectDetails                               ItemPicked;                                              // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkSegmentInfo
	 * Size -> 0x0024
	 */
	struct FAkSegmentInfo
	{
	public:
		int                                                        CurrentPosition;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PreEntryDuration;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ActiveDuration;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PostExitDuration;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RemainingLookAheadTime;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeatDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarDuration;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridDuration;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridOffset;                                              // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfaceOverride
	 * Size -> 0x0010
	 */
	struct FAkGeometrySurfaceOverride
	{
	public:
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableOcclusionOverride : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K9H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionValue;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkAcousticSurface
	 * Size -> 0x0018
	 */
	struct FAkAcousticSurface
	{
	public:
		uint32_t                                                   Texture;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkTriangle
	 * Size -> 0x0008
	 */
	struct FAkTriangle
	{
	public:
		uint16_t                                                   Point0;                                                  // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point1;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point2;                                                  // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Surface;                                                 // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkGeometryData
	 * Size -> 0x0050
	 */
	struct FAkGeometryData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkAcousticSurface>                          Surfaces;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkTriangle>                                 Triangles;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideAcousticTexture;                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideOcclusion;                                     // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O393[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkPluginInfo
	 * Size -> 0x0028
	 */
	struct FAkPluginInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PluginID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1498[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              dll;                                                     // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkAudioSession
	 * Size -> 0x000C
	 */
	struct FAkAudioSession
	{
	public:
		AkAudio_EAkAudioSessionCategory                            AudioSessionCategory;                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3M8[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   AudioSessionCategoryOptions;                             // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AkAudio_EAkAudioSessionMode                                AudioSessionMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6M8[0x3];                                   // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	};

	/**
	 * ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   ACPBatchBufferSize;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSC5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkPS5AdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78C3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkPoly
	 * Size -> 0x0010
	 */
	struct FAkPoly
	{
	public:
		class UAkAcousticTexture*                                  Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSurface;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D79W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
	{
	public:
		AkAudio_EAkCommSystem                                      CommunicationSystem;                                     // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WR6E[0x3];                                   // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_JR5V[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1DY[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GU8[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneGDKApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62OI[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KSO[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkXSXApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXSXApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkXSXAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUN3[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkAudioEventTrackKey
	 * Size -> 0x0020
	 */
	struct FAkAudioEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96ST[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentDataSerializationHelper
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentWeightMode                         TangentWeightMode;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFKO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValueSerializationHelper
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentMode                               TangentMode;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8VA[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentDataSerializationHelper           Tangent;                                                 // 0x0008(0x0014) NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
	 * Size -> 0x0030
	 */
	struct FMovieSceneFloatChannelSerializationHelper
	{
	public:
		Engine_ERichCurveExtrapolation                             PreInfinityExtrap;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveExtrapolation                             PostInfinityExtrap;                                      // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKT5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatValueSerializationHelper>    Values;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultValue;                                        // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4G0[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AKWaapiJsonObject
	 * Size -> 0x0010
	 */
	struct FAKWaapiJsonObject
	{
	public:
		unsigned char                                              UnknownData_0EK5[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkWaapiSubscriptionId
	 * Size -> 0x0008
	 */
	struct FAkWaapiSubscriptionId
	{
	public:
		unsigned char                                              UnknownData_F70D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
	 * Size -> 0x0001
	 */
	struct FAkAmbSoundCheckpointRecord
	{
	public:
		bool                                                       bCurrentlyPlaying;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkExternalSourceInfo
	 * Size -> 0x0038
	 */
	struct FAkExternalSourceInfo
	{
	public:
		class FString                                              ExternalSrcName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AkAudio_EAkCodecId                                         CodecID;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOIX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkExternalMediaAsset*                               ExternalSourceAsset;                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStreamed;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IORQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkMidiEventBase
	 * Size -> 0x0002
	 */
	struct FAkMidiEventBase
	{
	public:
		AkAudio_EAkMidiEventType                                   Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Chan;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiProgramChange
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiProgramChange : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ProgramNum;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiChannelAftertouch
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiChannelAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Value;                                                   // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteAftertouch
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiPitchBend
	 * Size -> 0x0006 (FullSize[0x0008] - InheritedSize[0x0002])
	 */
	struct FAkMidiPitchBend : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ValueLsb;                                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ValueMsb;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        FullValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiCc
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiCc : public FAkMidiEventBase
	{
	public:
		AkAudio_EAkMidiCcValues                                    Cc;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteOnOff
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteOnOff : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Velocity;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkMidiGeneric
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiGeneric : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Param1;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Param2;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkChannelMask
	 * Size -> 0x0004
	 */
	struct FAkChannelMask
	{
	public:
		int                                                        ChannelMask;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
	 * Size -> 0x0030
	 */
	struct FAkGeometrySurfacePropertiesToMap
	{
	public:
		unsigned char                                              AcousticTexture[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      OcclusionValue;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJZQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AkAudio.AkWaapiFieldNames
	 * Size -> 0x0010
	 */
	struct FAkWaapiFieldNames
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.AkWaapiUri
	 * Size -> 0x0010
	 */
	struct FAkWaapiUri
	{
	public:
		class FString                                              Uri;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioEventSection*                      Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioRTPCSection*                       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
