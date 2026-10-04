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

// Function: entry_00214df4
// Address: 0x214df4 - 0x214e48
void entry_00214df4_0x214df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214df4_0x214df4");
#endif

    switch (ctx->pc) {
        case 0x214e1cu: goto label_214e1c;
        case 0x214e38u: goto label_214e38;
        default: break;
    }

    ctx->pc = 0x214df4u;

    // 0x214df4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x214df8: 0x778021  addu        $s0, $v1, $s7
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x214dfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214e00: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x214e00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x214e04: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214EB0u;
            return;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x214e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x214e10: 0x8c318c30  lw          $s1, -0x73D0($at)
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937648)));
    // 0x214e14: 0xc070080  jal         func_1C0200
    ctx->pc = 0x214E14u;
    SET_GPR_U32(ctx, 31, 0x214E1Cu);
    ctx->pc = 0x214E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E14u;
    // 0x214e18: 0x24054800  addiu       $a1, $zero, 0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x214E14u, 0x214E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E1Cu;
label_214e1c:
    // 0x214e1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214e20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x214e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x214e28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x214e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214e30: 0xc041744  jal         func_105D10
    ctx->pc = 0x214E30u;
    SET_GPR_U32(ctx, 31, 0x214E38u);
    ctx->pc = 0x214E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E30u;
    // 0x214e34: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x214E30u, 0x214E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E38u;
label_214e38:
    // 0x214e38: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214e48u;
}
