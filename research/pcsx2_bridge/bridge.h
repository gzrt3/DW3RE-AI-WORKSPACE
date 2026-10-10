// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once
#include <stdint.h>
#if defined(_WIN32) && defined(DW3_GS_BUILD)
#define DW3_GS_API __declspec(dllexport)
#elif defined(_WIN32)
#define DW3_GS_API __declspec(dllimport)
#else
#define DW3_GS_API
#endif
#ifdef __cplusplus
extern "C" {
#endif
// Renderer 0 selects Vulkan (primary); 11 selects D3D11; 12 selects D3D12.
DW3_GS_API int dw3_gs_open(const char* resources, const char* writable_data, int renderer);
DW3_GS_API int dw3_gs_close(void);
DW3_GS_API int dw3_gs_reset(void);
DW3_GS_API int dw3_gs_registers(const void* registers, uint32_t bytes);
DW3_GS_API int dw3_gs_freeze(int action, void* data, uint32_t* bytes);
DW3_GS_API int dw3_gs_gif_ordered(const void* data, uint32_t bytes);
DW3_GS_API int dw3_gs_vsync(uint32_t field);
DW3_GS_API int dw3_gs_poll(void);
DW3_GS_API int dw3_gs_fifo(void* data, uint32_t bytes);
// Snapshot returns 1 when no GS output exists yet, -1 for an actual error.
// Otherwise returns top-down RGBA8, tightly packed, original aspect corrected.
DW3_GS_API int dw3_gs_snapshot(void* pixels, uint32_t capacity, uint32_t* width, uint32_t* height);
DW3_GS_API const char* dw3_gs_error(void);
DW3_GS_API uint32_t dw3_gs_abi_version(void);
#ifdef __cplusplus
}
#endif
