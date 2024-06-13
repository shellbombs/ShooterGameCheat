#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"

#include "AudioMixer_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioMixer.QuartzClockHandle
// 0x0168 (0x0190 - 0x0028)
class UQuartzClockHandle final : public UObject
{
public:
	uint8                                         Pad_C8B[0x140];                                    // 0x0028(0x0140)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuartzSubsystem*                       QuartzSubsystem;                                   // 0x0168(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C8C[0x18];                                     // 0x0170(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 WorldPtr;                                          // 0x0188(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(const class UObject* WorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedRunTime(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject);
	void PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void ResetTransport(const class UObject* WorldContextObject, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void ResetTransportQuantized(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, class UQuartzClockHandle** ClockHandle);
	void ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SetBeatsPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
	void SetMillisecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
	void SetSecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
	void SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetTicksPerSecond(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	void StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void StartOtherClock(const class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);

	float GetBeatsPerMinute(const class UObject* WorldContextObject) const;
	float GetMillisecondsPerTick(const class UObject* WorldContextObject) const;
	float GetSecondsPerTick(const class UObject* WorldContextObject) const;
	float GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject) const;
	float GetTicksPerSecond(const class UObject* WorldContextObject) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzClockHandle">();
	}
	static class UQuartzClockHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzClockHandle>();
	}
};
static_assert(alignof(UQuartzClockHandle) == 0x000008, "Wrong alignment on UQuartzClockHandle");
static_assert(sizeof(UQuartzClockHandle) == 0x000190, "Wrong size on UQuartzClockHandle");
static_assert(offsetof(UQuartzClockHandle, QuartzSubsystem) == 0x000168, "Member 'UQuartzClockHandle::QuartzSubsystem' has a wrong offset!");
static_assert(offsetof(UQuartzClockHandle, WorldPtr) == 0x000188, "Member 'UQuartzClockHandle::WorldPtr' has a wrong offset!");

// Class AudioMixer.SynthComponent
// 0x04C0 (0x06C0 - 0x0200)
class USynthComponent : public USceneComponent
{
public:
	uint8                                         bAutoDestroy : 1;                                  // 0x01F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStopWhenOwnerDestroyed : 1;                       // 0x01F8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowSpatialization : 1;                          // 0x01F8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideAttenuation : 1;                          // 0x01F8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_3C : 4;                                     // 0x00F8(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_CA6[0x3];                                      // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bEnableBusSends : 1;                               // 0x01FC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableBaseSubmix : 1;                             // 0x01FC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableSubmixSends : 1;                            // 0x01FC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CA7[0x3];                                      // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      AttenuationSettings;                               // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings              AttenuationOverrides;                              // 0x0208(0x03A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x05A8(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>                ConcurrencySet;                                    // 0x05B0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                            SoundClass;                                        // 0x0600(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          SourceEffectChain;                                 // 0x0608(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                       SoundSubmix;                                       // 0x0610(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>           SoundSubmixSends;                                  // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        BusSends;                                          // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        PreEffectBusSends;                                 // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bIsUISound : 1;                                    // 0x0648(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsPreviewSound : 1;                               // 0x0648(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CA8[0x3];                                      // 0x0649(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EnvelopeFollowerAttackTime;                        // 0x064C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerReleaseTime;                       // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CA9[0x4];                                      // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAudioEnvelopeValue;                              // 0x0658(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_CAA[0x20];                                     // 0x0668(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class USynthSound*                            Synth;                                             // 0x0688(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                        AudioComponent;                                    // 0x0690(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CAB[0x28];                                     // 0x0698(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetVolumeMultiplier(float VolumeMultiplier);
	void Start();
	void Stop();

	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponent">();
	}
	static class USynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponent>();
	}
};
static_assert(alignof(USynthComponent) == 0x000010, "Wrong alignment on USynthComponent");
static_assert(sizeof(USynthComponent) == 0x0006C0, "Wrong size on USynthComponent");
static_assert(offsetof(USynthComponent, AttenuationSettings) == 0x000200, "Member 'USynthComponent::AttenuationSettings' has a wrong offset!");
static_assert(offsetof(USynthComponent, AttenuationOverrides) == 0x000208, "Member 'USynthComponent::AttenuationOverrides' has a wrong offset!");
static_assert(offsetof(USynthComponent, ConcurrencySettings) == 0x0005A8, "Member 'USynthComponent::ConcurrencySettings' has a wrong offset!");
static_assert(offsetof(USynthComponent, ConcurrencySet) == 0x0005B0, "Member 'USynthComponent::ConcurrencySet' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundClass) == 0x000600, "Member 'USynthComponent::SoundClass' has a wrong offset!");
static_assert(offsetof(USynthComponent, SourceEffectChain) == 0x000608, "Member 'USynthComponent::SourceEffectChain' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundSubmix) == 0x000610, "Member 'USynthComponent::SoundSubmix' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundSubmixSends) == 0x000618, "Member 'USynthComponent::SoundSubmixSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, BusSends) == 0x000628, "Member 'USynthComponent::BusSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, PreEffectBusSends) == 0x000638, "Member 'USynthComponent::PreEffectBusSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, EnvelopeFollowerAttackTime) == 0x00064C, "Member 'USynthComponent::EnvelopeFollowerAttackTime' has a wrong offset!");
static_assert(offsetof(USynthComponent, EnvelopeFollowerReleaseTime) == 0x000650, "Member 'USynthComponent::EnvelopeFollowerReleaseTime' has a wrong offset!");
static_assert(offsetof(USynthComponent, OnAudioEnvelopeValue) == 0x000658, "Member 'USynthComponent::OnAudioEnvelopeValue' has a wrong offset!");
static_assert(offsetof(USynthComponent, Synth) == 0x000688, "Member 'USynthComponent::Synth' has a wrong offset!");
static_assert(offsetof(USynthComponent, AudioComponent) == 0x000690, "Member 'USynthComponent::AudioComponent' has a wrong offset!");

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
	static void ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	static void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	static void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	static int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	static bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion);
	static void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	static void RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	static void SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	static void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
	static void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Param_Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static float TrimAudioCache(float InMegabytesToFree);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMixerBlueprintLibrary">();
	}
	static class UAudioMixerBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMixerBlueprintLibrary>();
	}
};
static_assert(alignof(UAudioMixerBlueprintLibrary) == 0x000008, "Wrong alignment on UAudioMixerBlueprintLibrary");
static_assert(sizeof(UAudioMixerBlueprintLibrary) == 0x000028, "Wrong size on UAudioMixerBlueprintLibrary");

// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	uint8                                         Pad_CC0[0x80];                                     // 0x0028(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGenerator">();
	}
	static class UAudioGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGenerator>();
	}
};
static_assert(alignof(UAudioGenerator) == 0x000008, "Wrong alignment on UAudioGenerator");
static_assert(sizeof(UAudioGenerator) == 0x0000A8, "Wrong size on UAudioGenerator");

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00E8 (0x0150 - 0x0068)
class USubmixEffectDynamicsProcessorPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_CC1[0x88];                                     // 0x0068(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x00F0(0x0060)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void ResetKey();
	void SetAudioBus(class UAudioBus* AudioBus);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Param_Settings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDynamicsProcessorPreset">();
	}
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDynamicsProcessorPreset>();
	}
};
static_assert(alignof(USubmixEffectDynamicsProcessorPreset) == 0x000008, "Wrong alignment on USubmixEffectDynamicsProcessorPreset");
static_assert(sizeof(USubmixEffectDynamicsProcessorPreset) == 0x000150, "Wrong size on USubmixEffectDynamicsProcessorPreset");
static_assert(offsetof(USubmixEffectDynamicsProcessorPreset, Settings) == 0x0000F0, "Member 'USubmixEffectDynamicsProcessorPreset::Settings' has a wrong offset!");

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectSubmixEQPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_CC2[0x38];                                     // 0x0068(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectSubmixEQSettings          Settings;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectSubmixEQPreset">();
	}
	static class USubmixEffectSubmixEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectSubmixEQPreset>();
	}
};
static_assert(alignof(USubmixEffectSubmixEQPreset) == 0x000008, "Wrong alignment on USubmixEffectSubmixEQPreset");
static_assert(sizeof(USubmixEffectSubmixEQPreset) == 0x0000B0, "Wrong size on USubmixEffectSubmixEQPreset");
static_assert(offsetof(USubmixEffectSubmixEQPreset, Settings) == 0x0000A0, "Member 'USubmixEffectSubmixEQPreset::Settings' has a wrong offset!");

// Class AudioMixer.SubmixEffectReverbPreset
// 0x00A8 (0x0110 - 0x0068)
class USubmixEffectReverbPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_CC3[0x68];                                     // 0x0068(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectReverbSettings            Settings;                                          // 0x00D0(0x0040)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
	void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectReverbPreset">();
	}
	static class USubmixEffectReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectReverbPreset>();
	}
};
static_assert(alignof(USubmixEffectReverbPreset) == 0x000008, "Wrong alignment on USubmixEffectReverbPreset");
static_assert(sizeof(USubmixEffectReverbPreset) == 0x000110, "Wrong size on USubmixEffectReverbPreset");
static_assert(offsetof(USubmixEffectReverbPreset, Settings) == 0x0000D0, "Member 'USubmixEffectReverbPreset::Settings' has a wrong offset!");

// Class AudioMixer.QuartzSubsystem
// 0x0110 (0x0150 - 0x0040)
class UQuartzSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_CC4[0x110];                                    // 0x0040(0x0110)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UQuartzClockHandle* CreateNewClock(const class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
	void DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
	void DeleteClockByName(const class UObject* WorldContextObject, class FName ClockName);
	bool DoesClockExist(const class UObject* WorldContextObject, class FName ClockName);
	float GetAudioRenderThreadToGameThreadAverageLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadMinLatency();
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, class FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedClockRunTime(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(const class UObject* WorldContextObject, class FName ClockName);
	float GetRoundTripAverageLatency(const class UObject* WorldContextObject);
	float GetRoundTripMaxLatency(const class UObject* WorldContextObject);
	float GetRoundTripMinLatency(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject, class FName ClockName);
	bool IsQuartzEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzSubsystem">();
	}
	static class UQuartzSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzSubsystem>();
	}
};
static_assert(alignof(UQuartzSubsystem) == 0x000008, "Wrong alignment on UQuartzSubsystem");
static_assert(sizeof(UQuartzSubsystem) == 0x000150, "Wrong size on UQuartzSubsystem");

// Class AudioMixer.SynthSound
// 0x0020 (0x03E0 - 0x03C0)
class alignas(0x10) USynthSound final : public USoundWaveProcedural
{
public:
	class USynthComponent*                        OwningSynthComponent;                              // 0x03C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_CD1[0x18];                                     // 0x03C8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthSound">();
	}
	static class USynthSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthSound>();
	}
};
static_assert(alignof(USynthSound) == 0x000010, "Wrong alignment on USynthSound");
static_assert(sizeof(USynthSound) == 0x0003E0, "Wrong size on USynthSound");
static_assert(offsetof(USynthSound, OwningSynthComponent) == 0x0003C0, "Member 'USynthSound::OwningSynthComponent' has a wrong offset!");

}

