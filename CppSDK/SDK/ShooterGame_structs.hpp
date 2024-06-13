#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShooterGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ShooterGame.EOnlineMode
// NumValues: 0x0004
enum class EOnlineMode : uint8
{
	Offline                                  = 0,
	LAN                                      = 1,
	Online                                   = 2,
	EOnlineMode_MAX                          = 3,
};

// Enum ShooterGame.EClassRepNodeMapping
// NumValues: 0x0006
enum class EClassRepNodeMapping : uint8
{
	NotRouted                                = 0,
	RelevantAllConnections                   = 1,
	Spatialize_Static                        = 2,
	Spatialize_Dynamic                       = 3,
	Spatialize_Dormancy                      = 4,
	EClassRepNodeMapping_MAX                 = 5,
};

// Enum ShooterGame.EShooterPhysMaterialType
// NumValues: 0x000A
enum class EShooterPhysMaterialType : uint8
{
	Unknown                                  = 0,
	Concrete                                 = 1,
	Dirt                                     = 2,
	Water                                    = 3,
	Metal                                    = 4,
	Wood                                     = 5,
	Grass                                    = 6,
	Glass                                    = 7,
	Flesh                                    = 8,
	EShooterPhysMaterialType_MAX             = 9,
};

// ScriptStruct ShooterGame.ShooterChatStyle
// 0x0900 (0x0908 - 0x0008)
struct FShooterChatStyle final : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                  TextEntryStyle;                                    // 0x0008(0x07F8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BackingBrush;                                      // 0x0800(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            BoxBorderColor;                                    // 0x0888(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            TextColor;                                         // 0x08B0(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FSlateSound                            RxMessgeSound;                                     // 0x08D8(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            TxMessgeSound;                                     // 0x08F0(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterChatStyle) == 0x000008, "Wrong alignment on FShooterChatStyle");
static_assert(sizeof(FShooterChatStyle) == 0x000908, "Wrong size on FShooterChatStyle");
static_assert(offsetof(FShooterChatStyle, TextEntryStyle) == 0x000008, "Member 'FShooterChatStyle::TextEntryStyle' has a wrong offset!");
static_assert(offsetof(FShooterChatStyle, BackingBrush) == 0x000800, "Member 'FShooterChatStyle::BackingBrush' has a wrong offset!");
static_assert(offsetof(FShooterChatStyle, BoxBorderColor) == 0x000888, "Member 'FShooterChatStyle::BoxBorderColor' has a wrong offset!");
static_assert(offsetof(FShooterChatStyle, TextColor) == 0x0008B0, "Member 'FShooterChatStyle::TextColor' has a wrong offset!");
static_assert(offsetof(FShooterChatStyle, RxMessgeSound) == 0x0008D8, "Member 'FShooterChatStyle::RxMessgeSound' has a wrong offset!");
static_assert(offsetof(FShooterChatStyle, TxMessgeSound) == 0x0008F0, "Member 'FShooterChatStyle::TxMessgeSound' has a wrong offset!");

