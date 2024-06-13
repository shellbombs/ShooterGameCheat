#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeap

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_classes.hpp"
#include "MagicLeap_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapRaycastFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapRaycastFunctionLibrary">();
	}
	static class UMagicLeapRaycastFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapRaycastFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapRaycastFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapRaycastFunctionLibrary");
static_assert(sizeof(UMagicLeapRaycastFunctionLibrary) == 0x000028, "Wrong size on UMagicLeapRaycastFunctionLibrary");

// Class MagicLeap.InAppPurchaseComponent
// 0x0078 (0x0128 - 0x00B0)
class UInAppPurchaseComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             InAppPurchaseLogMessage;                           // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetItemsDetailsSuccess;                            // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetItemsDetailsFailure;                            // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PurchaseConfirmationSuccess;                       // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PurchaseConfirmationFailure;                       // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetPurchaseHistorySuccess;                         // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetPurchaseHistoryFailure;                         // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_11FA[0x8];                                     // 0x0120(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetItemsDetailsFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(const TArray<struct FPurchaseItemDetails>& ItemsDetails);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetPurchaseHistorySuccess__DelegateSignature(const TArray<struct FPurchaseConfirmation>& PurchaseHistory);
	void InAppPurchaseLogMessage__DelegateSignature(const class FString& LogMessage);
	void PurchaseConfirmationFailure__DelegateSignature();
	void PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations);
	bool TryGetItemsDetailsAsync(const TArray<class FString>& ItemIDs);
	bool TryGetPurchaseHistoryAsync(int32 InNumPages);
	bool TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InAppPurchaseComponent">();
	}
	static class UInAppPurchaseComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInAppPurchaseComponent>();
	}
};
static_assert(alignof(UInAppPurchaseComponent) == 0x000008, "Wrong alignment on UInAppPurchaseComponent");
static_assert(sizeof(UInAppPurchaseComponent) == 0x000128, "Wrong size on UInAppPurchaseComponent");
static_assert(offsetof(UInAppPurchaseComponent, InAppPurchaseLogMessage) == 0x0000B0, "Member 'UInAppPurchaseComponent::InAppPurchaseLogMessage' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, GetItemsDetailsSuccess) == 0x0000C0, "Member 'UInAppPurchaseComponent::GetItemsDetailsSuccess' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, GetItemsDetailsFailure) == 0x0000D0, "Member 'UInAppPurchaseComponent::GetItemsDetailsFailure' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, PurchaseConfirmationSuccess) == 0x0000E0, "Member 'UInAppPurchaseComponent::PurchaseConfirmationSuccess' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, PurchaseConfirmationFailure) == 0x0000F0, "Member 'UInAppPurchaseComponent::PurchaseConfirmationFailure' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, GetPurchaseHistorySuccess) == 0x000100, "Member 'UInAppPurchaseComponent::GetPurchaseHistorySuccess' has a wrong offset!");
static_assert(offsetof(UInAppPurchaseComponent, GetPurchaseHistoryFailure) == 0x000110, "Member 'UInAppPurchaseComponent::GetPurchaseHistoryFailure' has a wrong offset!");

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000 (0x0028 - 0x0028)
class IMagicLeapMeshBlockSelectorInterface final : public IInterface
{
public:
	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapMeshBlockSelectorInterface">();
	}
	static class IMagicLeapMeshBlockSelectorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMagicLeapMeshBlockSelectorInterface>();
	}
};
static_assert(alignof(IMagicLeapMeshBlockSelectorInterface) == 0x000008, "Wrong alignment on IMagicLeapMeshBlockSelectorInterface");
static_assert(sizeof(IMagicLeapMeshBlockSelectorInterface) == 0x000028, "Wrong size on IMagicLeapMeshBlockSelectorInterface");

// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0050 (0x0190 - 0x0140)
class ULuminApplicationLifecycleComponent final : public UApplicationLifecycleComponent
{
public:
	FMulticastInlineDelegateProperty_             DeviceHasReactivatedDelegate;                      // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             DeviceWillEnterRealityModeDelegate;                // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             DeviceWillGoInStandbyDelegate;                     // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             FocusLostDelegate;                                 // 0x0170(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             FocusGainedDelegate;                               // 0x0180(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuminApplicationLifecycleComponent">();
	}
	static class ULuminApplicationLifecycleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuminApplicationLifecycleComponent>();
	}
};
static_assert(alignof(ULuminApplicationLifecycleComponent) == 0x000008, "Wrong alignment on ULuminApplicationLifecycleComponent");
static_assert(sizeof(ULuminApplicationLifecycleComponent) == 0x000190, "Wrong size on ULuminApplicationLifecycleComponent");
static_assert(offsetof(ULuminApplicationLifecycleComponent, DeviceHasReactivatedDelegate) == 0x000140, "Member 'ULuminApplicationLifecycleComponent::DeviceHasReactivatedDelegate' has a wrong offset!");
static_assert(offsetof(ULuminApplicationLifecycleComponent, DeviceWillEnterRealityModeDelegate) == 0x000150, "Member 'ULuminApplicationLifecycleComponent::DeviceWillEnterRealityModeDelegate' has a wrong offset!");
static_assert(offsetof(ULuminApplicationLifecycleComponent, DeviceWillGoInStandbyDelegate) == 0x000160, "Member 'ULuminApplicationLifecycleComponent::DeviceWillGoInStandbyDelegate' has a wrong offset!");
static_assert(offsetof(ULuminApplicationLifecycleComponent, FocusLostDelegate) == 0x000170, "Member 'ULuminApplicationLifecycleComponent::FocusLostDelegate' has a wrong offset!");
static_assert(offsetof(ULuminApplicationLifecycleComponent, FocusGainedDelegate) == 0x000180, "Member 'ULuminApplicationLifecycleComponent::FocusGainedDelegate' has a wrong offset!");

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0090 (0x01D0 - 0x0140)
class UMagicLeapHeadTrackingNotificationsComponent final : public UVRNotificationsComponent
{
public:
	FMulticastInlineDelegateProperty_             OnHeadTrackingLost;                                // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             OnHeadTrackingRecovered;                           // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             OnHeadTrackingRecoveryFailed;                      // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             OnHeadTrackingNewSessionStarted;                   // 0x0170(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11FE[0x50];                                    // 0x0180(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapHeadTrackingNotificationsComponent">();
	}
	static class UMagicLeapHeadTrackingNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapHeadTrackingNotificationsComponent>();
	}
};
static_assert(alignof(UMagicLeapHeadTrackingNotificationsComponent) == 0x000008, "Wrong alignment on UMagicLeapHeadTrackingNotificationsComponent");
static_assert(sizeof(UMagicLeapHeadTrackingNotificationsComponent) == 0x0001D0, "Wrong size on UMagicLeapHeadTrackingNotificationsComponent");
static_assert(offsetof(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingLost) == 0x000140, "Member 'UMagicLeapHeadTrackingNotificationsComponent::OnHeadTrackingLost' has a wrong offset!");
static_assert(offsetof(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingRecovered) == 0x000150, "Member 'UMagicLeapHeadTrackingNotificationsComponent::OnHeadTrackingRecovered' has a wrong offset!");
static_assert(offsetof(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingRecoveryFailed) == 0x000160, "Member 'UMagicLeapHeadTrackingNotificationsComponent::OnHeadTrackingRecoveryFailed' has a wrong offset!");
static_assert(offsetof(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingNewSessionStarted) == 0x000170, "Member 'UMagicLeapHeadTrackingNotificationsComponent::OnHeadTrackingNewSessionStarted' has a wrong offset!");

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHMDFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo);
	static bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>* MapEvents);
	static bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State);
	static int32 GetMinimumAPILevel();
	static class FString GetMLSDKVersion();
	static int32 GetMLSDKVersionMajor();
	static int32 GetMLSDKVersionMinor();
	static int32 GetMLSDKVersionRevision();
	static int32 GetPlatformAPILevel();
	static bool IsRunningOnMagicLeapHMD();
	static bool SetAppReady();
	static void SetBaseOrientation(const struct FQuat& InBaseOrientation);
	static void SetBasePosition(const struct FVector& InBasePosition);
	static void SetBaseRotation(const struct FRotator& InBaseRotation);
	static void SetFocusActor(const class AActor* InFocusActor, bool bSetStabilizationActor);
	static void SetStabilizationDepthActor(const class AActor* InStabilizationDepthActor, bool bSetFocusActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapHMDFunctionLibrary">();
	}
	static class UMagicLeapHMDFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapHMDFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapHMDFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapHMDFunctionLibrary");
static_assert(sizeof(UMagicLeapHMDFunctionLibrary) == 0x000028, "Wrong size on UMagicLeapHMDFunctionLibrary");

