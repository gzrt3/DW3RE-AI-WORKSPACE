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

// Function: FUN_00235188
// Address: 0x235188 - 0x2351b8
void FUN_00235188_0x235188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235188_0x235188");
#endif

    ctx->pc = 0x235188u;

    // 0x235188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23518c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235194: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x235198: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23519c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23519cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2351a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2351a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2351a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2351a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2351acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351b0: 0x808d3e8  j           func_234FA0
    ctx->pc = 0x2351B0u;
    ctx->pc = 0x2351B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351B0u;
    // 0x2351b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    FUN_00234fa0_0x234fa0(rdram, ctx, runtime); return;
    ctx->pc = 0x2351B8u;
}