// ScriptStruct ShooterGame.ShooterMenuItemStyle
// 0x0198 (0x01A0 - 0x0008)
struct FShooterMenuItemStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                            BackgroundBrush;                                   // 0x0008(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            LeftArrowImage;                                    // 0x0090(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            RightArrowImage;                                   // 0x0118(0x0088)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterMenuItemStyle) == 0x000008, "Wrong alignment on FShooterMenuItemStyle");
static_assert(sizeof(FShooterMenuItemStyle) == 0x0001A0, "Wrong size on FShooterMenuItemStyle");
static_assert(offsetof(FShooterMenuItemStyle, BackgroundBrush) == 0x000008, "Member 'FShooterMenuItemStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FShooterMenuItemStyle, LeftArrowImage) == 0x000090, "Member 'FShooterMenuItemStyle::LeftArrowImage' has a wrong offset!");
static_assert(offsetof(FShooterMenuItemStyle, RightArrowImage) == 0x000118, "Member 'FShooterMenuItemStyle::RightArrowImage' has a wrong offset!");

// ScriptStruct ShooterGame.ShooterMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FShooterMenuSoundsStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateSound                            StartGameSound;                                    // 0x0008(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            ExitGameSound;                                     // 0x0020(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterMenuSoundsStyle) == 0x000008, "Wrong alignment on FShooterMenuSoundsStyle");
static_assert(sizeof(FShooterMenuSoundsStyle) == 0x000038, "Wrong size on FShooterMenuSoundsStyle");
static_assert(offsetof(FShooterMenuSoundsStyle, StartGameSound) == 0x000008, "Member 'FShooterMenuSoundsStyle::StartGameSound' has a wrong offset!");
static_assert(offsetof(FShooterMenuSoundsStyle, ExitGameSound) == 0x000020, "Member 'FShooterMenuSoundsStyle::ExitGameSound' has a wrong offset!");

// ScriptStruct ShooterGame.DecalData
// 0x0010 (0x0010 - 0x0000)
struct FDecalData final
{
public:
	class UMaterial*                              DecalMaterial;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecalSize;                                         // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LifeSpan;                                          // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDecalData) == 0x000008, "Wrong alignment on FDecalData");
static_assert(sizeof(FDecalData) == 0x000010, "Wrong size on FDecalData");
static_assert(offsetof(FDecalData, DecalMaterial) == 0x000000, "Member 'FDecalData::DecalMaterial' has a wrong offset!");
static_assert(offsetof(FDecalData, DecalSize) == 0x000008, "Member 'FDecalData::DecalSize' has a wrong offset!");
static_assert(offsetof(FDecalData, LifeSpan) == 0x00000C, "Member 'FDecalData::LifeSpan' has a wrong offset!");

// ScriptStruct ShooterGame.ShooterMenuStyle
// 0x01F8 (0x0200 - 0x0008)
struct FShooterMenuStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                            HeaderBackgroundBrush;                             // 0x0008(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            LeftBackgroundBrush;                               // 0x0090(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            RightBackgroundBrush;                              // 0x0118(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateSound                            MenuEnterSound;                                    // 0x01A0(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            MenuBackSound;                                     // 0x01B8(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            OptionChangeSound;                                 // 0x01D0(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            MenuItemChangeSound;                               // 0x01E8(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterMenuStyle) == 0x000008, "Wrong alignment on FShooterMenuStyle");
static_assert(sizeof(FShooterMenuStyle) == 0x000200, "Wrong size on FShooterMenuStyle");
static_assert(offsetof(FShooterMenuStyle, HeaderBackgroundBrush) == 0x000008, "Member 'FShooterMenuStyle::HeaderBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, LeftBackgroundBrush) == 0x000090, "Member 'FShooterMenuStyle::LeftBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, RightBackgroundBrush) == 0x000118, "Member 'FShooterMenuStyle::RightBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, MenuEnterSound) == 0x0001A0, "Member 'FShooterMenuStyle::MenuEnterSound' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, MenuBackSound) == 0x0001B8, "Member 'FShooterMenuStyle::MenuBackSound' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, OptionChangeSound) == 0x0001D0, "Member 'FShooterMenuStyle::OptionChangeSound' has a wrong offset!");
static_assert(offsetof(FShooterMenuStyle, MenuItemChangeSound) == 0x0001E8, "Member 'FShooterMenuStyle::MenuItemChangeSound' has a wrong offset!");

// ScriptStruct ShooterGame.ShooterOptionsStyle
// 0x0030 (0x0038 - 0x0008)
struct FShooterOptionsStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateSound                            AcceptChangesSound;                                // 0x0008(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                            DiscardChangesSound;                               // 0x0020(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterOptionsStyle) == 0x000008, "Wrong alignment on FShooterOptionsStyle");
static_assert(sizeof(FShooterOptionsStyle) == 0x000038, "Wrong size on FShooterOptionsStyle");
static_assert(offsetof(FShooterOptionsStyle, AcceptChangesSound) == 0x000008, "Member 'FShooterOptionsStyle::AcceptChangesSound' has a wrong offset!");
static_assert(offsetof(FShooterOptionsStyle, DiscardChangesSound) == 0x000020, "Member 'FShooterOptionsStyle::DiscardChangesSound' has a wrong offset!");

// ScriptStruct ShooterGame.ShooterScoreboardStyle
// 0x0118 (0x0120 - 0x0008)
struct FShooterScoreboardStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                            ItemBorderBrush;                                   // 0x0008(0x0088)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            KillStatColor;                                     // 0x0090(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            DeathStatColor;                                    // 0x00B8(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                            ScoreStatColor;                                    // 0x00E0(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FSlateSound                            PlayerChangeSound;                                 // 0x0108(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FShooterScoreboardStyle) == 0x000008, "Wrong alignment on FShooterScoreboardStyle");
static_assert(sizeof(FShooterScoreboardStyle) == 0x000120, "Wrong size on FShooterScoreboardStyle");
static_assert(offsetof(FShooterScoreboardStyle, ItemBorderBrush) == 0x000008, "Member 'FShooterScoreboardStyle::ItemBorderBrush' has a wrong offset!");
static_assert(offsetof(FShooterScoreboardStyle, KillStatColor) == 0x000090, "Member 'FShooterScoreboardStyle::KillStatColor' has a wrong offset!");
static_assert(offsetof(FShooterScoreboardStyle, DeathStatColor) == 0x0000B8, "Member 'FShooterScoreboardStyle::DeathStatColor' has a wrong offset!");
static_assert(offsetof(FShooterScoreboardStyle, ScoreStatColor) == 0x0000E0, "Member 'FShooterScoreboardStyle::ScoreStatColor' has a wrong offset!");
static_assert(offsetof(FShooterScoreboardStyle, PlayerChangeSound) == 0x000108, "Member 'FShooterScoreboardStyle::PlayerChangeSound' has a wrong offset!");

