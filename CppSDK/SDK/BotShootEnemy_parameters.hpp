#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BotShootEnemy

#include "Basic.hpp"


namespace SDK::Params
{

// Function BotShootEnemy.BotShootEnemy_C.ExecuteUbergraph_BotShootEnemy
// 0x0028 (0x0028 - 0x0000)
struct BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1940[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1941[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AShooterAIController*                   K2Node_DynamicCast_AsShooter_AIController;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy) == 0x000008, "Wrong alignment on BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy");
static_assert(sizeof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy) == 0x000028, "Wrong size on BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy");
static_assert(offsetof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy, EntryPoint) == 0x000000, "Member 'BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy, K2Node_Event_OwnerActor) == 0x000008, "Member 'BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy, K2Node_DynamicCast_AsShooter_AIController) == 0x000018, "Member 'BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy::K2Node_DynamicCast_AsShooter_AIController' has a wrong offset!");
static_assert(offsetof(BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BotShootEnemy_C_ExecuteUbergraph_BotShootEnemy::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BotShootEnemy.BotShootEnemy_C.ReceiveTick
// 0x0010 (0x0010 - 0x0000)
struct BotShootEnemy_C_ReceiveTick final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BotShootEnemy_C_ReceiveTick) == 0x000008, "Wrong alignment on BotShootEnemy_C_ReceiveTick");
static_assert(sizeof(BotShootEnemy_C_ReceiveTick) == 0x000010, "Wrong size on BotShootEnemy_C_ReceiveTick");
static_assert(offsetof(BotShootEnemy_C_ReceiveTick, OwnerActor) == 0x000000, "Member 'BotShootEnemy_C_ReceiveTick::OwnerActor' has a wrong offset!");
static_assert(offsetof(BotShootEnemy_C_ReceiveTick, DeltaSeconds) == 0x000008, "Member 'BotShootEnemy_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

