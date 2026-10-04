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

// Function: entry_00170e44
// Address: 0x170e44 - 0x170e50
void entry_00170e44_0x170e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e44_0x170e44");
#endif

    ctx->pc = 0x170e44u;

    // 0x170e44: 0x0  nop
    ctx->pc = 0x170e44u;
    // NOP
    // 0x170e48: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x170e4c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x170e50u;
}
