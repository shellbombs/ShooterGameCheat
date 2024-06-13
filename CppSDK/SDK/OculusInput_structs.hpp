#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OculusInput

#include "Basic.hpp"


namespace SDK
{

// Enum OculusInput.ESystemGestureBehavior
// NumValues: 0x0003
enum class ESystemGestureBehavior : uint8
{
	None                                     = 0,
	SwapMaterial                             = 1,
	ESystemGestureBehavior_MAX               = 2,
};

// Enum OculusInput.EConfidenceBehavior
// NumValues: 0x0003
enum class EConfidenceBehavior : uint8
{
	None                                     = 0,
	HideActor                                = 1,
	EConfidenceBehavior_MAX                  = 2,
};

// Enum OculusInput.EBone
// NumValues: 0x001E
enum class EBone : uint8
{
	Wrist_Root                               = 0,
	Hand_Start                               = 0,
	Forearm_Stub                             = 1,
	Thumb_0                                  = 2,
	Thumb_1                                  = 3,
	Thumb_2                                  = 4,
	Thumb_3                                  = 5,
	Index_1                                  = 6,
	Index_2                                  = 7,
	Index_3                                  = 8,
	Middle_1                                 = 9,
	Middle_2                                 = 10,
	Middle_3                                 = 11,
	Ring_1                                   = 12,
	Ring_2                                   = 13,
	Ring_3                                   = 14,
	Pinky_0                                  = 15,
	Pinky_1                                  = 16,
	Pinky_2                                  = 17,
	Pinky_3                                  = 18,
	Thumb_Tip                                = 19,
	Max_Skinnable                            = 19,
	Index_Tip                                = 20,
	Middle_Tip                               = 21,
	Ring_Tip                                 = 22,
	Pinky_Tip                                = 23,
	Hand_End                                 = 24,
	Bone_Max                                 = 24,
	Invalid                                  = 25,
	EBone_MAX                                = 26,
};

// Enum OculusInput.ETrackingConfidence
// NumValues: 0x0003
enum class ETrackingConfidence : uint8
{
	Low                                      = 0,
	High                                     = 1,
	ETrackingConfidence_MAX                  = 2,
};

// Enum OculusInput.EOculusHandType
// NumValues: 0x0004
enum class EOculusHandType : uint8
{
	None                                     = 0,
	HandLeft                                 = 1,
	HandRight                                = 2,
	EOculusHandType_MAX                      = 3,
};

// ScriptStruct OculusInput.OculusCapsuleCollider
// 0x0010 (0x0010 - 0x0000)
struct FOculusCapsuleCollider final
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0000(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBone                                         BoneId;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13C5[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOculusCapsuleCollider) == 0x000008, "Wrong alignment on FOculusCapsuleCollider");
static_assert(sizeof(FOculusCapsuleCollider) == 0x000010, "Wrong size on FOculusCapsuleCollider");
static_assert(offsetof(FOculusCapsuleCollider, Capsule) == 0x000000, "Member 'FOculusCapsuleCollider::Capsule' has a wrong offset!");
static_assert(offsetof(FOculusCapsuleCollider, BoneId) == 0x000008, "Member 'FOculusCapsuleCollider::BoneId' has a wrong offset!");

}

