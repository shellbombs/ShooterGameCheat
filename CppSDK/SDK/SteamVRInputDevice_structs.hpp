#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamVRInputDevice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum SteamVRInputDevice.ESkeletalSummaryDataType
// NumValues: 0x0003
enum class ESkeletalSummaryDataType : uint8
{
	VR_SummaryType_FromAnimation             = 0,
	VR_SummaryType_FromDevice                = 1,
	VR_SummaryType_MAX                       = 2,
};

// Enum SteamVRInputDevice.ESteamVRInputStringBits
// NumValues: 0x0005
enum class ESteamVRInputStringBits : uint8
{
	VR_InputString_Hand                      = 0,
	VR_InputString_ControllerType            = 1,
	VR_InputString_InputSource               = 2,
	VR_InputString_All                       = 3,
	VR_InputString_MAX                       = 4,
};

// Enum SteamVRInputDevice.EControllerFidelity
// NumValues: 0x0004
enum class EControllerFidelity : uint8
{
	VR_ControllerFidelity_Estimated          = 0,
	VR_ControllerFidelity_Full               = 1,
	VR_ControllerFidelity_Partial            = 2,
	VR_ControllerFidelity_MAX                = 3,
};

// Enum SteamVRInputDevice.EHandSkeleton
// NumValues: 0x0003
enum class EHandSkeleton : uint8
{
	VR_SteamVRHandSkeleton                   = 0,
	VR_UE4HandSkeleton                       = 1,
	VR_MAX                                   = 2,
};

// Enum SteamVRInputDevice.EHand
// NumValues: 0x0003
enum class EHand : uint8
{
	VR_LeftHand                              = 0,
	VR_RightHand                             = 1,
	VR_MAX                                   = 2,
};

// Enum SteamVRInputDevice.EMotionRange
// NumValues: 0x0003
enum class EMotionRange : uint8
{
	VR_WithoutController                     = 0,
	VR_WithController                        = 1,
	VR_MAX                                   = 2,
};

