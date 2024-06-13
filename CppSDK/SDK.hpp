#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// ShooterGame
// 4.27.2-18319896+++UE4+Release-4.27

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/OnlineSubsystem_structs.hpp"
#include "SDK/OnlineSubsystem_classes.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/PhysicsCore_structs.hpp"
#include "SDK/Chaos_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/PropertyAccess_structs.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/PhysicsCore_classes.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/OnlineSubsystemUtils_structs.hpp"
#include "SDK/OnlineSubsystemUtils_classes.hpp"
#include "SDK/DeveloperSettings_classes.hpp"
#include "SDK/AudioMixer_structs.hpp"
#include "SDK/AudioMixer_classes.hpp"
#include "SDK/OnlineSubsystemEOS_structs.hpp"
#include "SDK/OnlineSubsystemEOS_classes.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/DmgType_Instant_classes.hpp"
#include "SDK/OnlineSubsystemSteam_classes.hpp"
#include "SDK/ReplicationGraph_structs.hpp"
#include "SDK/ReplicationGraph_classes.hpp"
#include "SDK/Gauntlet_classes.hpp"
#include "SDK/Synthesis_structs.hpp"
#include "SDK/Synthesis_classes.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/AudioAnalyzer_classes.hpp"
#include "SDK/AudioSynesthesia_structs.hpp"
#include "SDK/AudioSynesthesia_classes.hpp"
#include "SDK/GameplayCameras_structs.hpp"
#include "SDK/GameplayCameras_classes.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/TemplateSequence_structs.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/TemplateSequence_classes.hpp"
#include "SDK/Reflex_structs.hpp"
#include "SDK/Reflex_classes.hpp"
#include "SDK/Paper2D_structs.hpp"
#include "SDK/Paper2D_classes.hpp"
#include "SDK/Renderer_structs.hpp"
#include "SDK/LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/AnimationSharing_structs.hpp"
#include "SDK/AnimationSharing_classes.hpp"
#include "SDK/SignificanceManager_classes.hpp"
#include "SDK/UObjectPlugin_structs.hpp"
#include "SDK/UObjectPlugin_classes.hpp"
#include "SDK/FacialAnimation_classes.hpp"
#include "SDK/DatasmithContent_structs.hpp"
#include "SDK/DatasmithContent_classes.hpp"
#include "SDK/VariantManagerContent_structs.hpp"
#include "SDK/VariantManagerContent_classes.hpp"
#include "SDK/GeometryCache_structs.hpp"
#include "SDK/GeometryCache_classes.hpp"
#include "SDK/GeometryCacheTracks_structs.hpp"
#include "SDK/GeometryCacheTracks_classes.hpp"
#include "SDK/AutomationUtils_classes.hpp"
#include "SDK/ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/ChaosCloth_structs.hpp"
#include "SDK/ChaosCloth_classes.hpp"
#include "SDK/MeshDescription_structs.hpp"
#include "SDK/EditableMesh_structs.hpp"
#include "SDK/EditableMesh_classes.hpp"
#include "SDK/GeometryCollectionTracks_structs.hpp"
#include "SDK/GeometryCollectionTracks_classes.hpp"
#include "SDK/ProceduralMeshComponent_structs.hpp"
#include "SDK/ProceduralMeshComponent_classes.hpp"
#include "SDK/NiagaraCore_structs.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/ChaosNiagara_structs.hpp"
#include "SDK/ChaosNiagara_classes.hpp"
#include "SDK/NiagaraShader_classes.hpp"
#include "SDK/NiagaraAnimNotifies_classes.hpp"
#include "SDK/MotoSynth_structs.hpp"
#include "SDK/MotoSynth_classes.hpp"
#include "SDK/MagicLeapARPin_structs.hpp"
#include "SDK/MagicLeapARPin_classes.hpp"
#include "SDK/MagicLeapSharedWorld_structs.hpp"
#include "SDK/MagicLeapSharedWorld_classes.hpp"
#include "SDK/MagicLeap_structs.hpp"
#include "SDK/MagicLeap_classes.hpp"
#include "SDK/HeadMountedDisplay_structs.hpp"
#include "SDK/HeadMountedDisplay_classes.hpp"
#include "SDK/MagicLeapAR_structs.hpp"
#include "SDK/MagicLeapImageTracker_structs.hpp"
#include "SDK/MagicLeapPlanes_structs.hpp"
#include "SDK/MagicLeapAR_classes.hpp"
#include "SDK/AugmentedReality_structs.hpp"
#include "SDK/AugmentedReality_classes.hpp"
#include "SDK/MagicLeapAudio_structs.hpp"
#include "SDK/MagicLeapAudio_classes.hpp"
#include "SDK/MagicLeapController_structs.hpp"
#include "SDK/MagicLeapController_classes.hpp"
#include "SDK/MagicLeapEyeTracker_structs.hpp"
#include "SDK/MagicLeapEyeTracker_classes.hpp"
#include "SDK/LiveLinkInterface_structs.hpp"
#include "SDK/LiveLinkInterface_classes.hpp"
#include "SDK/MagicLeapHandTracking_structs.hpp"
#include "SDK/MagicLeapHandTracking_classes.hpp"
#include "SDK/MagicLeapIdentity_structs.hpp"
#include "SDK/MagicLeapIdentity_classes.hpp"
#include "SDK/MagicLeapImageTracker_classes.hpp"
#include "SDK/MagicLeapPlanes_classes.hpp"
#include "SDK/MagicLeapPrivileges_structs.hpp"
#include "SDK/MagicLeapPrivileges_classes.hpp"
#include "SDK/MagicLeapSecureStorage_classes.hpp"
#include "SDK/MagicLeapHandMeshing_structs.hpp"
#include "SDK/MagicLeapHandMeshing_classes.hpp"
#include "SDK/MagicLeapLightEstimation_structs.hpp"
#include "SDK/MagicLeapLightEstimation_classes.hpp"
#include "SDK/AvfMediaFactory_classes.hpp"
#include "SDK/MediaAssets_structs.hpp"
#include "SDK/MediaAssets_classes.hpp"
#include "SDK/ImgMedia_classes.hpp"
#include "SDK/ImgMediaEngine_classes.hpp"
#include "SDK/ImgMediaFactory_classes.hpp"
#include "SDK/MediaCompositing_structs.hpp"
#include "SDK/MediaCompositing_classes.hpp"
#include "SDK/WmfMediaFactory_classes.hpp"
#include "SDK/TcpMessaging_classes.hpp"
#include "SDK/UdpMessaging_structs.hpp"
#include "SDK/UdpMessaging_classes.hpp"
#include "SDK/ActorSequence_structs.hpp"
#include "SDK/ActorSequence_classes.hpp"
#include "SDK/ActorLayerUtilities_structs.hpp"
#include "SDK/ActorLayerUtilities_classes.hpp"
#include "SDK/AndroidPermission_classes.hpp"
#include "SDK/AppleImageUtils_structs.hpp"
#include "SDK/AppleImageUtils_classes.hpp"
#include "SDK/ArchVisCharacter_classes.hpp"
#include "SDK/AssetTags_structs.hpp"
#include "SDK/AssetTags_classes.hpp"
#include "SDK/AudioCapture_structs.hpp"
#include "SDK/AudioCapture_classes.hpp"
#include "SDK/CableComponent_classes.hpp"
#include "SDK/CustomMeshComponent_structs.hpp"
#include "SDK/CustomMeshComponent_classes.hpp"
#include "SDK/GooglePAD_structs.hpp"
#include "SDK/GooglePAD_classes.hpp"
#include "SDK/LocationServicesBPLibrary_structs.hpp"
#include "SDK/LocationServicesBPLibrary_classes.hpp"
#include "SDK/MobilePatchingUtils_classes.hpp"
#include "SDK/OculusHMD_structs.hpp"
#include "SDK/OculusHMD_classes.hpp"
#include "SDK/OculusInput_structs.hpp"
#include "SDK/OculusInput_classes.hpp"
#include "SDK/OculusMR_structs.hpp"
#include "SDK/OculusMR_classes.hpp"
#include "SDK/OpenXRHandTracking_structs.hpp"
#include "SDK/OpenXRHandTracking_classes.hpp"
#include "SDK/LiveLink_structs.hpp"
#include "SDK/LiveLink_classes.hpp"
#include "SDK/TimeManagement_structs.hpp"
#include "SDK/TimeManagement_classes.hpp"
#include "SDK/LiveLinkComponents_structs.hpp"
#include "SDK/LiveLinkComponents_classes.hpp"
#include "SDK/LiveLinkMovieScene_structs.hpp"
#include "SDK/LiveLinkMovieScene_classes.hpp"
#include "SDK/TakeMovieScene_classes.hpp"
#include "SDK/PhysXVehicles_structs.hpp"
#include "SDK/PhysXVehicles_classes.hpp"
#include "SDK/AudioExtensions_classes.hpp"
#include "SDK/SoundFields_classes.hpp"
#include "SDK/SteamVR_structs.hpp"
#include "SDK/SteamVR_classes.hpp"
#include "SDK/SteamVRInputDevice_structs.hpp"
#include "SDK/SteamVRInputDevice_classes.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/ShooterGame_structs.hpp"
#include "SDK/ShooterGame_classes.hpp"
#include "SDK/SlateCore_classes.hpp"
#include "SDK/InputCore_classes.hpp"
#include "SDK/Slate_classes.hpp"
#include "SDK/ImageWriteQueue_structs.hpp"
#include "SDK/ImageWriteQueue_classes.hpp"
#include "SDK/MaterialShaderQualitySettings_structs.hpp"
#include "SDK/MaterialShaderQualitySettings_classes.hpp"
#include "SDK/EyeTracker_structs.hpp"
#include "SDK/EyeTracker_classes.hpp"
#include "SDK/EngineSettings_structs.hpp"
#include "SDK/EngineSettings_classes.hpp"
#include "SDK/MRMesh_structs.hpp"
#include "SDK/MRMesh_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/BuildPatchServices_structs.hpp"
#include "SDK/BuildPatchServices_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/NetCore_structs.hpp"
#include "SDK/NetCore_classes.hpp"
#include "SDK/Landscape_structs.hpp"
#include "SDK/Landscape_classes.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/AnimationCore_classes.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/AnimGraphRuntime_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/AssetRegistry_structs.hpp"
#include "SDK/AssetRegistry_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/MeshDescription_classes.hpp"
#include "SDK/StaticMeshDescription_structs.hpp"
#include "SDK/StaticMeshDescription_classes.hpp"
#include "SDK/PropertyAccess_classes.hpp"
#include "SDK/JsonUtilities_structs.hpp"
#include "SDK/JsonUtilities_classes.hpp"
#include "SDK/LevelSequence_structs.hpp"
#include "SDK/LevelSequence_classes.hpp"
#include "SDK/MovieSceneCapture_structs.hpp"
#include "SDK/MovieSceneCapture_classes.hpp"
#include "SDK/MoviePlayer_structs.hpp"
#include "SDK/MoviePlayer_classes.hpp"
#include "SDK/Overlay_structs.hpp"
#include "SDK/Overlay_classes.hpp"
#include "SDK/WeapLauncher_FireCameraShake_classes.hpp"
#include "SDK/ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/ChaosSolverEngine_structs.hpp"
#include "SDK/ChaosSolverEngine_classes.hpp"
#include "SDK/FieldSystemEngine_structs.hpp"
#include "SDK/FieldSystemEngine_classes.hpp"
#include "SDK/GeometryCollectionEngine_structs.hpp"
#include "SDK/GeometryCollectionEngine_classes.hpp"
#include "SDK/InteractiveToolsFramework_structs.hpp"
#include "SDK/InteractiveToolsFramework_classes.hpp"
#include "SDK/LuminRuntimeSettings_structs.hpp"
#include "SDK/LuminRuntimeSettings_classes.hpp"
#include "SDK/ImageWrapper_structs.hpp"
#include "SDK/MediaUtils_structs.hpp"
#include "SDK/VectorVM_structs.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/EngineMessages_structs.hpp"
#include "SDK/Serialization_structs.hpp"
#include "SDK/SessionMessages_structs.hpp"
#include "SDK/LiveLinkMessageBusFramework_structs.hpp"
#include "SDK/DmgTypeBP_Environmental_classes.hpp"
#include "SDK/MagicLeapARPinInfoActor_classes.hpp"
#include "SDK/WeapGun_Impacts_classes.hpp"
#include "SDK/WeapGun_FireCameraShake_classes.hpp"
#include "SDK/ProjRocket_Explosion_classes.hpp"
#include "SDK/DmgType_Explosion_classes.hpp"
#include "SDK/ProjRocket_classes.hpp"
#include "SDK/WeapLauncher_classes.hpp"
#include "SDK/WeapGun_classes.hpp"
#include "SDK/HeroTPP_AnimBlueprint_classes.hpp"
#include "SDK/HeroFPP_AnimationBlueprint_classes.hpp"
#include "SDK/PlayerPawn_classes.hpp"
#include "SDK/TaskAlwaysTrue_classes.hpp"
#include "SDK/BotShootEnemy_classes.hpp"
#include "SDK/BotSearchEnemyLOS_classes.hpp"
#include "SDK/BotPawn_classes.hpp"
#include "SDK/Pickup_Health_classes.hpp"
#include "SDK/Pickup_AmmoLauncher_classes.hpp"
#include "SDK/Pickup_AmmoGun_classes.hpp"
#include "SDK/Sanctuary_Audio_classes.hpp"
#include "SDK/Sanctuary_classes.hpp"
