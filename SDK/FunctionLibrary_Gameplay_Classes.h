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
	 * BlueprintGeneratedClass FunctionLibrary_Gameplay.FunctionLibrary_Gameplay_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibrary_Gameplay_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_DirectionToActor(class AActor* Actor, class AActor* Target_, class UObject* __WorldContext, struct FVector* Dir);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
