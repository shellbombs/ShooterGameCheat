#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickup_AmmoGun

#include "Basic.hpp"

#include "ShooterGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Pickup_AmmoGun.Pickup_AmmoGun_C
// 0x0000 (0x0270 - 0x0270)
class APickup_AmmoGun_C final : public AShooterPickup_Ammo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pickup_AmmoGun_C">();
	}
	static class APickup_AmmoGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APickup_AmmoGun_C>();
	}
};
static_assert(alignof(APickup_AmmoGun_C) == 0x000008, "Wrong alignment on APickup_AmmoGun_C");
static_assert(sizeof(APickup_AmmoGun_C) == 0x000270, "Wrong size on APickup_AmmoGun_C");

}

