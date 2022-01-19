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
	 * 		Name   -> PredefindFunction UGameServerQueryHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServerQueryHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameServerQueryPlugin.GameServerQueryHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameServerA2SQueryHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServerA2SQueryHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameServerQueryPlugin.GameServerA2SQueryHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGameServerQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameServerQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameServerQueryPlugin.GameServerQuery");
		return ptr;
	}

}


