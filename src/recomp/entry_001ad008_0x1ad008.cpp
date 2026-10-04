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

// Function: entry_001ad008
// Address: 0x1ad008 - 0x1ad04c
void entry_001ad008_0x1ad008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad008_0x1ad008");
#endif

    switch (ctx->pc) {
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad048u: goto label_1ad048;
        default: break;
    }

    ctx->pc = 0x1ad008u;

    // 0x1ad008: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
    // 0x1ad00c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1ad00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x1ad010: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1ad010u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x1ad014: 0x40f  sync.p
    ctx->pc = 0x1ad014u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ad018: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad01c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AD01Cu;
    {
        const bool branch_taken_0x1ad01c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ad01c) {
            ctx->pc = 0x1AD020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD01Cu;
            // 0x1ad020: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD084u;
            return;
        }
    }
    ctx->pc = 0x1AD024u;
    // 0x1ad024: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1ad028: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1ad02c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD02Cu;
    {
        const bool branch_taken_0x1ad02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad02c) {
            ctx->pc = 0x1AD04Cu;
            return;
        }
    }
    ctx->pc = 0x1AD034u;
    // 0x1ad034: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1ad038: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1AD038u;
    SET_GPR_U32(ctx, 31, 0x1AD040u);
    ctx->pc = 0x1AD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD038u;
    // 0x1ad03c: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1AD038u, 0x1AD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD040u;
label_1ad040:
    // 0x1ad040: 0xc06b6b4  jal         func_1ADAD0
    ctx->pc = 0x1AD040u;
    SET_GPR_U32(ctx, 31, 0x1AD048u);
    ctx->pc = 0x1AD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD040u;
    // 0x1ad044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAD0u, 0x1AD040u, 0x1AD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD048u;
label_1ad048:
    // 0x1ad048: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1ad04cu;
}
