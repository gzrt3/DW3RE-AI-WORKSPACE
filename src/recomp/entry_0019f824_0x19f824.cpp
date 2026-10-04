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

// Function: entry_0019f824
// Address: 0x19f824 - 0x19f898
void entry_0019f824_0x19f824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f824_0x19f824");
#endif

    switch (ctx->pc) {
        case 0x19f86cu: goto label_19f86c;
        default: break;
    }

    ctx->pc = 0x19f824u;

    // 0x19f824: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f828: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x19f82c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f830: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x19f830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x19f834: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x19f834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x19f838: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f83c: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x19f83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x19f840: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x19f844: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19f844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x19f848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f84c: 0x26625910  addiu       $v0, $s3, 0x5910
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f850: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x19f854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f858: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x19f85c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f864: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F864u;
    SET_GPR_U32(ctx, 31, 0x19F86Cu);
    ctx->pc = 0x19F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F864u;
    // 0x19f868: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F864u, 0x19F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F86Cu;
label_19f86c:
    // 0x19f86c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f874: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f878: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x19f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    // 0x19f87c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f880: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f890: 0x3e00008  jr          $ra
    ctx->pc = 0x19F890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F890u;
        // 0x19f894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F898u;
}
