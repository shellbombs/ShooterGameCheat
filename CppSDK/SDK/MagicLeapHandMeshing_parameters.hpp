#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapHandMeshing

#include "Basic.hpp"


namespace SDK::Params
{

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapHandMeshingComponent_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_132C[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapHandMeshingComponent_ConnectMRMesh) == 0x000008, "Wrong alignment on MagicLeapHandMeshingComponent_ConnectMRMesh");
static_assert(sizeof(MagicLeapHandMeshingComponent_ConnectMRMesh) == 0x000010, "Wrong size on MagicLeapHandMeshingComponent_ConnectMRMesh");
static_assert(offsetof(MagicLeapHandMeshingComponent_ConnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MagicLeapHandMeshingComponent_ConnectMRMesh::InMRMeshPtr' has a wrong offset!");
static_assert(offsetof(MagicLeapHandMeshingComponent_ConnectMRMesh, ReturnValue) == 0x000008, "Member 'MagicLeapHandMeshingComponent_ConnectMRMesh::ReturnValue' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapHandMeshingComponent_DisconnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_132D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapHandMeshingComponent_DisconnectMRMesh) == 0x000008, "Wrong alignment on MagicLeapHandMeshingComponent_DisconnectMRMesh");
static_assert(sizeof(MagicLeapHandMeshingComponent_DisconnectMRMesh) == 0x000010, "Wrong size on MagicLeapHandMeshingComponent_DisconnectMRMesh");
static_assert(offsetof(MagicLeapHandMeshingComponent_DisconnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MagicLeapHandMeshingComponent_DisconnectMRMesh::InMRMeshPtr' has a wrong offset!");
static_assert(offsetof(MagicLeapHandMeshingComponent_DisconnectMRMesh, ReturnValue) == 0x000008, "Member 'MagicLeapHandMeshingComponent_DisconnectMRMesh::ReturnValue' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapHandMeshingComponent_SetUseWeightedNormals final
{
public:
	bool                                          bInUseWeightedNormals;                             // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapHandMeshingComponent_SetUseWeightedNormals) == 0x000001, "Wrong alignment on MagicLeapHandMeshingComponent_SetUseWeightedNormals");
static_assert(sizeof(MagicLeapHandMeshingComponent_SetUseWeightedNormals) == 0x000001, "Wrong size on MagicLeapHandMeshingComponent_SetUseWeightedNormals");
static_assert(offsetof(MagicLeapHandMeshingComponent_SetUseWeightedNormals, bInUseWeightedNormals) == 0x000000, "Member 'MagicLeapHandMeshingComponent_SetUseWeightedNormals::bInUseWeightedNormals' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_132E[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh) == 0x000008, "Wrong alignment on MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh");
static_assert(sizeof(MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh) == 0x000010, "Wrong size on MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh::InMRMeshPtr' has a wrong offset!");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh, ReturnValue) == 0x000008, "Member 'MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh::ReturnValue' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapHandMeshingFunctionLibrary_CreateClient final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapHandMeshingFunctionLibrary_CreateClient) == 0x000001, "Wrong alignment on MagicLeapHandMeshingFunctionLibrary_CreateClient");
static_assert(sizeof(MagicLeapHandMeshingFunctionLibrary_CreateClient) == 0x000001, "Wrong size on MagicLeapHandMeshingFunctionLibrary_CreateClient");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_CreateClient, ReturnValue) == 0x000000, "Member 'MagicLeapHandMeshingFunctionLibrary_CreateClient::ReturnValue' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapHandMeshingFunctionLibrary_DestroyClient final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapHandMeshingFunctionLibrary_DestroyClient) == 0x000001, "Wrong alignment on MagicLeapHandMeshingFunctionLibrary_DestroyClient");
static_assert(sizeof(MagicLeapHandMeshingFunctionLibrary_DestroyClient) == 0x000001, "Wrong size on MagicLeapHandMeshingFunctionLibrary_DestroyClient");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_DestroyClient, ReturnValue) == 0x000000, "Member 'MagicLeapHandMeshingFunctionLibrary_DestroyClient::ReturnValue' has a wrong offset!");

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
// 0x0010 (0x0010 - 0x0000)
struct MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_132F[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh) == 0x000008, "Wrong alignment on MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh");
static_assert(sizeof(MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh) == 0x000010, "Wrong size on MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh::InMRMeshPtr' has a wrong offset!");
static_assert(offsetof(MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh, ReturnValue) == 0x000008, "Member 'MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh::ReturnValue' has a wrong offset!");

}

