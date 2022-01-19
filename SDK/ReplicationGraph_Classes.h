﻿#pragma once

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
	 * Class ReplicationGraph.ReplicationGraph
	 * Size -> 0x0478 (FullSize[0x04A0] - InheritedSize[0x0028])
	 */
	class UReplicationGraph : public UReplicationDriver
	{
	public:
		class UClass*                                              ReplicationConnectionManagerClass;                       // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetDriver*                                          NetDriver;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              Connections;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              PendingConnections;                                      // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUKH[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       GlobalGraphNodes;                                        // 0x0098(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PrepareForReplicationNodes;                              // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU21[0x3E8];                                 // 0x00B8(0x03E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.BasicReplicationGraph
	 * Size -> 0x0030 (FullSize[0x04D0] - InheritedSize[0x04A0])
	 */
	class UBasicReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionAlwaysRelevantNodePair>           AlwaysRelevantForConnectionList;                         // 0x04A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x04B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UG1S[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReplicationGraphNode : public UObject
	{
	public:
		TArray<class UReplicationGraphNode*>                       AllChildNodes;                                           // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LBCF[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorList
	 * Size -> 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_RH9G[0xA8];                                  // 0x0050(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	 * Size -> 0x00E8 (FullSize[0x0138] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_HF1D[0xE8];                                  // 0x0050(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_1NYA[0x30];                                  // 0x00F8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
	 * Size -> 0x0098 (FullSize[0x0190] - InheritedSize[0x00F8])
	 */
	class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_RGK4[0x98];                                  // 0x00F8(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	 * Size -> 0x0050 (FullSize[0x0148] - InheritedSize[0x00F8])
	 */
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_Z7Y5[0x50];                                  // 0x00F8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridCell
	 * Size -> 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
	 */
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_FGV1[0x48];                                  // 0x00F8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicationGraphNode*                               DynamicNode;                                             // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_DormancyNode*                  DormancyNode;                                            // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	 * Size -> 0x01E0 (FullSize[0x0230] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_FZPV[0x1E0];                                 // 0x0050(0x01E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
	{
	public:
		class UReplicationGraphNode*                               ChildNode;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DCCK[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_YUOW[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewer;                                              // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewTarget;                                          // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
	{
	public:
		TArray<struct FTearOffActorInfo>                           TearOffActors;                                           // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DS71[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.NetReplicationGraphConnection
	 * Size -> 0x0218 (FullSize[0x0240] - InheritedSize[0x0028])
	 */
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUJS[0x140];                                 // 0x0030(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReplicationGraphDebugActor*                         DebugActor;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LEQ[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLastLocationGatherInfo>                     LastGatherLocations;                                     // 0x0190(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELMM[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       ConnectionGraphNodes;                                    // 0x01A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_TearOff_ForConnection*         TearOffNode;                                             // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XTW[0x80];                                  // 0x01C0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphDebugActor
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class AReplicationGraphDebugActor : public AActor
	{
	public:
		class UReplicationGraph*                                   ReplicationGraph;                                        // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetReplicationGraphConnection*                      ConnectionManager;                                       // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerStopDebugging();
		void ServerStartDebugging();
		void ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame);
		void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
		void ServerSetConditionalActorBreakpoint(class AActor* Actor);
		void ServerPrintCullDistances();
		void ServerPrintAllActorInfo(const class FString& Str);
		void ServerCellInfo();
		void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
