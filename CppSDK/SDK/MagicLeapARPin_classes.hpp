#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapARPin

#include "Basic.hpp"

#include "MagicLeapARPin_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x01B0 (0x03B0 - 0x0200)
class UMagicLeapARPinComponent final : public USceneComponent
{
public:
	class FString                                 ObjectUID;                                         // 0x01F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UserIndex;                                         // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapAutoPinType                         AutoPinType;                                       // 0x020C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldPinActor;                                   // 0x020D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11D2[0x2];                                     // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UMagicLeapARPinSaveGame>    PinDataClass;                                      // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<EMagicLeapARPinType>                     SearchPinTypes;                                    // 0x0218(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USphereComponent*                       SearchVolume;                                      // 0x0268(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinned;                          // 0x0270(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinLost;                         // 0x0280(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPinDataLoadAttemptCompleted;                     // 0x0290(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                  PinnedCFUID;                                       // 0x02A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        PinnedSceneComponent;                              // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                PinData;                                           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11D3[0xF0];                                    // 0x02C0(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AttemptPinDataRestoration();
	void AttemptPinDataRestorationAsync();
	class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> Param_PinDataClass);
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
	void PersistentEntityPinLost__DelegateSignature();
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	bool PinActor(class AActor* ActorToPin);
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	void PinToBestFit();
	bool PinToID(const struct FGuid& PinId);
	bool PinToRestoredOrSyncedID();
	class UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> InPinDataClass, bool* OutPinDataValid);
	void UnPin();

	bool GetPinnedPinID(struct FGuid* PinId) const;
	bool GetPinState(struct FMagicLeapARPinState* State) const;
	bool IsPinned() const;
	bool PinRestoredOrSynced() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinComponent">();
	}
	static class UMagicLeapARPinComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinComponent>();
	}
};
static_assert(alignof(UMagicLeapARPinComponent) == 0x000010, "Wrong alignment on UMagicLeapARPinComponent");
static_assert(sizeof(UMagicLeapARPinComponent) == 0x0003B0, "Wrong size on UMagicLeapARPinComponent");
static_assert(offsetof(UMagicLeapARPinComponent, ObjectUID) == 0x0001F8, "Member 'UMagicLeapARPinComponent::ObjectUID' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, UserIndex) == 0x000208, "Member 'UMagicLeapARPinComponent::UserIndex' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, AutoPinType) == 0x00020C, "Member 'UMagicLeapARPinComponent::AutoPinType' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, bShouldPinActor) == 0x00020D, "Member 'UMagicLeapARPinComponent::bShouldPinActor' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, PinDataClass) == 0x000210, "Member 'UMagicLeapARPinComponent::PinDataClass' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, SearchPinTypes) == 0x000218, "Member 'UMagicLeapARPinComponent::SearchPinTypes' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, SearchVolume) == 0x000268, "Member 'UMagicLeapARPinComponent::SearchVolume' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, OnPersistentEntityPinned) == 0x000270, "Member 'UMagicLeapARPinComponent::OnPersistentEntityPinned' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, OnPersistentEntityPinLost) == 0x000280, "Member 'UMagicLeapARPinComponent::OnPersistentEntityPinLost' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, OnPinDataLoadAttemptCompleted) == 0x000290, "Member 'UMagicLeapARPinComponent::OnPinDataLoadAttemptCompleted' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, PinnedCFUID) == 0x0002A0, "Member 'UMagicLeapARPinComponent::PinnedCFUID' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, PinnedSceneComponent) == 0x0002B0, "Member 'UMagicLeapARPinComponent::PinnedSceneComponent' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinComponent, PinData) == 0x0002B8, "Member 'UMagicLeapARPinComponent::PinData' has a wrong offset!");

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString ARPinIdToString(const struct FGuid& ARPinId);
	static void BindToOnMagicLeapARPinUpdatedDelegate(const TDelegate<void(TArray<struct FGuid>& Added, TArray<struct FGuid>& Updated, TArray<struct FGuid>& Deleted)>& Delegate);
	static void BindToOnMagicLeapContentBindingFoundDelegate(const TDelegate<void(struct FGuid& PinId, TSet<class FString>& PinnedObjectIds)>& Delegate);
	static EMagicLeapPassableWorldError CreateTracker();
	static EMagicLeapPassableWorldError DestroyTracker();
	static bool GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static bool GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static EMagicLeapPassableWorldError GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State);
	static class FString GetARPinStateToString(const struct FMagicLeapARPinState& State);
	static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins);
	static EMagicLeapPassableWorldError GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId);
	static int32 GetContentBindingSaveGameUserIndex();
	static EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter);
	static EMagicLeapPassableWorldError GetNumAvailableARPins(int32* Count);
	static bool IsTrackerValid();
	static bool ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId);
	static EMagicLeapPassableWorldError QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins);
	static void SetContentBindingSaveGameUserIndex(int32 UserIndex);
	static EMagicLeapPassableWorldError SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter);
	static void UnBindToOnMagicLeapARPinUpdatedDelegate(const TDelegate<void(TArray<struct FGuid>& Added, TArray<struct FGuid>& Updated, TArray<struct FGuid>& Deleted)>& Delegate);
	static void UnBindToOnMagicLeapContentBindingFoundDelegate(const TDelegate<void(struct FGuid& PinId, TSet<class FString>& PinnedObjectIds)>& Delegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinFunctionLibrary">();
	}
	static class UMagicLeapARPinFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapARPinFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapARPinFunctionLibrary");
static_assert(sizeof(UMagicLeapARPinFunctionLibrary) == 0x000028, "Wrong size on UMagicLeapARPinFunctionLibrary");

// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// 0x0018 (0x0238 - 0x0220)
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
	struct FGuid                                  PinId;                                             // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisibilityOverride;                               // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E6[0x7];                                     // 0x0231(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnUpdateARPinState();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinInfoActorBase">();
	}
	static class AMagicLeapARPinInfoActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapARPinInfoActorBase>();
	}
};
static_assert(alignof(AMagicLeapARPinInfoActorBase) == 0x000008, "Wrong alignment on AMagicLeapARPinInfoActorBase");
static_assert(sizeof(AMagicLeapARPinInfoActorBase) == 0x000238, "Wrong size on AMagicLeapARPinInfoActorBase");
static_assert(offsetof(AMagicLeapARPinInfoActorBase, PinId) == 0x000220, "Member 'AMagicLeapARPinInfoActorBase::PinId' has a wrong offset!");
static_assert(offsetof(AMagicLeapARPinInfoActorBase, bVisibilityOverride) == 0x000230, "Member 'AMagicLeapARPinInfoActorBase::bVisibilityOverride' has a wrong offset!");

// Class MagicLeapARPin.MagicLeapARPinRenderer
// 0x0068 (0x0288 - 0x0220)
class AMagicLeapARPinRenderer final : public AActor
{
public:
	bool                                          bInfoActorsVisibilityOverride;                     // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E7[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;                                     // 0x0228(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_11E8[0x8];                                     // 0x0278(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AMagicLeapARPinInfoActorBase> ClassToSpawn;                                      // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetVisibilityOverride(const bool InVisibilityOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinRenderer">();
	}
	static class AMagicLeapARPinRenderer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapARPinRenderer>();
	}
};
static_assert(alignof(AMagicLeapARPinRenderer) == 0x000008, "Wrong alignment on AMagicLeapARPinRenderer");
static_assert(sizeof(AMagicLeapARPinRenderer) == 0x000288, "Wrong size on AMagicLeapARPinRenderer");
static_assert(offsetof(AMagicLeapARPinRenderer, bInfoActorsVisibilityOverride) == 0x000220, "Member 'AMagicLeapARPinRenderer::bInfoActorsVisibilityOverride' has a wrong offset!");
static_assert(offsetof(AMagicLeapARPinRenderer, AllInfoActors) == 0x000228, "Member 'AMagicLeapARPinRenderer::AllInfoActors' has a wrong offset!");
static_assert(offsetof(AMagicLeapARPinRenderer, ClassToSpawn) == 0x000280, "Member 'AMagicLeapARPinRenderer::ClassToSpawn' has a wrong offset!");

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (0x0040 - 0x0028)
class UMagicLeapARPinSettings final : public UObject
{
public:
	float                                         UpdateCheckFrequency;                              // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                   OnUpdatedEventTriggerDelta;                        // 0x002C(0x0014)(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSettings">();
	}
	static class UMagicLeapARPinSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSettings>();
	}
};
static_assert(alignof(UMagicLeapARPinSettings) == 0x000008, "Wrong alignment on UMagicLeapARPinSettings");
static_assert(sizeof(UMagicLeapARPinSettings) == 0x000040, "Wrong size on UMagicLeapARPinSettings");
static_assert(offsetof(UMagicLeapARPinSettings, UpdateCheckFrequency) == 0x000028, "Member 'UMagicLeapARPinSettings::UpdateCheckFrequency' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta) == 0x00002C, "Member 'UMagicLeapARPinSettings::OnUpdatedEventTriggerDelta' has a wrong offset!");

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0088 (0x00B0 - 0x0028)
class UMagicLeapARPinSaveGame final : public USaveGame
{
public:
	struct FGuid                                  PinnedID;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E9[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ComponentWorldTransform;                           // 0x0040(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             PinTransform;                                      // 0x0070(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bShouldPinActor;                                   // 0x00A0(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11EA[0xF];                                     // 0x00A1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSaveGame">();
	}
	static class UMagicLeapARPinSaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSaveGame>();
	}
};
static_assert(alignof(UMagicLeapARPinSaveGame) == 0x000010, "Wrong alignment on UMagicLeapARPinSaveGame");
static_assert(sizeof(UMagicLeapARPinSaveGame) == 0x0000B0, "Wrong size on UMagicLeapARPinSaveGame");
static_assert(offsetof(UMagicLeapARPinSaveGame, PinnedID) == 0x000028, "Member 'UMagicLeapARPinSaveGame::PinnedID' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinSaveGame, ComponentWorldTransform) == 0x000040, "Member 'UMagicLeapARPinSaveGame::ComponentWorldTransform' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinSaveGame, PinTransform) == 0x000070, "Member 'UMagicLeapARPinSaveGame::PinTransform' has a wrong offset!");
static_assert(offsetof(UMagicLeapARPinSaveGame, bShouldPinActor) == 0x0000A0, "Member 'UMagicLeapARPinSaveGame::bShouldPinActor' has a wrong offset!");

// Class MagicLeapARPin.MagicLeapARPinContentBindings
// 0x0050 (0x0078 - 0x0028)
class UMagicLeapARPinContentBindings final : public USaveGame
{
public:
	TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings;                                // 0x0028(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinContentBindings">();
	}
	static class UMagicLeapARPinContentBindings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinContentBindings>();
	}
};
static_assert(alignof(UMagicLeapARPinContentBindings) == 0x000008, "Wrong alignment on UMagicLeapARPinContentBindings");
static_assert(sizeof(UMagicLeapARPinContentBindings) == 0x000078, "Wrong size on UMagicLeapARPinContentBindings");
static_assert(offsetof(UMagicLeapARPinContentBindings, AllContentBindings) == 0x000028, "Member 'UMagicLeapARPinContentBindings::AllContentBindings' has a wrong offset!");

}

