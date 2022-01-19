#pragma once

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
	 * Enum PlayFabExtensions.ESessionMessageType
	 */
	enum class PlayFabExtensions_ESessionMessageType : uint8_t
	{
		ESessionMessageType__INVALID                 = 0,
		ESessionMessageType__JOIN_QUEUE              = 1,
		ESessionMessageType__LEAVE_QUEUE             = 2,
		ESessionMessageType__JOIN_GAME               = 3,
		ESessionMessageType__JOIN_LOBBY              = 4,
		ESessionMessageType__VALIDATE_CROSSPLAY      = 5,
		ESessionMessageType__ESessionMessageType_MAX = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PlayFabExtensions.SessionMessage
	 * Size -> 0x0030
	 */
	struct FSessionMessage
	{
	public:
		PlayFabExtensions_ESessionMessageType                      MessageType;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK0T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Data;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MsgID;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8JU[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
