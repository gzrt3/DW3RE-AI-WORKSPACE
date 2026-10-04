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

// Function: FUN_0015ff40
// Address: 0x15ff40 - 0x15ff50
void FUN_0015ff40_0x15ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ff40_0x15ff40");
#endif

    ctx->pc = 0x15ff40u;

    // 0x15ff40: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x15ff44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x15ff48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15ff4c: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15ff4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
    ctx->pc = 0x15ff50u;
}
