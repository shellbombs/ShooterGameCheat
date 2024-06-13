#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sanctuary_Audio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Sanctuary_Audio.Sanctuary_Audio_C
// 0x0030 (0x0258 - 0x0228)
class ASanctuary_Audio_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                              OneShot_Sound;                                     // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Distance;                                      // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Distance;                                      // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Spawn_OneShots_Handle;                             // 0x0240(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                          InteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                          ExteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Sanctuary_Audio(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SpawnOneShot();
	void PlayOneShots();
	void BndEvt__AudioTrigger_Balcony_02_2_K2Node_ActorBoundEvent_8_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__AudioTrigger_Balcony_01_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__AudioTrigger_Balcony_02_2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__AudioTrigger_Balcony_01_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__AudioTrigger_Interior_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sanctuary_Audio_C">();
	}
	static class ASanctuary_Audio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASanctuary_Audio_C>();
	}
};
static_assert(alignof(ASanctuary_Audio_C) == 0x000008, "Wrong alignment on ASanctuary_Audio_C");
static_assert(sizeof(ASanctuary_Audio_C) == 0x000258, "Wrong size on ASanctuary_Audio_C");
static_assert(offsetof(ASanctuary_Audio_C, UberGraphFrame) == 0x000228, "Member 'ASanctuary_Audio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, OneShot_Sound) == 0x000230, "Member 'ASanctuary_Audio_C::OneShot_Sound' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, Min_Distance) == 0x000238, "Member 'ASanctuary_Audio_C::Min_Distance' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, Max_Distance) == 0x00023C, "Member 'ASanctuary_Audio_C::Max_Distance' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, Spawn_OneShots_Handle) == 0x000240, "Member 'ASanctuary_Audio_C::Spawn_OneShots_Handle' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, InteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty) == 0x000248, "Member 'ASanctuary_Audio_C::InteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty' has a wrong offset!");
static_assert(offsetof(ASanctuary_Audio_C, ExteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty) == 0x000250, "Member 'ASanctuary_Audio_C::ExteriorAmbience_ExecuteUbergraph_Sanctuary_Audio_RefProperty' has a wrong offset!");

}

