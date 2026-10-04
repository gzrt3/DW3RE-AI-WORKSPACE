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

// Function: FUN_001ce810
// Address: 0x1ce810 - 0x1ce830
void FUN_001ce810_0x1ce810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce810_0x1ce810");
#endif

    ctx->pc = 0x1ce810u;

    // 0x1ce810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ce814: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ce818: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ce818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ce81c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ce820: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ce820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ce824: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ce824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ce828: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ce828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ce82c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1ce830u;
}