// Class MagicLeap.MagicLeapMeshTrackerComponent
// 0x0090 (0x0290 - 0x0200)
class UMagicLeapMeshTrackerComponent final : public USceneComponent
{
public:
	uint8                                         Pad_1204[0x8];                                     // 0x01F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMeshTrackerUpdated;                              // 0x0200(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          ScanWorld;                                         // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshType                            MeshType;                                          // 0x0211(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1205[0x6];                                     // 0x0212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          BoundingVolume;                                    // 0x0218(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshLOD                             LevelOfDetail;                                     // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1206[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PerimeterOfGapsToFill;                             // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Planarize;                                         // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1207[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DisconnectedSectionArea;                           // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestNormals;                                    // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestVertexConfidence;                           // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshVertexColorMode                 VertexColorMode;                                   // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1208[0x5];                                     // 0x0233(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FColor>                         BlockVertexColors;                                 // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceZero;                     // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceOne;                      // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RemoveOverlappingTriangles;                        // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1209[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMRMeshComponent*                       MRMesh;                                            // 0x0270(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BricksPerFrame;                                    // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_120A[0x14];                                    // 0x027C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConnectBlockSelector(TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	int32 GetNumQueuedBlockUpdates();
	void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<float>& Confidence);
	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapMeshTrackerComponent">();
	}
	static class UMagicLeapMeshTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapMeshTrackerComponent>();
	}
};
static_assert(alignof(UMagicLeapMeshTrackerComponent) == 0x000010, "Wrong alignment on UMagicLeapMeshTrackerComponent");
static_assert(sizeof(UMagicLeapMeshTrackerComponent) == 0x000290, "Wrong size on UMagicLeapMeshTrackerComponent");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, OnMeshTrackerUpdated) == 0x000200, "Member 'UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, ScanWorld) == 0x000210, "Member 'UMagicLeapMeshTrackerComponent::ScanWorld' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MeshType) == 0x000211, "Member 'UMagicLeapMeshTrackerComponent::MeshType' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BoundingVolume) == 0x000218, "Member 'UMagicLeapMeshTrackerComponent::BoundingVolume' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, LevelOfDetail) == 0x000220, "Member 'UMagicLeapMeshTrackerComponent::LevelOfDetail' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, PerimeterOfGapsToFill) == 0x000224, "Member 'UMagicLeapMeshTrackerComponent::PerimeterOfGapsToFill' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, Planarize) == 0x000228, "Member 'UMagicLeapMeshTrackerComponent::Planarize' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, DisconnectedSectionArea) == 0x00022C, "Member 'UMagicLeapMeshTrackerComponent::DisconnectedSectionArea' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, RequestNormals) == 0x000230, "Member 'UMagicLeapMeshTrackerComponent::RequestNormals' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, RequestVertexConfidence) == 0x000231, "Member 'UMagicLeapMeshTrackerComponent::RequestVertexConfidence' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorMode) == 0x000232, "Member 'UMagicLeapMeshTrackerComponent::VertexColorMode' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BlockVertexColors) == 0x000238, "Member 'UMagicLeapMeshTrackerComponent::BlockVertexColors' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x000248, "Member 'UMagicLeapMeshTrackerComponent::VertexColorFromConfidenceZero' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x000258, "Member 'UMagicLeapMeshTrackerComponent::VertexColorFromConfidenceOne' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, RemoveOverlappingTriangles) == 0x000268, "Member 'UMagicLeapMeshTrackerComponent::RemoveOverlappingTriangles' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MRMesh) == 0x000270, "Member 'UMagicLeapMeshTrackerComponent::MRMesh' has a wrong offset!");
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BricksPerFrame) == 0x000278, "Member 'UMagicLeapMeshTrackerComponent::BricksPerFrame' has a wrong offset!");

// Class MagicLeap.MagicLeapSettings
// 0x0008 (0x0030 - 0x0028)
class UMagicLeapSettings final : public UObject
{
public:
	bool                                          bEnableZI;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseVulkanForZI;                                   // 0x0029(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseMLAudioForZI;                                  // 0x002A(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_120B[0x5];                                     // 0x002B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSettings">();
	}
	static class UMagicLeapSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapSettings>();
	}
};
static_assert(alignof(UMagicLeapSettings) == 0x000008, "Wrong alignment on UMagicLeapSettings");
static_assert(sizeof(UMagicLeapSettings) == 0x000030, "Wrong size on UMagicLeapSettings");
static_assert(offsetof(UMagicLeapSettings, bEnableZI) == 0x000028, "Member 'UMagicLeapSettings::bEnableZI' has a wrong offset!");
static_assert(offsetof(UMagicLeapSettings, bUseVulkanForZI) == 0x000029, "Member 'UMagicLeapSettings::bUseVulkanForZI' has a wrong offset!");
static_assert(offsetof(UMagicLeapSettings, bUseMLAudioForZI) == 0x00002A, "Member 'UMagicLeapSettings::bUseMLAudioForZI' has a wrong offset!");

// Class MagicLeap.MagicLeapRaycastComponent
// 0x0068 (0x0118 - 0x00B0)
class UMagicLeapRaycastComponent final : public UActorComponent
{
public:
	uint8                                         Pad_120C[0x68];                                    // 0x00B0(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult);
	bool RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const TDelegate<void(const struct FMagicLeapRaycastHitResult& HitResult)>& ResultDelegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapRaycastComponent">();
	}
	static class UMagicLeapRaycastComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapRaycastComponent>();
	}
};
static_assert(alignof(UMagicLeapRaycastComponent) == 0x000008, "Wrong alignment on UMagicLeapRaycastComponent");
static_assert(sizeof(UMagicLeapRaycastComponent) == 0x000118, "Wrong size on UMagicLeapRaycastComponent");

}
