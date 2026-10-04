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

// Function: FUN_00206650
// Address: 0x206650 - 0x206668
void FUN_00206650_0x206650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206650_0x206650");
#endif

    ctx->pc = 0x206650u;

    // 0x206650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x206654: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x206658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20665c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x206664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x206668u;
}
