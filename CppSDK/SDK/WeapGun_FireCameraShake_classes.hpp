#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeapGun_FireCameraShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeapGun_FireCameraShake.WeapGun_FireCameraShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UWeapGun_FireCameraShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeapGun_FireCameraShake_C">();
	}
	static class UWeapGun_FireCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeapGun_FireCameraShake_C>();
	}
};
static_assert(alignof(UWeapGun_FireCameraShake_C) == 0x000010, "Wrong alignment on UWeapGun_FireCameraShake_C");
static_assert(sizeof(UWeapGun_FireCameraShake_C) == 0x0001B0, "Wrong size on UWeapGun_FireCameraShake_C");

}
