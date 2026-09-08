#include "ps2_runtime.h"

#include <raylib.h>

#include <cmath>

// MAP ONLY does not execute guest code, so it needs no generated function table.
extern const uint32_t g_ps2RecompiledFunctionTableBase = 0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 0;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[] = {nullptr};

namespace
{
struct SmokeState
{
    Camera3D camera{};
    float angle = 0.0f;
};

void smokeInit(PS2Runtime &, void *userData)
{
    auto &state = *static_cast<SmokeState *>(userData);
    state.camera.position = {8.0f, 6.0f, 8.0f};
    state.camera.target = {0.0f, 1.0f, 0.0f};
    state.camera.up = {0.0f, 1.0f, 0.0f};
    state.camera.fovy = 45.0f;
    state.camera.projection = CAMERA_PERSPECTIVE;
}

void smokeDraw(PS2Runtime &, void *userData)
{
    auto &state = *static_cast<SmokeState *>(userData);
    state.angle += GetFrameTime();

    const float radius = 10.0f;
    state.camera.position = {
        std::cos(state.angle * 0.35f) * radius,
        6.0f,
        std::sin(state.angle * 0.35f) * radius};

    BeginMode3D(state.camera);
    DrawGrid(20, 1.0f);
    DrawCube({0.0f, 1.0f, 0.0f}, 2.0f, 2.0f, 2.0f, BLUE);
    DrawCubeWires({0.0f, 1.0f, 0.0f}, 2.0f, 2.0f, 2.0f, SKYBLUE);
    EndMode3D();

    DrawText("PHASE 41C-D2 MAP ONLY", 20, 20, 24, RAYWHITE);
    DrawText("PS2Runtime / raylib graphical host smoke test", 20, 52, 18, LIGHTGRAY);
}

void smokeShutdown(PS2Runtime &, void *) {}
}

int main()
{
    SmokeState state;
    PS2Runtime runtime;
    runtime.setDebugUiCallbacks(smokeInit, smokeDraw, smokeShutdown, &state);

    if (!runtime.initialize("PS2Runtime - MAP ONLY Smoke Test"))
    {
        return 1;
    }

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground({24, 28, 38, 255});
        smokeDraw(runtime, &state);
        EndDrawing();
    }

    return 0;
}
