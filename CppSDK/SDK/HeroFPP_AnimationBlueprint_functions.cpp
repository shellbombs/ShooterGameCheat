#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroFPP_AnimationBlueprint

#include "Basic.hpp"

#include "HeroFPP_AnimationBlueprint_classes.hpp"
#include "HeroFPP_AnimationBlueprint_parameters.hpp"


namespace SDK
{

// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.ExecuteUbergraph_HeroFPP_AnimationBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroFPP_AnimationBlueprint_C::ExecuteUbergraph_HeroFPP_AnimationBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "ExecuteUbergraph_HeroFPP_AnimationBlueprint");

	Params::HeroFPP_AnimationBlueprint_C_ExecuteUbergraph_HeroFPP_AnimationBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Jumpland
// (BlueprintCallable, BlueprintEvent)

void UHeroFPP_AnimationBlueprint_C::AnimNotify_Jumpland()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "AnimNotify_Jumpland");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)

void UHeroFPP_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "AnimNotify_Footstep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroFPP_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::HeroFPP_AnimationBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889
// (BlueprintEvent)

void UHeroFPP_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F
// (BlueprintEvent)

void UHeroFPP_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UHeroFPP_AnimationBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroFPP_AnimationBlueprint_C", "AnimGraph");

	Params::HeroFPP_AnimationBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

