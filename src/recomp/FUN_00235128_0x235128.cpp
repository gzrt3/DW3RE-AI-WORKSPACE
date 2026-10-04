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

// Function: FUN_00235128
// Address: 0x235128 - 0x235158
void FUN_00235128_0x235128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235128_0x235128");
#endif

    ctx->pc = 0x235128u;

    // 0x235128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23512c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23512cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235134: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x235138: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23513c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23513cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235144: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x235148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23514c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235150: 0x808d3e8  j           func_234FA0
    ctx->pc = 0x235150u;
    ctx->pc = 0x235154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235150u;
    // 0x235154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    FUN_00234fa0_0x234fa0(rdram, ctx, runtime); return;
    ctx->pc = 0x235158u;
}
