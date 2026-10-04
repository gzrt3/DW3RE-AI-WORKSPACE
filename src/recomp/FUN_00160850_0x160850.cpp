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

// Function: FUN_00160850
// Address: 0x160850 - 0x160878
void FUN_00160850_0x160850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160850_0x160850");
#endif

    ctx->pc = 0x160850u;

    // 0x160850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x160854: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x160858: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16085c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x160860: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x160864: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x160868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16086c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160874: 0x24635688  addiu       $v1, $v1, 0x5688
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22152));
    ctx->pc = 0x160878u;
}
