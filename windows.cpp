#include "pch.h"
#include "windows.h"
#include "ImGui/imgui.h"
#include "CppSDK/SDK/Engine_classes.hpp"
#include "CppSDK/SDK/ShooterGame_classes.hpp"
#include "CppSDK/SDK/BotPawn_classes.hpp"

namespace windows {
    static bool esp_enabled = false;
    static bool infinite_ammo = false;
    static bool god_mode = false;

    void render_menu()
    {
        static bool inited = false;
        if (!inited) {
            ImGui::SetNextWindowPos({ 0, 0 });
            inited = true;
        }

        ImGui::Begin("by xxs");
        ImGui::Checkbox("ESP", &esp_enabled);
        ImGui::Checkbox("InfiniteAmmo", &infinite_ammo);
        ImGui::Checkbox("GodMode", &god_mode);
        ImGui::End();

        // hack
        auto world = SDK::UWorld::GetWorld();
        if (!world)
            return;

        auto game_instance = world->OwningGameInstance;
        if (!game_instance)
            return;

        auto local_players = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers;
        if (!local_players)
            return;

        if (infinite_ammo) {
            if (local_players.Num() == 1)
                static_cast<SDK::AShooterPlayerController*>(local_players[0]->PlayerController)->bInfiniteAmmo = 1;
        }

        if (god_mode) {
            if (local_players.Num() == 1)
                static_cast<SDK::AShooterPlayerController*>(local_players[0]->PlayerController)->bGodMode = 1;
        }
    }

    void render_esp()
    {
        // hack
        auto world = SDK::UWorld::GetWorld();
        if (!world)
            return;

        auto game_instance = world->OwningGameInstance;
        if (!game_instance)
            return;

        auto local_players = game_instance->LocalPlayers;
        if (!local_players)
            return;

        if (local_players.Num() != 1 || esp_enabled == false)
            return;

        RECT rt;
        if (!GetWindowRect(FindWindow(NULL, L"ImGui Host"), &rt))
            return;

        ImGui::SetNextWindowPos(ImVec2(rt.left, rt.top), ImGuiCond_Always);
        ImGui::SetNextWindowSize(ImVec2((float)(rt.right - rt.left), (float)(rt.bottom - rt.top)), ImGuiCond_Always);
        ImGui::Begin(" ", (bool*)true,
            ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoInputs);

        auto window_pos = ImGui::GetCursorScreenPos();
        auto actors = world->PersistentLevel->Actors;
        for (const auto& item : actors) {
            if (item && item->IsA(SDK::ABotPawn_C::StaticClass())) {
                auto actor = reinterpret_cast<SDK::AShooterCharacter*>(item);
                if (actor->Health > 0) {
                    // draw box
                    auto world_pos = actor->RootComponent->RelativeLocation;
                    SDK::FVector2D screen_pos;

                    //auto distance = local_players[0]->PlayerController->Pawn->RootComponent->RelativeLocation.GetDistanceTo(
                    //    actor->RootComponent->RelativeLocation);

                    if (local_players[0]->PlayerController->ProjectWorldLocationToScreen(world_pos, &screen_pos, false))
                        ImGui::GetWindowDrawList()->AddRect({window_pos.x + screen_pos.X - 10, window_pos.y + screen_pos.Y - 10 }, { window_pos.x + screen_pos.X + 10, window_pos.y + screen_pos.Y + 10 }, ImColor(1.f, 0.f, 0.f, 1.f), 0.0f, 0, 2.0f);
                }
            }
        }
        ImGui::End();
    }
};