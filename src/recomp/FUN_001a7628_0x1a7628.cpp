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

// Function: FUN_001a7628
// Address: 0x1a7628 - 0x1a767c
void FUN_001a7628_0x1a7628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7628_0x1a7628");
#endif

    switch (ctx->pc) {
        case 0x1a764cu: goto label_1a764c;
        case 0x1a7678u: goto label_1a7678;
        default: break;
    }

    ctx->pc = 0x1a7628u;

    // 0x1a7628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a762c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a763c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7644: 0xc069cbe  jal         func_1A72F8
    ctx->pc = 0x1A7644u;
    SET_GPR_U32(ctx, 31, 0x1A764Cu);
    ctx->pc = 0x1A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7644u;
    // 0x1a7648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72F8u, 0x1A7644u, 0x1A764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7650: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a7654: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a7654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a7658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a765c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1a765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1a7660: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x1a7660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x1a7664: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1a7664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1a7668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a766c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a766cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1a7670: 0xc069d76  jal         func_1A75D8
    ctx->pc = 0x1A7670u;
    SET_GPR_U32(ctx, 31, 0x1A7678u);
    ctx->pc = 0x1A7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7670u;
    // 0x1a7674: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A75D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A75D8u, 0x1A7670u, 0x1A7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7678u;
label_1a7678:
    // 0x1a7678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a767cu;
}
