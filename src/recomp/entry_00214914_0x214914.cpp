#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00214914
// Address: 0x214914 - 0x214918
void entry_00214914_0x214914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214914_0x214914");
#endif

    ctx->pc = 0x214914u;

    // 0x214914: 0xaf8291cc  sw          $v0, -0x6E34($gp)
    ctx->pc = 0x214914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
    ctx->pc = 0x214918u;
}
