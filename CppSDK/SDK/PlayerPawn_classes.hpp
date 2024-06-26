#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn

#include "Basic.hpp"

#include "ShooterGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn.PlayerPawn_C
// 0x0000 (0x06A0 - 0x06A0)
class APlayerPawn_C final : public AShooterCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_C">();
	}
	static class APlayerPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_C>();
	}
};
static_assert(alignof(APlayerPawn_C) == 0x000010, "Wrong alignment on APlayerPawn_C");
static_assert(sizeof(APlayerPawn_C) == 0x0006A0, "Wrong size on APlayerPawn_C");

}

