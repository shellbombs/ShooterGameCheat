#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DmgType_Instant

#include "Basic.hpp"

#include "ShooterGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DmgType_Instant.DmgType_Instant_C
// 0x0000 (0x0068 - 0x0068)
class UDmgType_Instant_C final : public UShooterDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DmgType_Instant_C">();
	}
	static class UDmgType_Instant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDmgType_Instant_C>();
	}
};
static_assert(alignof(UDmgType_Instant_C) == 0x000008, "Wrong alignment on UDmgType_Instant_C");
static_assert(sizeof(UDmgType_Instant_C) == 0x000068, "Wrong size on UDmgType_Instant_C");

}
