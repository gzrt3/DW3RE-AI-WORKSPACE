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

// Function: entry_00219f88
// Address: 0x219f88 - 0x219f90
void entry_00219f88_0x219f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f88_0x219f88");
#endif

    ctx->pc = 0x219f88u;

    // 0x219f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x219f90u;
}
