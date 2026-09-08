#include "ps2_runtime.h"

#include <raylib.h>
#include <raymath.h>

#include <algorithm>
#include <cmath>

// This visual debugger never executes guest code, but ps2_runtime still exposes
// the generated table symbols as part of its public link contract.
extern const uint32_t g_ps2RecompiledFunctionTableBase = 0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 0;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[] = {nullptr};

namespace
{
constexpr Vector3 kZhangJiao{39000.0f, -5000.0f, 37500.0f};
constexpr Vector3 kOrigin{0.0f, 0.0f, 0.0f};
constexpr float kGroundY = -5000.0f;
constexpr float kCameraPanSpeed = 200.0f;       // millimeters per second
constexpr float kCameraZoomSpeed = 300.0f;      // millimeters per second
constexpr float kMouseOrbitSensitivity = 0.003f; // radians per pixel
constexpr float kWheelZoomStep = 250.0f;         // millimeters per wheel notch
constexpr float kMinimumOrbitDistance = 500.0f;
constexpr float kMaximumOrbitDistance = 12000.0f;
constexpr float kMaximumOrbitPitch = 1.45f;

struct DebugState
{
    Camera3D camera{};
    Vector3 resetPosition{};
    Vector3 resetTarget{};
    float orbitYaw = 0.0f;
    float orbitPitch = 0.0f;
    float orbitDistance = 2500.0f;
    bool showGrid = true;
    bool showAxes = true;
    bool showMarkers = true;
    bool showOverlay = true;
};

void resetCamera(DebugState &state)
{
    state.camera.target = kZhangJiao;
    state.camera.up = {0.0f, 1.0f, 0.0f};
    state.camera.fovy = 45.0f;
    state.camera.projection = CAMERA_PERSPECTIVE;
    state.orbitYaw = 0.0f;
    state.orbitPitch = 0.65f;
    state.orbitDistance = 2500.0f;
    state.camera.position = {
        state.camera.target.x,
        state.camera.target.y + std::sin(state.orbitPitch) * state.orbitDistance,
        state.camera.target.z + std::cos(state.orbitPitch) * state.orbitDistance};
    state.resetPosition = state.camera.position;
    state.resetTarget = state.camera.target;
}

void debugInit(PS2Runtime &, void *userData)
{
    resetCamera(*static_cast<DebugState *>(userData));
}

void drawAxes(Vector3 center, float length)
{
    DrawLine3D(center, {center.x + length, center.y, center.z}, RED);
    DrawLine3D(center, {center.x, center.y + length, center.z}, GREEN);
    DrawLine3D(center, {center.x, center.y, center.z + length}, BLUE);
}

void drawBoundingBox()
{
    // D1 documented stage footprint, retained in millimeters.
    const BoundingBox box{{-69.6f, -9933.5f, -1315.0f},
                          {76250.0f, 67.2f, 76500.0f}};
    DrawBoundingBox(box, Fade(ORANGE, 0.8f));
}

void updateCamera(DebugState &state)
{
    const float deltaTime = GetFrameTime();
    Vector3 forward = Vector3Normalize(Vector3Subtract(state.camera.target, state.camera.position));
    Vector3 right = Vector3Normalize(Vector3CrossProduct(forward, state.camera.up));
    Vector3 move{};

    if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) move = Vector3Add(move, forward);
    if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) move = Vector3Subtract(move, forward);
    if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) move = Vector3Add(move, right);
    if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) move = Vector3Subtract(move, right);
    if (IsKeyDown(KEY_E)) state.orbitDistance += kCameraZoomSpeed * deltaTime;
    if (IsKeyDown(KEY_Q)) state.orbitDistance -= kCameraZoomSpeed * deltaTime;

    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
    {
        const Vector2 mouseDelta = GetMouseDelta();
        state.orbitYaw -= mouseDelta.x * kMouseOrbitSensitivity;
        state.orbitPitch = std::clamp(state.orbitPitch - mouseDelta.y * kMouseOrbitSensitivity,
                                      -kMaximumOrbitPitch, kMaximumOrbitPitch);
    }

    state.orbitDistance -= GetMouseWheelMove() * kWheelZoomStep;
    state.orbitDistance = std::clamp(state.orbitDistance,
                                     kMinimumOrbitDistance, kMaximumOrbitDistance);

    if (Vector3Length(move) > 0.0f)
    {
        move = Vector3Scale(Vector3Normalize(move), kCameraPanSpeed * deltaTime);
        state.camera.position = Vector3Add(state.camera.position, move);
        state.camera.target = Vector3Add(state.camera.target, move);
    }

    if (IsKeyPressed(KEY_R))
    {
        state.camera.position = state.resetPosition;
        state.camera.target = state.resetTarget;
    }
    if (IsKeyPressed(KEY_F1)) state.showGrid = !state.showGrid;
    if (IsKeyPressed(KEY_F2)) state.showAxes = !state.showAxes;
    if (IsKeyPressed(KEY_F3)) state.showMarkers = !state.showMarkers;
    if (IsKeyPressed(KEY_F4)) state.showOverlay = !state.showOverlay;

    state.camera.position = {
        state.camera.target.x + std::cos(state.orbitPitch) * std::sin(state.orbitYaw) * state.orbitDistance,
        state.camera.target.y + std::sin(state.orbitPitch) * state.orbitDistance,
        state.camera.target.z + std::cos(state.orbitPitch) * std::cos(state.orbitYaw) * state.orbitDistance};
}

