/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGRP_NoticeBoard_FrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGRP_NoticeBoard_FrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GRP_NoticeBoard_FrontEnd.GRP_NoticeBoard_FrontEnd_C");
		return ptr;
	}

}


