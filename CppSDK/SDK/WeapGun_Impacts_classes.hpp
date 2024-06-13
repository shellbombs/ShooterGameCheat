#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeapGun_Impacts

#include "Basic.hpp"

#include "ShooterGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeapGun_Impacts.WeapGun_Impacts_C
// 0x0008 (0x0350 - 0x0348)
class AWeapGun_Impacts_C final : public AShooterImpactEffect
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeapGun_Impacts_C">();
	}
	static class AWeapGun_Impacts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeapGun_Impacts_C>();
	}
};
static_assert(alignof(AWeapGun_Impacts_C) == 0x000008, "Wrong alignment on AWeapGun_Impacts_C");
static_assert(sizeof(AWeapGun_Impacts_C) == 0x000350, "Wrong size on AWeapGun_Impacts_C");
static_assert(offsetof(AWeapGun_Impacts_C, DefaultSceneRoot) == 0x000348, "Member 'AWeapGun_Impacts_C::DefaultSceneRoot' has a wrong offset!");

}

