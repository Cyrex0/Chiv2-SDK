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
	 * BlueprintGeneratedClass BPF_printing.BPF_printing_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_printing_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Draw_Debug_Success(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_Draw_Debug_Warning(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_Draw_Debug_Error(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_Print_Line_Break(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Message(class UObject* Object, bool Enable, bool Verbose, bool Disable_Block, TArray<class FString>* Headers, TArray<class FString>* Bodies, TArray<int>* BodiesPerHeader, class UObject* __WorldContext);
		void STATIC_Print_Footer_Block(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Header_Block(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Header_Text(class UObject* Object, const class FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Body(class UObject* Object, TArray<class FString>* Multi_line_Text, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Success(class UObject* Object, const class FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Warning(class UObject* Object, const class FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
		void STATIC_Print_Error(class UObject* Object, const class FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
