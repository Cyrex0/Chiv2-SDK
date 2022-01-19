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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass CharacterStatesFx.CharacterStatesFx_C
	 * Size -> 0x06B0 (FullSize[0x0880] - InheritedSize[0x01D0])
	 */
	class UCharacterStatesFx_C : public UFxInstanceCommon_C
	{
	public:
		float                                                      LowHealthThresholdPercent;                               // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLowHealth;                                             // 0x01D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLowStamina;                                            // 0x01D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXDP[0x2];                                   // 0x01D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowStaminaThresholdPercent;                              // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOutOfStamina;                                          // 0x01DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQWD[0x3];                                   // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<AudioCharacterStates_EAudioCharacterStates, bool>     AppliedConditions;                                       // 0x01E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UAkAudioEvent*>                               OnDeathLocalPlayerAKEvents;                              // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            BurningParticleSystem;                                   // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PreviousHealth;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_532L[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       ApplyConditionCharacterRef;                              // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        InspirationHealingSoundTimerHandle;                      // 0x0258(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable;                                  // 0x0260(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable;                                    // 0x0270(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_2;                                // 0x0280(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_2;                                  // 0x0290(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_3;                                // 0x02A0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_3;                                  // 0x02B0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_4;                                // 0x02C0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x02D0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x02E0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_IsLow_2;                              // 0x02F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V2C[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_Actor_6;                              // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_IsLow;                                // 0x0300(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0SK[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_Actor_5;                              // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter;                       // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0318(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W99O[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_StaminaPercent;                       // 0x031C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_CustomEvent_Actor_4;                              // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_IsLocalActorNotBotNotNPC_2;           // 0x0328(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4J5[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_HealthPercent;                        // 0x032C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_CustomEvent_HealthValue;                          // 0x0330(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_CustomEvent_HealthMaxValue;                       // 0x0334(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_CustomEvent_Actor_3;                              // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_IsLocalActorNotBotNotNPC;             // 0x0340(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RHV[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_2;                     // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x0350(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsAlive_IsAlive;                                // 0x0351(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D62[0x6];                                   // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_3;                     // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x0360(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9RQ[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry;                      // 0x0368(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		float                                                      CallFunc_MapToCurve_Out;                                 // 0x0388(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JHC[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_2;                    // 0x0390(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_4;                                  // 0x03B0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Temp_int_Loop_Counter_Variable;                          // 0x03C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBIJ[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeathDamageTakenEvent                              K2Node_Event_DamageEvent;                                // 0x03C8(0x0160) Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_3;                    // 0x0528(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_4;                    // 0x0548(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_5;                                // 0x0568(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0578(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JU4[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_4;                     // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_4;                           // 0x0588(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHVY[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_5;                    // 0x0590(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_2;                          // 0x05B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5HO[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_6;                    // 0x05B8(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_6;                                // 0x05D8(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_5;                                  // 0x05E8(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_IsOutOfStamina;                       // 0x05F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYLH[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_Actor_2;                              // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_5;                     // 0x0608(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_5;                           // 0x0610(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8C1P[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_7;                    // 0x0618(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		AudioCharacterStates_EAudioCharacterStates                 CallFunc_GetHighestPriorityCondition_AudioCondition;     // 0x0638(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AudioCharacterStates_EAudioCharacterStates                 K2Node_CustomEvent_AudioState_2;                         // 0x0639(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AudioCharacterStates_EAudioCharacterStates                 K2Node_CustomEvent_AudioState;                           // 0x063A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value;            // 0x063B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWYT[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_6;                                  // 0x0640(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_2;          // 0x0650(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_3;          // 0x0651(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsActorDead_Return_Value;                       // 0x0652(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPQC[0x5];                                   // 0x0653(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         K2Node_Event_Controller;                                 // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_Event_Actor_4;                                    // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EConditionType                                         K2Node_Event_Condition_2;                                // 0x0668(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_3;                          // 0x0669(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F1Z[0x6];                                   // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_6;                     // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_6;                           // 0x0678(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JW1[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_Actor_3;                                    // 0x0680(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EConditionType                                         K2Node_Event_Condition;                                  // 0x0688(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable;                                      // 0x0689(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW3T[0x6];                                   // 0x068A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_Actor;                                // 0x0690(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EConditionType                                         K2Node_CustomEvent_Condition;                            // 0x0698(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_4;                          // 0x0699(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4X3H[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_7;                     // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_7;                           // 0x06A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_4;          // 0x06A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_2;                                    // 0x06AA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8L2[0x5];                                   // 0x06AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Temp_string_Variable;                                    // 0x06B0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Temp_int_Variable;                                       // 0x06C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_HasCondition_Return_Value;                      // 0x06C4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL7U[0x3];                                   // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      Temp_delegate_Variable_7;                                // 0x06C8(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_5;          // 0x06D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_5;                          // 0x06D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIM3[0x6];                                   // 0x06DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Temp_string_Variable_2;                                  // 0x06E0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Temp_string_Variable_3;                                  // 0x06F0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_8;                    // 0x0700(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		float                                                      K2Node_CustomEvent_Percentage;                           // 0x0720(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYYU[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_7;                                  // 0x0728(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_9;                    // 0x0738(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		class ATBLCharacter*                                       K2Node_DynamicCast_AsTBLCharacter_8;                     // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_8;                           // 0x0760(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsAlive_IsAlive_2;                              // 0x0761(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HENJ[0x6];                                   // 0x0762(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundSwitchEntry                                   K2Node_MakeStruct_SoundSwitchEntry_10;                   // 0x0768(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		class FString                                              Temp_string_Variable_4;                                  // 0x0788(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Temp_string_Variable_5;                                  // 0x0798(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Temp_string_Variable_6;                                  // 0x07A8(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_6;          // 0x07B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSG7[0x3];                                   // 0x07B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetHealthPercent_Percent;                       // 0x07BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Temp_string_Variable_7;                                  // 0x07C0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AudioCharacterStates_EAudioCharacterStates                 Temp_byte_Variable;                                      // 0x07D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP7T[0x7];                                   // 0x07D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_Select_Default;                                   // 0x07D8(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_7;          // 0x07E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRNY[0x7];                                   // 0x07E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_Actor_2;                                    // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_Event_Actor;                                      // 0x07F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EStat                                                  K2Node_Event_Type;                                       // 0x0800(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24EL[0x7];                                   // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatEntry                                          K2Node_Event_Stat;                                       // 0x0808(0x0040) Transient, DuplicateTransient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaValue;                                 // 0x0848(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_6;                          // 0x084C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsLocalPlayerAndNotBot_Return_Value_8;          // 0x084D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTEZ[0x2];                                   // 0x084E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Temp_int_Array_Index_Variable;                           // 0x0850(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSPV[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       CallFunc_Array_Get_Item;                                 // 0x0858(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_8;                                // 0x0860(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_8;                                  // 0x0870(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateStaminaRTPC(float bpp__StaminaPercent__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf);
		void UpdateHealthRTPC(float bpp__HealthPercent__pf, float bpp__HealthValue__pf, float bpp__HealthMaxValue__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf);
		void UpdateDownedStatePercentage(float bpp__Percentage__pf);
		void UpdateBloodEffect();
		void RemoveBurningParticleSystem();
		void RemoveAudioState(AudioCharacterStates_EAudioCharacterStates bpp__AudioState__pf);
		void RemoveAllConditions();
		void RemoveAllAudioStates();
		void PlaySoundForLocalCharacter(class UAkAudioEvent* bpp__Event__pf, class ATBLCharacter* bpp__Character__pf);
		void OutOfStaminaUpdate(bool bpp__IsOutOfStamina__pf, class AActor* bpp__Actor__pf);
		void OnStatChanged(class AActor* bpp__Actor__pf, TBL_EStat bpp__Type__pf, const struct FStatEntry& bpp__Stat__pf__const, float bpp__DeltaValue__pf);
		void OnStaminaUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf);
		void OnRevived();
		void OnRemoveCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf);
		void OnPossessed(class AController* bpp__Controller__pf);
		void OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const);
		void OnHealthUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf);
		void OnConstruct(class AActor* bpp__Actor__pf);
		void OnAssemble_CharacterStatesFx();
		void OnApplyCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf);
		void IsActorDead(bool* bpp__ReturnxValue__pfT);
		void HasCondition(TBL_EConditionType bpp__Condition__pf, bool* bpp__ReturnxValue__pfT);
		void HandleRemovingCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf);
		void GetHighestPriorityCondition(AudioCharacterStates_EAudioCharacterStates* bpp__AudioCondition__pf);
		void ExecuteUbergraph_CharacterStatesFx_4(int bpp__EntryPoint__pf);
		void CustomEvent_1();
		void ApplyAudioState(AudioCharacterStates_EAudioCharacterStates bpp__AudioState__pf);
		void AddBurningParticleSystem(class ATBLCharacter* bpp__InActor__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
