#pragma once

class PS2Runtime;

namespace fate {
enum class LiveExit { GuestStopped, WindowClosed, Deadline };

// Runs the already prepared scheduler on its original executor thread. Zero
// duration leaves observation open until close or guest stop. This is a
// cooperative diagnostic deadline, not a watchdog for non-yielding guest code.
LiveExit run_native_live(PS2Runtime& runtime, unsigned seconds = 0);
}
