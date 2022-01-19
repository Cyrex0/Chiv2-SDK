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
	 * DynamicClass ChickenFx.ChickenFx_C
	 * Size -> 0x0338 (FullSize[0x0508] - InheritedSize[0x01D0])
	 */
	class UChickenFx_C : public UFxInstanceCommon_C
	{
	public:
		float                                                      EmberStrength;                                           // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UKL[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            BurningParticleSystem;                                   // 0x01D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable;                                    // 0x01E0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable;                                  // 0x01F0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_2;                                  // 0x0200(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_2;                                // 0x0210(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_3;                                  // 0x0220(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_3;                                // 0x0230(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_4;                                  // 0x0240(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_4;                                // 0x0250(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		struct FDamageTakenEvent                                   K2Node_Event_DamageEvent_2;                              // 0x0260(0x0148) Transient, DuplicateTransient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDeathDamageTakenEvent                              K2Node_Event_DamageEvent;                                // 0x03A8(0x0160) Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void RemoveBurningParticleSystem();
		void OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const);
		void OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const);
		class UAkComponent* GetAkComponent();
		void AddBurningParticleSystem(class AActor* bpp__InActor__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
