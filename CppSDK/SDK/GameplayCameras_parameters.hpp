#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// 0x0030 (0x0030 - 0x0000)
struct MatineeCameraShake_StartMatineeCameraShake final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>        ShakeClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraShakePlaySpace                         PlaySpace;                                         // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E78[0x3];                                      // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E79[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatineeCameraShake*                    ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_StartMatineeCameraShake) == 0x000008, "Wrong alignment on MatineeCameraShake_StartMatineeCameraShake");
static_assert(sizeof(MatineeCameraShake_StartMatineeCameraShake) == 0x000030, "Wrong size on MatineeCameraShake_StartMatineeCameraShake");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, PlayerCameraManager) == 0x000000, "Member 'MatineeCameraShake_StartMatineeCameraShake::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, ShakeClass) == 0x000008, "Member 'MatineeCameraShake_StartMatineeCameraShake::ShakeClass' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, Scale) == 0x000010, "Member 'MatineeCameraShake_StartMatineeCameraShake::Scale' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, PlaySpace) == 0x000014, "Member 'MatineeCameraShake_StartMatineeCameraShake::PlaySpace' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, UserPlaySpaceRot) == 0x000018, "Member 'MatineeCameraShake_StartMatineeCameraShake::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShake, ReturnValue) == 0x000028, "Member 'MatineeCameraShake_StartMatineeCameraShake::ReturnValue' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// 0x0038 (0x0038 - 0x0000)
struct MatineeCameraShake_StartMatineeCameraShakeFromSource final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>        ShakeClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraShakeSourceComponent*            SourceComponent;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraShakePlaySpace                         PlaySpace;                                         // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E7A[0x3];                                      // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0020(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E7B[0x4];                                      // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMatineeCameraShake*                    ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_StartMatineeCameraShakeFromSource) == 0x000008, "Wrong alignment on MatineeCameraShake_StartMatineeCameraShakeFromSource");
static_assert(sizeof(MatineeCameraShake_StartMatineeCameraShakeFromSource) == 0x000038, "Wrong size on MatineeCameraShake_StartMatineeCameraShakeFromSource");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, PlayerCameraManager) == 0x000000, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, ShakeClass) == 0x000008, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::ShakeClass' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, SourceComponent) == 0x000010, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::SourceComponent' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, Scale) == 0x000018, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::Scale' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, PlaySpace) == 0x00001C, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::PlaySpace' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, UserPlaySpaceRot) == 0x000020, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_StartMatineeCameraShakeFromSource, ReturnValue) == 0x000030, "Member 'MatineeCameraShake_StartMatineeCameraShakeFromSource::ReturnValue' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// 0x0BF0 (0x0BF0 - 0x0000)
struct MatineeCameraShake_BlueprintUpdateCameraShake final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E7C[0x8];                                      // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       POV;                                               // 0x0010(0x05F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMinimalViewInfo                       ModifiedPOV;                                       // 0x0600(0x05F0)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_BlueprintUpdateCameraShake) == 0x000010, "Wrong alignment on MatineeCameraShake_BlueprintUpdateCameraShake");
static_assert(sizeof(MatineeCameraShake_BlueprintUpdateCameraShake) == 0x000BF0, "Wrong size on MatineeCameraShake_BlueprintUpdateCameraShake");
static_assert(offsetof(MatineeCameraShake_BlueprintUpdateCameraShake, DeltaTime) == 0x000000, "Member 'MatineeCameraShake_BlueprintUpdateCameraShake::DeltaTime' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_BlueprintUpdateCameraShake, Alpha) == 0x000004, "Member 'MatineeCameraShake_BlueprintUpdateCameraShake::Alpha' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_BlueprintUpdateCameraShake, POV) == 0x000010, "Member 'MatineeCameraShake_BlueprintUpdateCameraShake::POV' has a wrong offset!");
static_assert(offsetof(MatineeCameraShake_BlueprintUpdateCameraShake, ModifiedPOV) == 0x000600, "Member 'MatineeCameraShake_BlueprintUpdateCameraShake::ModifiedPOV' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// 0x0004 (0x0004 - 0x0000)
struct MatineeCameraShake_ReceivePlayShake final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_ReceivePlayShake) == 0x000004, "Wrong alignment on MatineeCameraShake_ReceivePlayShake");
static_assert(sizeof(MatineeCameraShake_ReceivePlayShake) == 0x000004, "Wrong size on MatineeCameraShake_ReceivePlayShake");
static_assert(offsetof(MatineeCameraShake_ReceivePlayShake, Scale) == 0x000000, "Member 'MatineeCameraShake_ReceivePlayShake::Scale' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// 0x0001 (0x0001 - 0x0000)
struct MatineeCameraShake_ReceiveStopShake final
{
public:
	bool                                          bImmediately;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_ReceiveStopShake) == 0x000001, "Wrong alignment on MatineeCameraShake_ReceiveStopShake");
static_assert(sizeof(MatineeCameraShake_ReceiveStopShake) == 0x000001, "Wrong size on MatineeCameraShake_ReceiveStopShake");
static_assert(offsetof(MatineeCameraShake_ReceiveStopShake, bImmediately) == 0x000000, "Member 'MatineeCameraShake_ReceiveStopShake::bImmediately' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// 0x0001 (0x0001 - 0x0000)
struct MatineeCameraShake_ReceiveIsFinished final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShake_ReceiveIsFinished) == 0x000001, "Wrong alignment on MatineeCameraShake_ReceiveIsFinished");
static_assert(sizeof(MatineeCameraShake_ReceiveIsFinished) == 0x000001, "Wrong size on MatineeCameraShake_ReceiveIsFinished");
static_assert(offsetof(MatineeCameraShake_ReceiveIsFinished, ReturnValue) == 0x000000, "Member 'MatineeCameraShake_ReceiveIsFinished::ReturnValue' has a wrong offset!");

// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// 0x0010 (0x0010 - 0x0000)
struct MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake final
{
public:
	class UCameraShakeBase*                       CameraShake;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatineeCameraShake*                    ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake) == 0x000008, "Wrong alignment on MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake");
static_assert(sizeof(MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake) == 0x000010, "Wrong size on MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake");
static_assert(offsetof(MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake, CameraShake) == 0x000000, "Member 'MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake::CameraShake' has a wrong offset!");
static_assert(offsetof(MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake, ReturnValue) == 0x000008, "Member 'MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake::ReturnValue' has a wrong offset!");

}

