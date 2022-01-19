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
	 * BlueprintGeneratedClass BPF_GoreFx.BPF_GoreFx_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_GoreFx_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Gore_BoneToEnumSelection(const class FName& Bone, class UObject* __WorldContext, GorePiece_EGorePiece* Piece);
		void STATIC_GetProjectileRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force);
		void STATIC_GetCurrentHelmetPolicy(class AActor* Actor, const struct FTBL_FGoreEvent& GoreEvent, class UObject* __WorldContext, TBL_EHelmetRemovalPolicy* OutLimbGoreAction);
		void STATIC_ApplyForceToHorse(class ACharacter* Character, const class FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext);
		void STATIC_GetHorseGorePiece(const class FName& Bone, class UObject* __WorldContext, GorePiece_EGorePiece* Piece);
		void STATIC_PlayGoreSound(const class FName& RowName, class AActor* Actor, class UObject* __WorldContext);
		void STATIC_GetWeaponRagdollForce(class AActor* Actor, class UObject* __WorldContext, float* Force);
		void STATIC_GetGorePiece(const class FName& Bone, class UObject* __WorldContext, GorePiece_EGorePiece* Piece);
		void STATIC_GetCurrentGoreAction(class AActor* Actor, class AInventoryItem* KillingBlowItem, class UObject* __WorldContext, TBL_ELimbGoreAction* OutLimbGoreAction, TBL_EHeadGoreAction* OutHeadGoreAction);
		void STATIC_ApplyForceToRagdoll(class ATBLCharacter* Character, const class FName& BoneName, const struct FVector& Impulse, class UObject* __WorldContext);
		void STATIC_GetPawnChildMesh(class AActor* Actor, int MeshIndex, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh);
		void STATIC_IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
