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

// Function: entry_00170298
// Address: 0x170298 - 0x17029c
void entry_00170298_0x170298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170298_0x170298");
#endif

    ctx->pc = 0x170298u;

    // 0x170298: 0xaf828730  sw          $v0, -0x78D0($gp)
    ctx->pc = 0x170298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 2));
    ctx->pc = 0x17029cu;
}
