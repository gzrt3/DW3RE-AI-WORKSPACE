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

// Function: FUN_001cf9a0
// Address: 0x1cf9a0 - 0x1cf9b8
void FUN_001cf9a0_0x1cf9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf9a0_0x1cf9a0");
#endif

    ctx->pc = 0x1cf9a0u;

    // 0x1cf9a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cf9a4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1cf9a8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cf9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1cf9ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cf9b0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cf9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1cf9b4: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    ctx->pc = 0x1cf9b8u;
}
