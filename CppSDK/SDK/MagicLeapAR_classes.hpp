#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapAR

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "MagicLeapAR_structs.hpp"
#include "AugmentedReality_classes.hpp"
#include "MagicLeapImageTracker_structs.hpp"
#include "MagicLeapPlanes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARSessionFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARSessionFunctionLibrary">();
	}
	static class ULuminARSessionFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARSessionFunctionLibrary>();
	}
};
static_assert(alignof(ULuminARSessionFunctionLibrary) == 0x000008, "Wrong alignment on ULuminARSessionFunctionLibrary");
static_assert(sizeof(ULuminARSessionFunctionLibrary) == 0x000028, "Wrong size on ULuminARSessionFunctionLibrary");

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARFrameFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static ELuminARTrackingState GetTrackingState();
	static bool LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, const TSet<ELuminARLineTraceChannel>& TraceChannels, TArray<struct FARTraceResult>* OutHitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARFrameFunctionLibrary">();
	}
	static class ULuminARFrameFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARFrameFunctionLibrary>();
	}
};
static_assert(alignof(ULuminARFrameFunctionLibrary) == 0x000008, "Wrong alignment on ULuminARFrameFunctionLibrary");
static_assert(sizeof(ULuminARFrameFunctionLibrary) == 0x000028, "Wrong size on ULuminARFrameFunctionLibrary");

// Class MagicLeapAR.LuminARLightEstimate
// 0x0010 (0x0050 - 0x0040)
class ULuminARLightEstimate final : public UARBasicLightEstimate
{
public:
	TArray<float>                                 AmbientIntensityNits;                              // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	TArray<float> GetAmbientIntensityNits() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARLightEstimate">();
	}
	static class ULuminARLightEstimate* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARLightEstimate>();
	}
};
static_assert(alignof(ULuminARLightEstimate) == 0x000008, "Wrong alignment on ULuminARLightEstimate");
static_assert(sizeof(ULuminARLightEstimate) == 0x000050, "Wrong size on ULuminARLightEstimate");
static_assert(offsetof(ULuminARLightEstimate, AmbientIntensityNits) == 0x000040, "Member 'ULuminARLightEstimate::AmbientIntensityNits' has a wrong offset!");

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARImageTrackingFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
	static class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARImageTrackingFunctionLibrary">();
	}
	static class ULuminARImageTrackingFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARImageTrackingFunctionLibrary>();
	}
};
static_assert(alignof(ULuminARImageTrackingFunctionLibrary) == 0x000008, "Wrong alignment on ULuminARImageTrackingFunctionLibrary");
static_assert(sizeof(ULuminARImageTrackingFunctionLibrary) == 0x000028, "Wrong size on ULuminARImageTrackingFunctionLibrary");

// Class MagicLeapAR.LuminAROrigin
// 0x00C0 (0x02E0 - 0x0220)
class ALuminAROrigin final : public AAROriginActor
{
public:
	class UMRMeshComponent*                       MRMeshComponent;                                   // 0x0220(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                     PlaneSurfaceMaterial;                              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                     WireframeMaterial;                                 // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_124C[0xA8];                                    // 0x0238(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminAROrigin">();
	}
	static class ALuminAROrigin* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALuminAROrigin>();
	}
};
static_assert(alignof(ALuminAROrigin) == 0x000008, "Wrong alignment on ALuminAROrigin");
static_assert(sizeof(ALuminAROrigin) == 0x0002E0, "Wrong size on ALuminAROrigin");
static_assert(offsetof(ALuminAROrigin, MRMeshComponent) == 0x000220, "Member 'ALuminAROrigin::MRMeshComponent' has a wrong offset!");
static_assert(offsetof(ALuminAROrigin, PlaneSurfaceMaterial) == 0x000228, "Member 'ALuminAROrigin::PlaneSurfaceMaterial' has a wrong offset!");
static_assert(offsetof(ALuminAROrigin, WireframeMaterial) == 0x000230, "Member 'ALuminAROrigin::WireframeMaterial' has a wrong offset!");

