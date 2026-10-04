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

// Function: entry_00199ed8
// Address: 0x199ed8 - 0x199f24
void entry_00199ed8_0x199ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199ed8_0x199ed8");
#endif

    switch (ctx->pc) {
        case 0x199ef8u: goto label_199ef8;
        default: break;
    }

    ctx->pc = 0x199ed8u;

    // 0x199ed8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199edc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199ee0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199ee4: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x199ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x199ee8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x199ee8u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x199eec: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x199eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ef0: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x199EF0u;
    SET_GPR_U32(ctx, 31, 0x199EF8u);
    ctx->pc = 0x199EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EF0u;
    // 0x199ef4: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x199EF0u, 0x199EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EF8u;
label_199ef8:
    // 0x199ef8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x199efc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199f00: 0x246357e0  addiu       $v1, $v1, 0x57E0
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22496));
    // 0x199f04: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x199f08: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x199f08u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2857E0u));
    // 0x199f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199f10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199f14: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x199f14u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199f18: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x199f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x199f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f20: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x199f20u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 5));
    ctx->pc = 0x199f24u;
}