// Enum SteamVRInputDevice.ESteamVRHand
// NumValues: 0x0003
enum class ESteamVRHand : uint8
{
	VR_Left                                  = 0,
	VR_Right                                 = 1,
	VR_MAX                                   = 2,
};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// 0x05D0 (0x05D0 - 0x0000)
struct FSteamVRSkeletonTransform final
{
public:
	struct FTransform                             Root;                                              // 0x0000(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Wrist;                                             // 0x0030(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Thumb_0;                                           // 0x0060(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Thumb_1;                                           // 0x0090(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Thumb_2;                                           // 0x00C0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Thumb_3;                                           // 0x00F0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Index_0;                                           // 0x0120(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Index_1;                                           // 0x0150(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Index_2;                                           // 0x0180(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Index_3;                                           // 0x01B0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Index_4;                                           // 0x01E0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Middle_0;                                          // 0x0210(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Middle_1;                                          // 0x0240(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Middle_2;                                          // 0x0270(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Middle_3;                                          // 0x02A0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Middle_4;                                          // 0x02D0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Ring_0;                                            // 0x0300(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Ring_1;                                            // 0x0330(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Ring_2;                                            // 0x0360(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Ring_3;                                            // 0x0390(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Ring_4;                                            // 0x03C0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Pinky_0;                                           // 0x03F0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Pinky_1;                                           // 0x0420(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Pinky_2;                                           // 0x0450(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Pinky_3;                                           // 0x0480(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Pinky_4;                                           // 0x04B0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Aux_Thumb;                                         // 0x04E0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Aux_Index;                                         // 0x0510(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Aux_Middle;                                        // 0x0540(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Aux_Ring;                                          // 0x0570(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Aux_Pinky;                                         // 0x05A0(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamVRSkeletonTransform) == 0x000010, "Wrong alignment on FSteamVRSkeletonTransform");
static_assert(sizeof(FSteamVRSkeletonTransform) == 0x0005D0, "Wrong size on FSteamVRSkeletonTransform");
static_assert(offsetof(FSteamVRSkeletonTransform, Root) == 0x000000, "Member 'FSteamVRSkeletonTransform::Root' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Wrist) == 0x000030, "Member 'FSteamVRSkeletonTransform::Wrist' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb_0) == 0x000060, "Member 'FSteamVRSkeletonTransform::Thumb_0' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb_1) == 0x000090, "Member 'FSteamVRSkeletonTransform::Thumb_1' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb_2) == 0x0000C0, "Member 'FSteamVRSkeletonTransform::Thumb_2' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb_3) == 0x0000F0, "Member 'FSteamVRSkeletonTransform::Thumb_3' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Index_0) == 0x000120, "Member 'FSteamVRSkeletonTransform::Index_0' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Index_1) == 0x000150, "Member 'FSteamVRSkeletonTransform::Index_1' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Index_2) == 0x000180, "Member 'FSteamVRSkeletonTransform::Index_2' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Index_3) == 0x0001B0, "Member 'FSteamVRSkeletonTransform::Index_3' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Index_4) == 0x0001E0, "Member 'FSteamVRSkeletonTransform::Index_4' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Middle_0) == 0x000210, "Member 'FSteamVRSkeletonTransform::Middle_0' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Middle_1) == 0x000240, "Member 'FSteamVRSkeletonTransform::Middle_1' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Middle_2) == 0x000270, "Member 'FSteamVRSkeletonTransform::Middle_2' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Middle_3) == 0x0002A0, "Member 'FSteamVRSkeletonTransform::Middle_3' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Middle_4) == 0x0002D0, "Member 'FSteamVRSkeletonTransform::Middle_4' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Ring_0) == 0x000300, "Member 'FSteamVRSkeletonTransform::Ring_0' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Ring_1) == 0x000330, "Member 'FSteamVRSkeletonTransform::Ring_1' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Ring_2) == 0x000360, "Member 'FSteamVRSkeletonTransform::Ring_2' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Ring_3) == 0x000390, "Member 'FSteamVRSkeletonTransform::Ring_3' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Ring_4) == 0x0003C0, "Member 'FSteamVRSkeletonTransform::Ring_4' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky_0) == 0x0003F0, "Member 'FSteamVRSkeletonTransform::Pinky_0' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky_1) == 0x000420, "Member 'FSteamVRSkeletonTransform::Pinky_1' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky_2) == 0x000450, "Member 'FSteamVRSkeletonTransform::Pinky_2' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky_3) == 0x000480, "Member 'FSteamVRSkeletonTransform::Pinky_3' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky_4) == 0x0004B0, "Member 'FSteamVRSkeletonTransform::Pinky_4' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Thumb) == 0x0004E0, "Member 'FSteamVRSkeletonTransform::Aux_Thumb' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Index) == 0x000510, "Member 'FSteamVRSkeletonTransform::Aux_Index' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Middle) == 0x000540, "Member 'FSteamVRSkeletonTransform::Aux_Middle' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Ring) == 0x000570, "Member 'FSteamVRSkeletonTransform::Aux_Ring' has a wrong offset!");
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Pinky) == 0x0005A0, "Member 'FSteamVRSkeletonTransform::Aux_Pinky' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// 0x0028 (0x0028 - 0x0000)
struct FUE4RetargettingRefs final
{
public:
	bool                                          bIsInitialized;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRightHanded;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1448[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                KnuckleAverageMS_UE4;                              // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WristSideDirectionLS_UE4;                          // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WristForwardLS_UE4;                                // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUE4RetargettingRefs) == 0x000004, "Wrong alignment on FUE4RetargettingRefs");
static_assert(sizeof(FUE4RetargettingRefs) == 0x000028, "Wrong size on FUE4RetargettingRefs");
static_assert(offsetof(FUE4RetargettingRefs, bIsInitialized) == 0x000000, "Member 'FUE4RetargettingRefs::bIsInitialized' has a wrong offset!");
static_assert(offsetof(FUE4RetargettingRefs, bIsRightHanded) == 0x000001, "Member 'FUE4RetargettingRefs::bIsRightHanded' has a wrong offset!");
static_assert(offsetof(FUE4RetargettingRefs, KnuckleAverageMS_UE4) == 0x000004, "Member 'FUE4RetargettingRefs::KnuckleAverageMS_UE4' has a wrong offset!");
static_assert(offsetof(FUE4RetargettingRefs, WristSideDirectionLS_UE4) == 0x000010, "Member 'FUE4RetargettingRefs::WristSideDirectionLS_UE4' has a wrong offset!");
static_assert(offsetof(FUE4RetargettingRefs, WristForwardLS_UE4) == 0x00001C, "Member 'FUE4RetargettingRefs::WristForwardLS_UE4' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// 0x0610 (0x0620 - 0x0010)
struct FAnimNode_SteamVRInputAnimPose final : public FAnimNode_Base
{
public:
	EMotionRange                                  MotionRange;                                       // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHand                                         Hand;                                              // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHandSkeleton                                 HandSkeleton;                                      // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Mirror;                                            // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1449[0xC];                                     // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamVRSkeletonTransform              SteamVRSkeletalTransform;                          // 0x0020(0x05D0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUE4RetargettingRefs                   UE4RetargettingRefs;                               // 0x05F0(0x0028)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_144A[0x8];                                     // 0x0618(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_SteamVRInputAnimPose) == 0x000010, "Wrong alignment on FAnimNode_SteamVRInputAnimPose");
static_assert(sizeof(FAnimNode_SteamVRInputAnimPose) == 0x000620, "Wrong size on FAnimNode_SteamVRInputAnimPose");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, MotionRange) == 0x000010, "Member 'FAnimNode_SteamVRInputAnimPose::MotionRange' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, Hand) == 0x000011, "Member 'FAnimNode_SteamVRInputAnimPose::Hand' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, HandSkeleton) == 0x000012, "Member 'FAnimNode_SteamVRInputAnimPose::HandSkeleton' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, Mirror) == 0x000013, "Member 'FAnimNode_SteamVRInputAnimPose::Mirror' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, SteamVRSkeletalTransform) == 0x000020, "Member 'FAnimNode_SteamVRInputAnimPose::SteamVRSkeletalTransform' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, UE4RetargettingRefs) == 0x0005F0, "Member 'FAnimNode_SteamVRInputAnimPose::UE4RetargettingRefs' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_SteamVRSetWristTransform final : public FAnimNode_Base
{
public:
	struct FPoseLink                              ReferencePose;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EHandSkeleton                                 HandSkeleton;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseLink                              TargetPose;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_144C[0x8];                                     // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_SteamVRSetWristTransform) == 0x000008, "Wrong alignment on FAnimNode_SteamVRSetWristTransform");
static_assert(sizeof(FAnimNode_SteamVRSetWristTransform) == 0x000040, "Wrong size on FAnimNode_SteamVRSetWristTransform");
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, ReferencePose) == 0x000010, "Member 'FAnimNode_SteamVRSetWristTransform::ReferencePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, HandSkeleton) == 0x000020, "Member 'FAnimNode_SteamVRSetWristTransform::HandSkeleton' has a wrong offset!");
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, TargetPose) == 0x000028, "Member 'FAnimNode_SteamVRSetWristTransform::TargetPose' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// 0x0020 (0x0020 - 0x0000)
struct FSteamVRInputBindingInfo final
{
public:
	class FName                                   DevicePathName;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InputPathName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ModeName;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotName;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamVRInputBindingInfo) == 0x000004, "Wrong alignment on FSteamVRInputBindingInfo");
