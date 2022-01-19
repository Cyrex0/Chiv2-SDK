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
	 * 		Offset -> 0x00BDC1A0
	 * 		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage");
		
		UEasyAntiCheatNetComponent_ServerMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BDC100
	 * 		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage");
		
		UEasyAntiCheatNetComponent_ClientMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEasyAntiCheatNetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEasyAntiCheatNetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}

}