// Class MagicLeapAR.LuminARSessionConfig
// 0x0090 (0x01A0 - 0x0110)
class ULuminARSessionConfig final : public UARSessionConfig
{
public:
	struct FMagicLeapPlanesQuery                  PlanesQuery;                                       // 0x0110(0x0060)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         MaxPlaneQueryResults;                              // 0x0170(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinPlaneArea;                                      // 0x0174(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bArbitraryOrientationPlaneDetection;               // 0x0178(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124D[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PlaneSearchExtents;                                // 0x017C(0x000C)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>             PlaneQueryFlags;                                   // 0x0188(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	bool                                          bDiscardZeroExtentPlanes;                          // 0x0198(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDefaultUseUnreliablePose;                         // 0x0199(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124E[0x6];                                     // 0x019A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARSessionConfig">();
	}
	static class ULuminARSessionConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARSessionConfig>();
	}
};
static_assert(alignof(ULuminARSessionConfig) == 0x000010, "Wrong alignment on ULuminARSessionConfig");
static_assert(sizeof(ULuminARSessionConfig) == 0x0001A0, "Wrong size on ULuminARSessionConfig");
static_assert(offsetof(ULuminARSessionConfig, PlanesQuery) == 0x000110, "Member 'ULuminARSessionConfig::PlanesQuery' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, MaxPlaneQueryResults) == 0x000170, "Member 'ULuminARSessionConfig::MaxPlaneQueryResults' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, MinPlaneArea) == 0x000174, "Member 'ULuminARSessionConfig::MinPlaneArea' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, bArbitraryOrientationPlaneDetection) == 0x000178, "Member 'ULuminARSessionConfig::bArbitraryOrientationPlaneDetection' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, PlaneSearchExtents) == 0x00017C, "Member 'ULuminARSessionConfig::PlaneSearchExtents' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, PlaneQueryFlags) == 0x000188, "Member 'ULuminARSessionConfig::PlaneQueryFlags' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, bDiscardZeroExtentPlanes) == 0x000198, "Member 'ULuminARSessionConfig::bDiscardZeroExtentPlanes' has a wrong offset!");
static_assert(offsetof(ULuminARSessionConfig, bDefaultUseUnreliablePose) == 0x000199, "Member 'ULuminARSessionConfig::bDefaultUseUnreliablePose' has a wrong offset!");

// Class MagicLeapAR.LuminARCandidateImage
// 0x0008 (0x0060 - 0x0058)
class ULuminARCandidateImage final : public UARCandidateImage
{
public:
	bool                                          bUseUnreliablePose;                                // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bImageIsStationary;                                // 0x0059(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMagicLeapImageTargetOrientation              AxisOrientation;                                   // 0x005A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_124F[0x5];                                     // 0x005B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	EMagicLeapImageTargetOrientation GetAxisOrientation() const;
	bool GetImageIsStationary() const;
	bool GetUseUnreliablePose() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminARCandidateImage">();
	}
	static class ULuminARCandidateImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminARCandidateImage>();
	}
};
static_assert(alignof(ULuminARCandidateImage) == 0x000008, "Wrong alignment on ULuminARCandidateImage");
static_assert(sizeof(ULuminARCandidateImage) == 0x000060, "Wrong size on ULuminARCandidateImage");
static_assert(offsetof(ULuminARCandidateImage, bUseUnreliablePose) == 0x000058, "Member 'ULuminARCandidateImage::bUseUnreliablePose' has a wrong offset!");
static_assert(offsetof(ULuminARCandidateImage, bImageIsStationary) == 0x000059, "Member 'ULuminARCandidateImage::bImageIsStationary' has a wrong offset!");
static_assert(offsetof(ULuminARCandidateImage, AxisOrientation) == 0x00005A, "Member 'ULuminARCandidateImage::AxisOrientation' has a wrong offset!");

}