static_assert(sizeof(FSteamVRInputBindingInfo) == 0x000020, "Wrong size on FSteamVRInputBindingInfo");
static_assert(offsetof(FSteamVRInputBindingInfo, DevicePathName) == 0x000000, "Member 'FSteamVRInputBindingInfo::DevicePathName' has a wrong offset!");
static_assert(offsetof(FSteamVRInputBindingInfo, InputPathName) == 0x000008, "Member 'FSteamVRInputBindingInfo::InputPathName' has a wrong offset!");
static_assert(offsetof(FSteamVRInputBindingInfo, ModeName) == 0x000010, "Member 'FSteamVRInputBindingInfo::ModeName' has a wrong offset!");
static_assert(offsetof(FSteamVRInputBindingInfo, SlotName) == 0x000018, "Member 'FSteamVRInputBindingInfo::SlotName' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// 0x0028 (0x0028 - 0x0000)
struct FSteamVRInputOriginInfo final
{
public:
	int32                                         TrackedDeviceIndex;                                // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 RenderModelComponentName;                          // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TrackedDeviceModel;                                // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamVRInputOriginInfo) == 0x000008, "Wrong alignment on FSteamVRInputOriginInfo");
static_assert(sizeof(FSteamVRInputOriginInfo) == 0x000028, "Wrong size on FSteamVRInputOriginInfo");
static_assert(offsetof(FSteamVRInputOriginInfo, TrackedDeviceIndex) == 0x000000, "Member 'FSteamVRInputOriginInfo::TrackedDeviceIndex' has a wrong offset!");
static_assert(offsetof(FSteamVRInputOriginInfo, RenderModelComponentName) == 0x000008, "Member 'FSteamVRInputOriginInfo::RenderModelComponentName' has a wrong offset!");
static_assert(offsetof(FSteamVRInputOriginInfo, TrackedDeviceModel) == 0x000018, "Member 'FSteamVRInputOriginInfo::TrackedDeviceModel' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// 0x0018 (0x0018 - 0x0000)
struct FSteamVRActionSet final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144E[0x8];                                     // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSteamVRActionSet) == 0x000008, "Wrong alignment on FSteamVRActionSet");
static_assert(sizeof(FSteamVRActionSet) == 0x000018, "Wrong size on FSteamVRActionSet");
static_assert(offsetof(FSteamVRActionSet, Path) == 0x000000, "Member 'FSteamVRActionSet::Path' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRAction
// 0x0028 (0x0028 - 0x0000)
struct FSteamVRAction final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144F[0x10];                                    // 0x0018(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSteamVRAction) == 0x000008, "Wrong alignment on FSteamVRAction");
static_assert(sizeof(FSteamVRAction) == 0x000028, "Wrong size on FSteamVRAction");
static_assert(offsetof(FSteamVRAction, Name) == 0x000000, "Member 'FSteamVRAction::Name' has a wrong offset!");
static_assert(offsetof(FSteamVRAction, Path) == 0x000008, "Member 'FSteamVRAction::Path' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// 0x0010 (0x0010 - 0x0000)
struct FSteamVRFingerSplays final
{
public:
	float                                         Thumb_Index;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Index_Middle;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Middle_Ring;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ring_Pinky;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamVRFingerSplays) == 0x000004, "Wrong alignment on FSteamVRFingerSplays");
static_assert(sizeof(FSteamVRFingerSplays) == 0x000010, "Wrong size on FSteamVRFingerSplays");
static_assert(offsetof(FSteamVRFingerSplays, Thumb_Index) == 0x000000, "Member 'FSteamVRFingerSplays::Thumb_Index' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerSplays, Index_Middle) == 0x000004, "Member 'FSteamVRFingerSplays::Index_Middle' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerSplays, Middle_Ring) == 0x000008, "Member 'FSteamVRFingerSplays::Middle_Ring' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerSplays, Ring_Pinky) == 0x00000C, "Member 'FSteamVRFingerSplays::Ring_Pinky' has a wrong offset!");

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// 0x0014 (0x0014 - 0x0000)
struct FSteamVRFingerCurls final
{
public:
	float                                         Thumb;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Index;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Middle;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ring;                                              // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Pinky;                                             // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamVRFingerCurls) == 0x000004, "Wrong alignment on FSteamVRFingerCurls");
static_assert(sizeof(FSteamVRFingerCurls) == 0x000014, "Wrong size on FSteamVRFingerCurls");
static_assert(offsetof(FSteamVRFingerCurls, Thumb) == 0x000000, "Member 'FSteamVRFingerCurls::Thumb' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerCurls, Index) == 0x000004, "Member 'FSteamVRFingerCurls::Index' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerCurls, Middle) == 0x000008, "Member 'FSteamVRFingerCurls::Middle' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerCurls, Ring) == 0x00000C, "Member 'FSteamVRFingerCurls::Ring' has a wrong offset!");
static_assert(offsetof(FSteamVRFingerCurls, Pinky) == 0x000010, "Member 'FSteamVRFingerCurls::Pinky' has a wrong offset!");

}