// ScriptStruct ShooterGame.TakeHitInfo
// 0x0128 (0x0128 - 0x0000)
struct FTakeHitInfo final
{
public:
	float                                         ActualDamage;                                      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_156A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DamageTypeClass;                                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AShooterCharacter>       PawnInstigator;                                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  DamageCauser;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DamageEventClassID;                                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bKilled : 1;                                       // 0x0024(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_156B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         EnsureReplicationByte;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_156C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDamageEvent                           GeneralDamageEvent;                                // 0x0030(0x0010)(NativeAccessSpecifierPrivate)
	struct FPointDamageEvent                      PointDamageEvent;                                  // 0x0040(0x00A8)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FRadialDamageEvent                     RadialDamageEvent;                                 // 0x00E8(0x0040)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FTakeHitInfo) == 0x000008, "Wrong alignment on FTakeHitInfo");
static_assert(sizeof(FTakeHitInfo) == 0x000128, "Wrong size on FTakeHitInfo");
static_assert(offsetof(FTakeHitInfo, ActualDamage) == 0x000000, "Member 'FTakeHitInfo::ActualDamage' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, DamageTypeClass) == 0x000008, "Member 'FTakeHitInfo::DamageTypeClass' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, PawnInstigator) == 0x000010, "Member 'FTakeHitInfo::PawnInstigator' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, DamageCauser) == 0x000018, "Member 'FTakeHitInfo::DamageCauser' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, DamageEventClassID) == 0x000020, "Member 'FTakeHitInfo::DamageEventClassID' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, EnsureReplicationByte) == 0x000028, "Member 'FTakeHitInfo::EnsureReplicationByte' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, GeneralDamageEvent) == 0x000030, "Member 'FTakeHitInfo::GeneralDamageEvent' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, PointDamageEvent) == 0x000040, "Member 'FTakeHitInfo::PointDamageEvent' has a wrong offset!");
static_assert(offsetof(FTakeHitInfo, RadialDamageEvent) == 0x0000E8, "Member 'FTakeHitInfo::RadialDamageEvent' has a wrong offset!");

