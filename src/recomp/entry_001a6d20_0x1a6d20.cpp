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

// Function: entry_001a6d20
// Address: 0x1a6d20 - 0x1a6d68
void entry_001a6d20_0x1a6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6d20_0x1a6d20");
#endif

    switch (ctx->pc) {
        case 0x1a6d60u: goto label_1a6d60;
        default: break;
    }

    ctx->pc = 0x1a6d20u;

    // 0x1a6d20: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6D20u;
    {
        const bool branch_taken_0x1a6d20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d20) {
            ctx->pc = 0x1A6D68u;
            return;
        }
    }
    ctx->pc = 0x1A6D28u;
    // 0x1a6d28: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6d2c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1a6d30: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1a6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x1a6d34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6d38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a6d3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a6d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6d44: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1a6d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1a6d48: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1a6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1a6d4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1a6d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6D50u;
    {
        const bool branch_taken_0x1a6d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D50u;
        // 0x1a6d54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d50) {
            ctx->pc = 0x1A6D74u;
            return;
        }
    }
    ctx->pc = 0x1A6D58u;
    // 0x1a6d58: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A6D58u;
    SET_GPR_U32(ctx, 31, 0x1A6D60u);
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A6D58u, 0x1A6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6D78u;
            return;
        }
    }
    ctx->pc = 0x1A6D68u;
}
