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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class OnlineSubsystem_EInAppPurchaseState : uint8_t
	{
		EInAppPurchaseState__Unknown                 = 0,
		EInAppPurchaseState__Success                 = 1,
		EInAppPurchaseState__Failed                  = 2,
		EInAppPurchaseState__Cancelled               = 3,
		EInAppPurchaseState__Invalid                 = 4,
		EInAppPurchaseState__NotAllowed              = 5,
		EInAppPurchaseState__Restored                = 6,
		EInAppPurchaseState__AlreadyOwned            = 7,
		EInAppPurchaseState__EInAppPurchaseState_MAX = 8
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class OnlineSubsystem_EMPMatchOutcome : uint8_t
	{
		EMPMatchOutcome__None                = 0,
		EMPMatchOutcome__Quit                = 1,
		EMPMatchOutcome__Won                 = 2,
		EMPMatchOutcome__Lost                = 3,
		EMPMatchOutcome__Tied                = 4,
		EMPMatchOutcome__TimeExpired         = 5,
		EMPMatchOutcome__First               = 6,
		EMPMatchOutcome__Second              = 7,
		EMPMatchOutcome__Third               = 8,
		EMPMatchOutcome__Fourth              = 9,
		EMPMatchOutcome__EMPMatchOutcome_MAX = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystem.NamedInterface
	 * Size -> 0x0010
	 */
	struct FNamedInterface
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             InterfaceObject;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaceDef
	 * Size -> 0x0018
	 */
	struct FNamedInterfaceDef
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InterfaceClassName;                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
	 * Size -> 0x00A8
	 */
	struct FInAppPurchaseProductInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayPrice;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawPrice;                                                // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N82[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencySymbol;                                          // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecimalSeparator;                                        // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupingSeparator;                                       // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseRestoreInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
	 * Size -> 0x0018
	 */
	struct FInAppPurchaseProductRequest
	{
	public:
		class FString                                              ProductIdentifier;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SHW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct OnlineSubsystem.OnlineInventoryItem
	 * Size -> 0x0020
	 */
	struct FOnlineInventoryItem
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ItemType;                                                // 0x0010(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.OnlineStoreOffer
	 * Size -> 0x0180
	 */
	struct FOnlineStoreOffer
	{
	public:
		unsigned char                                              UnknownData_MJ80[0x180];                                 // 0x0000(0x0180) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct OnlineSubsystem.Motd
	 * Size -> 0x0050
	 */
	struct FMotd
	{
	public:
		unsigned char                                              UnknownData_D8U5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Motd;                                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Link;                                                    // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LinkText;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Signature;                                               // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Time;                                                    // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct OnlineSubsystem.TitleNews
	 * Size -> 0x0068
	 */
	struct FTitleNews
	{
	public:
		unsigned char                                              UnknownData_VT6W[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Content;                                                 // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Summary;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewsId;                                                  // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Timestamp;                                               // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
