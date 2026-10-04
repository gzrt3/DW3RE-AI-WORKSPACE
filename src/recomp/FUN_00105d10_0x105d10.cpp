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

// Function: FUN_00105d10
// Address: 0x105d10 - 0x105d20
void FUN_00105d10_0x105d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105d10_0x105d10");
#endif

    ctx->pc = 0x105d10u;

    // 0x105d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x105d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x105d14: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x105d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x105d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x105d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x105d1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x105d20u;
}
