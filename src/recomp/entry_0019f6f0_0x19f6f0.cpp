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

// Function: entry_0019f6f0
// Address: 0x19f6f0 - 0x19f748
void entry_0019f6f0_0x19f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6f0_0x19f6f0");
#endif

    switch (ctx->pc) {
        case 0x19f71cu: goto label_19f71c;
        default: break;
    }

    ctx->pc = 0x19f6f0u;

    // 0x19f6f0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x19f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x19f6f4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x19f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x19f6f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19f6fc: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x19f700: 0x26425910  addiu       $v0, $s2, 0x5910
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22800));
    // 0x19f704: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19f708: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19f70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f710: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f714: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F714u;
    SET_GPR_U32(ctx, 31, 0x19F71Cu);
    ctx->pc = 0x19F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F714u;
    // 0x19f718: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F714u, 0x19F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F71Cu;
label_19f71c:
    // 0x19f71c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f720: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f724: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f728: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x19f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x19f72c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x19f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x19f730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f738: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f740: 0x3e00008  jr          $ra
    ctx->pc = 0x19F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F740u;
        // 0x19f744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F748u;
}
