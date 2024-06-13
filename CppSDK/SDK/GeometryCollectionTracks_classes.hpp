#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCollectionTracks

#include "Basic.hpp"

#include "GeometryCollectionTracks_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x0030 (0x0118 - 0x00E8)
class UMovieSceneGeometryCollectionSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams    Params;                                            // 0x00E8(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCollectionSection">();
	}
	static class UMovieSceneGeometryCollectionSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCollectionSection>();
	}
};
static_assert(alignof(UMovieSceneGeometryCollectionSection) == 0x000008, "Wrong alignment on UMovieSceneGeometryCollectionSection");
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x000118, "Wrong size on UMovieSceneGeometryCollectionSection");
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x0000E8, "Member 'UMovieSceneGeometryCollectionSection::Params' has a wrong offset!");

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneGeometryCollectionTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_109E[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             AnimationSections;                                 // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCollectionTrack">();
	}
	static class UMovieSceneGeometryCollectionTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCollectionTrack>();
	}
};
static_assert(alignof(UMovieSceneGeometryCollectionTrack) == 0x000008, "Wrong alignment on UMovieSceneGeometryCollectionTrack");
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x0000A8, "Wrong size on UMovieSceneGeometryCollectionTrack");
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x000098, "Member 'UMovieSceneGeometryCollectionTrack::AnimationSections' has a wrong offset!");

}