// ScriptStruct ShooterGame.WeaponAnim
// 0x0010 (0x0010 - 0x0000)
struct FWeaponAnim final
{
public:
	class UAnimMontage*                           Pawn1P;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                           Pawn3P;                                            // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWeaponAnim) == 0x000008, "Wrong alignment on FWeaponAnim");
static_assert(sizeof(FWeaponAnim) == 0x000010, "Wrong size on FWeaponAnim");
static_assert(offsetof(FWeaponAnim, Pawn1P) == 0x000000, "Member 'FWeaponAnim::Pawn1P' has a wrong offset!");
static_assert(offsetof(FWeaponAnim, Pawn3P) == 0x000008, "Member 'FWeaponAnim::Pawn3P' has a wrong offset!");

// ScriptStruct ShooterGame.WeaponData
// 0x0018 (0x0018 - 0x0000)
struct FWeaponData final
{
public:
	bool                                          bInfiniteAmmo;                                     // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInfiniteClip;                                     // 0x0001(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_156D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxAmmo;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AmmoPerClip;                                       // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InitialClips;                                      // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeBetweenShots;                                  // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoAnimReloadDuration;                              // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWeaponData) == 0x000004, "Wrong alignment on FWeaponData");
static_assert(sizeof(FWeaponData) == 0x000018, "Wrong size on FWeaponData");
static_assert(offsetof(FWeaponData, bInfiniteAmmo) == 0x000000, "Member 'FWeaponData::bInfiniteAmmo' has a wrong offset!");
static_assert(offsetof(FWeaponData, bInfiniteClip) == 0x000001, "Member 'FWeaponData::bInfiniteClip' has a wrong offset!");
static_assert(offsetof(FWeaponData, MaxAmmo) == 0x000004, "Member 'FWeaponData::MaxAmmo' has a wrong offset!");
static_assert(offsetof(FWeaponData, AmmoPerClip) == 0x000008, "Member 'FWeaponData::AmmoPerClip' has a wrong offset!");
static_assert(offsetof(FWeaponData, InitialClips) == 0x00000C, "Member 'FWeaponData::InitialClips' has a wrong offset!");
static_assert(offsetof(FWeaponData, TimeBetweenShots) == 0x000010, "Member 'FWeaponData::TimeBetweenShots' has a wrong offset!");
static_assert(offsetof(FWeaponData, NoAnimReloadDuration) == 0x000014, "Member 'FWeaponData::NoAnimReloadDuration' has a wrong offset!");

// ScriptStruct ShooterGame.InstantWeaponData
// 0x0028 (0x0028 - 0x0000)
struct FInstantWeaponData final
{
public:
	float                                         WeaponSpread;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetingSpreadMod;                                // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FiringSpreadIncrement;                             // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FiringSpreadMax;                                   // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WeaponRange;                                       // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HitDamage;                                         // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageType>                DamageType;                                        // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientSideHitLeeway;                               // 0x0020(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AllowedViewDotHitDir;                              // 0x0024(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInstantWeaponData) == 0x000008, "Wrong alignment on FInstantWeaponData");
static_assert(sizeof(FInstantWeaponData) == 0x000028, "Wrong size on FInstantWeaponData");
static_assert(offsetof(FInstantWeaponData, WeaponSpread) == 0x000000, "Member 'FInstantWeaponData::WeaponSpread' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, TargetingSpreadMod) == 0x000004, "Member 'FInstantWeaponData::TargetingSpreadMod' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, FiringSpreadIncrement) == 0x000008, "Member 'FInstantWeaponData::FiringSpreadIncrement' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, FiringSpreadMax) == 0x00000C, "Member 'FInstantWeaponData::FiringSpreadMax' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, WeaponRange) == 0x000010, "Member 'FInstantWeaponData::WeaponRange' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, HitDamage) == 0x000014, "Member 'FInstantWeaponData::HitDamage' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, DamageType) == 0x000018, "Member 'FInstantWeaponData::DamageType' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, ClientSideHitLeeway) == 0x000020, "Member 'FInstantWeaponData::ClientSideHitLeeway' has a wrong offset!");
static_assert(offsetof(FInstantWeaponData, AllowedViewDotHitDir) == 0x000024, "Member 'FInstantWeaponData::AllowedViewDotHitDir' has a wrong offset!");

// ScriptStruct ShooterGame.InstantHitInfo
// 0x0014 (0x0014 - 0x0000)
struct FInstantHitInfo final
{
public:
	struct FVector                                Origin;                                            // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReticleSpread;                                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RandomSeed;                                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInstantHitInfo) == 0x000004, "Wrong alignment on FInstantHitInfo");
static_assert(sizeof(FInstantHitInfo) == 0x000014, "Wrong size on FInstantHitInfo");
static_assert(offsetof(FInstantHitInfo, Origin) == 0x000000, "Member 'FInstantHitInfo::Origin' has a wrong offset!");
static_assert(offsetof(FInstantHitInfo, ReticleSpread) == 0x00000C, "Member 'FInstantHitInfo::ReticleSpread' has a wrong offset!");
static_assert(offsetof(FInstantHitInfo, RandomSeed) == 0x000010, "Member 'FInstantHitInfo::RandomSeed' has a wrong offset!");

// ScriptStruct ShooterGame.ProjectileWeaponData
// 0x0020 (0x0020 - 0x0000)
struct FProjectileWeaponData final
{
public:
	TSubclassOf<class AShooterProjectile>         ProjectileClass;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ProjectileLife;                                    // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExplosionDamage;                                   // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExplosionRadius;                                   // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_156E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UDamageType>                DamageType;                                        // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProjectileWeaponData) == 0x000008, "Wrong alignment on FProjectileWeaponData");
static_assert(sizeof(FProjectileWeaponData) == 0x000020, "Wrong size on FProjectileWeaponData");
static_assert(offsetof(FProjectileWeaponData, ProjectileClass) == 0x000000, "Member 'FProjectileWeaponData::ProjectileClass' has a wrong offset!");
static_assert(offsetof(FProjectileWeaponData, ProjectileLife) == 0x000008, "Member 'FProjectileWeaponData::ProjectileLife' has a wrong offset!");
static_assert(offsetof(FProjectileWeaponData, ExplosionDamage) == 0x00000C, "Member 'FProjectileWeaponData::ExplosionDamage' has a wrong offset!");
static_assert(offsetof(FProjectileWeaponData, ExplosionRadius) == 0x000010, "Member 'FProjectileWeaponData::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(FProjectileWeaponData, DamageType) == 0x000018, "Member 'FProjectileWeaponData::DamageType' has a wrong offset!");

}
