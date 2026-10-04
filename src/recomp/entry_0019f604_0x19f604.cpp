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

// Function: entry_0019f604
// Address: 0x19f604 - 0x19f658
void entry_0019f604_0x19f604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f604_0x19f604");
#endif

    switch (ctx->pc) {
        case 0x19f620u: goto label_19f620;
        default: break;
    }

    ctx->pc = 0x19f604u;

    // 0x19f604: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f608: 0x26255910  addiu       $a1, $s1, 0x5910
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22800));
    // 0x19f60c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19f610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f614: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f618: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F618u;
    SET_GPR_U32(ctx, 31, 0x19F620u);
    ctx->pc = 0x19F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F618u;
    // 0x19f61c: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F618u, 0x19F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F620u;
label_19f620:
    // 0x19f620: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f624: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f628: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f62c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x19f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x19f630: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x19f630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x19f634: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
    // 0x19f638: 0x121023  negu        $v0, $s2
    ctx->pc = 0x19f638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x19f63c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f644: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f648: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f650: 0x3e00008  jr          $ra
    ctx->pc = 0x19F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F650u;
        // 0x19f654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F658u;
}
