#pragma once

#include <cstdint>
#include <string>

class PS2Runtime;

namespace fate {
enum class LiveExit { GuestStopped, WindowClosed, Deadline };
enum class HostVSync { Off, On };
enum class HostRenderer { Auto, Direct3D11, Direct3D12, Software };

struct PresenterOptions {
    HostRenderer renderer = HostRenderer::Auto;
    bool verify_first_upload = false;
    const char* diagnostic_title = nullptr;
};

struct PresenterReport {
    HostVSync requested_vsync = HostVSync::Off;
    // SDL may implement this mode with software pacing. It does not certify
    // physical monitor synchronization, VRR, or a different guest frame rate.
    bool sdl_vsync_enabled = false;
    bool software_renderer = false;
    std::string renderer;
    uint64_t observations = 0;
    uint64_t presentations = 0;
    uint64_t verified_upload_pixels = 0;
    std::string gs_frame_state;
    uint64_t pmode = 0, dispfb1 = 0, display1 = 0, dispfb2 = 0, display2 = 0;
};

// Runs the already prepared scheduler on its original executor thread. Zero
// duration leaves observation open until close or guest stop. This is a
// cooperative diagnostic deadline, not a watchdog for non-yielding guest code.
LiveExit run_native_live(PS2Runtime& runtime, unsigned seconds = 0,
    HostVSync vsync = HostVSync::Off, PresenterReport* report = nullptr,
    const PresenterOptions& options = {});
}
