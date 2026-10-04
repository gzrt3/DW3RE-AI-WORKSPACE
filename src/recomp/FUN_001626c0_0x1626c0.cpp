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

// Function: FUN_001626c0
// Address: 0x1626c0 - 0x1626dc
void FUN_001626c0_0x1626c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001626c0_0x1626c0");
#endif

    ctx->pc = 0x1626c0u;

    // 0x1626c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1626c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1626c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1626c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1626cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1626d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1626d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1626d4: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
    // 0x1626d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1626d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1626dcu;
}
