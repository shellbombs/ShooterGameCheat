#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskAlwaysTrue

#include "Basic.hpp"


namespace SDK::Params
{

// Function TaskAlwaysTrue.TaskAlwaysTrue_C.ExecuteUbergraph_TaskAlwaysTrue
// 0x0010 (0x0010 - 0x0000)
struct TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_193F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue) == 0x000008, "Wrong alignment on TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue");
static_assert(sizeof(TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue) == 0x000010, "Wrong size on TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue");
static_assert(offsetof(TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue, EntryPoint) == 0x000000, "Member 'TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue::EntryPoint' has a wrong offset!");
static_assert(offsetof(TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue, K2Node_Event_OwnerActor) == 0x000008, "Member 'TaskAlwaysTrue_C_ExecuteUbergraph_TaskAlwaysTrue::K2Node_Event_OwnerActor' has a wrong offset!");

// Function TaskAlwaysTrue.TaskAlwaysTrue_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct TaskAlwaysTrue_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TaskAlwaysTrue_C_ReceiveExecute) == 0x000008, "Wrong alignment on TaskAlwaysTrue_C_ReceiveExecute");
static_assert(sizeof(TaskAlwaysTrue_C_ReceiveExecute) == 0x000008, "Wrong size on TaskAlwaysTrue_C_ReceiveExecute");
static_assert(offsetof(TaskAlwaysTrue_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'TaskAlwaysTrue_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}

