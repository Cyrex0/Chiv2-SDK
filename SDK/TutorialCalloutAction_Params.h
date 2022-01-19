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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TutorialCalloutAction.TutorialCalloutAction_C.Construct
	 */
	struct UTutorialCalloutAction_C_Construct_Params
	{
	};

	/**
	 * Function TutorialCalloutAction.TutorialCalloutAction_C.UsableFade
	 */
	struct UTutorialCalloutAction_C_UsableFade_Params
	{
	public:
		bool                                                       FadeIn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialCalloutAction.TutorialCalloutAction_C.ExecuteUbergraph_TutorialCalloutAction
	 */
	struct UTutorialCalloutAction_C_ExecuteUbergraph_TutorialCalloutAction_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
