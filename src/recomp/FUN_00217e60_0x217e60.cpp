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

// Function: FUN_00217e60
// Address: 0x217e60 - 0x217e7c
void FUN_00217e60_0x217e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00217e60_0x217e60");
#endif

    ctx->pc = 0x217e60u;

    // 0x217e60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x217e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x217e64: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x217e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x217e68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x217e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x217e6c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x217e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x217e70: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x217e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x217e74: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x217e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217e78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x217e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x217e7cu;
}