void debugDraw(PS2Runtime &, void *userData)
{
    auto &state = *static_cast<DebugState *>(userData);
    updateCamera(state);

    BeginMode3D(state.camera);
    if (state.showGrid)
    {
        DrawGrid(20, 500.0f);
    }
    if (state.showAxes)
    {
        drawAxes(kZhangJiao, 5000.0f);
        drawAxes(kOrigin, 5000.0f);
        DrawLine3D({kOrigin.x, kGroundY, kOrigin.z},
                   {kOrigin.x + 5000.0f, kGroundY, kOrigin.z},
                   PURPLE);
    }
    drawBoundingBox();

    if (state.showMarkers)
    {
        DrawSphere(kZhangJiao, 750.0f, GOLD);
        DrawSphereWires(kZhangJiao, 750.0f, 12, 8, ORANGE);
        DrawSphere(kOrigin, 500.0f, MAGENTA);
        DrawSphere({kOrigin.x, kGroundY, kOrigin.z}, 500.0f, GRAY);
    }
    EndMode3D();

    if (state.showMarkers)
    {
        DrawText("Zhang Jiao (marker)", 20, 92, 20, GOLD);
        DrawText("Origin", 20, 118, 18, MAGENTA);
        DrawText("Ground reference Y = -5000 mm", 20, 142, 18, LIGHTGRAY);
    }

    if (state.showOverlay)
    {
        DrawRectangle(15, 165, 365, 205, Fade(BLACK, 0.68f));
        DrawText("DW3RE VISUAL DEBUGGER", 28, 178, 22, RAYWHITE);
        DrawText("Stage: He Fei Castle", 28, 208, 18, LIGHTGRAY);
        DrawText("StageID: 18", 28, 232, 18, LIGHTGRAY);
        DrawText(TextFormat("Camera X: %.1f", state.camera.position.x), 28, 260, 16, RAYWHITE);
        DrawText(TextFormat("Camera Y: %.1f", state.camera.position.y), 28, 282, 16, RAYWHITE);
        DrawText(TextFormat("Camera Z: %.1f", state.camera.position.z), 28, 304, 16, RAYWHITE);
        DrawText("World units: millimeters", 28, 330, 16, LIGHTGRAY);
        DrawText("Renderer: raylib   Mode: MAP DEBUG", 28, 352, 16, LIGHTGRAY);
    }

    DrawText("Drag mouse orbit | wheel/Q/E zoom | WASD/arrows pan | R reset | F1-F4", 20,
             GetScreenHeight() - 28, 16, LIGHTGRAY);
}

void debugShutdown(PS2Runtime &, void *) {}
}

int main()
{
    DebugState state;
    PS2Runtime runtime;
    runtime.setDebugUiCallbacks(debugInit, debugDraw, debugShutdown, &state);

    if (!runtime.initialize("DW3RE VISUAL DEBUGGER"))
    {
        return 1;
    }

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground({18, 22, 30, 255});
        debugDraw(runtime, &state);
        EndDrawing();
    }

    return 0;
}
