#pragma once

#include <windows.h>
#include <d3d11.h>

class ImGuiWrapper
{
public:
    static void run();

private:
    static ID3D11Device* pd3dDevice;
    static ID3D11DeviceContext* pd3dDeviceContext;
    static IDXGISwapChain* pSwapChain;
    static ID3D11RenderTargetView* pMainRenderTargetView;

    static bool CreateDeviceD3D(HWND hwnd);
    static void CleanupDeviceD3D();
    static bool CreateRenderTarget();
    static void CleanupRenderTarget();
    static LRESULT WINAPI WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
};