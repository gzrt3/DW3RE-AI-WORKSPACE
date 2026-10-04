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

// Function: entry_00223d44
// Address: 0x223d44 - 0x223d80
void entry_00223d44_0x223d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223d44_0x223d44");
#endif

    switch (ctx->pc) {
        case 0x223d50u: goto label_223d50;
        default: break;
    }

    ctx->pc = 0x223d44u;

    // 0x223d44: 0x0  nop
    ctx->pc = 0x223d44u;
    // NOP
    // 0x223d48: 0xc088d14  jal         func_223450
    ctx->pc = 0x223D48u;
    SET_GPR_U32(ctx, 31, 0x223D50u);
    ctx->pc = 0x223D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D48u;
    // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223450u, 0x223D48u, 0x223D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D50u;
label_223d50:
    // 0x223d50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223d54: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d54) {
            ctx->pc = 0x223D80u;
            return;
        }
    }
    ctx->pc = 0x223D5Cu;
    // 0x223d5c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x223d60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x223d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x223d64: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D80u;
            return;
        }
    }
    ctx->pc = 0x223D6Cu;
    // 0x223d6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x223D6Cu;
    {
        const bool branch_taken_0x223d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d6c) {
            ctx->pc = 0x223D80u;
            return;
        }
    }
    ctx->pc = 0x223D74u;
    // 0x223d74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D80u;
            return;
        }
    }
    ctx->pc = 0x223D7Cu;
    // 0x223d7c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x223d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
    ctx->pc = 0x223d80u;
}
