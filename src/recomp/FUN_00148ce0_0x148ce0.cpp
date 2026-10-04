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

// Function: FUN_00148ce0
// Address: 0x148ce0 - 0x148e84
void FUN_00148ce0_0x148ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148ce0_0x148ce0");
#endif

    switch (ctx->pc) {
        case 0x148d6cu: goto label_148d6c;
        case 0x148dccu: goto label_148dcc;
        case 0x148e20u: goto label_148e20;
        case 0x148e70u: goto label_148e70;
        default: break;
    }

    ctx->pc = 0x148ce0u;

    // 0x148ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148cec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148cf0: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x148cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x148cf4: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x148cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x148cf8: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x148CF8u;
    {
        const bool branch_taken_0x148cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CF8u;
        // 0x148cfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cf8) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148D00u;
    // 0x148d00: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x148d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x148d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148d08: 0x24635930  addiu       $v1, $v1, 0x5930
    ctx->pc = 0x148d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22832));
    // 0x148d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148d10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148d14: 0x400008  jr          $v0
    ctx->pc = 0x148D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148D1Cu: goto label_148d1c;
            case 0x148DDCu: goto label_148ddc;
            case 0x148E30u: goto label_148e30;
            case 0x148E7Cu: goto label_148e7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148D1Cu;
label_148d1c:
    // 0x148d1c: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x148d20: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x148D20u;
    {
        const bool branch_taken_0x148d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d20) {
            ctx->pc = 0x148D7Cu;
            goto label_148d7c;
        }
    }
    ctx->pc = 0x148D28u;
    // 0x148d28: 0x90a30016  lbu         $v1, 0x16($a1)
    ctx->pc = 0x148d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x148d2c: 0x90840034  lbu         $a0, 0x34($a0)
    ctx->pc = 0x148d2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x148d30: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x148d34: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x148d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148d3c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x148d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x148d40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x148d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148d44: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x148d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x148d48: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x148d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x148d4c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148d50: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x148d54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148d58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148d5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x148d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148d60: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x148d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x148d64: 0xc044894  jal         func_112250
    ctx->pc = 0x148D64u;
    SET_GPR_U32(ctx, 31, 0x148D6Cu);
    ctx->pc = 0x148D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D64u;
    // 0x148d68: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x148D64u, 0x148D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D6Cu;
label_148d6c:
    // 0x148d6c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x148D6Cu;
    {
        const bool branch_taken_0x148d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d6c) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148D74u;
    // 0x148d74: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x148D74u;
    {
        const bool branch_taken_0x148d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D74u;
        // 0x148d78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d74) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148D7Cu;
label_148d7c:
    // 0x148d7c: 0x90a20016  lbu         $v0, 0x16($a1)
    ctx->pc = 0x148d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x148d80: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x148D80u;
    {
        const bool branch_taken_0x148d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d80) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148D88u;
    // 0x148d88: 0x90850034  lbu         $a1, 0x34($a0)
    ctx->pc = 0x148d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x148d8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x148d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148d90: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x148d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x148d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148d98: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x148d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148d9c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x148d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x148da0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x148da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x148da4: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x148da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x148da8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x148dac: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x148db0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x148db4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x148db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148dbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x148dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148dc0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x148dc4: 0xc044894  jal         func_112250
    ctx->pc = 0x148DC4u;
    SET_GPR_U32(ctx, 31, 0x148DCCu);
    ctx->pc = 0x148DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148DC4u;
    // 0x148dc8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x148DC4u, 0x148DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DCCu;
label_148dcc:
    // 0x148dcc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x148DCCu;
    {
        const bool branch_taken_0x148dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148dcc) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148DD4u;
    // 0x148dd4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x148DD4u;
    {
        const bool branch_taken_0x148dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DD4u;
        // 0x148dd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148dd4) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148DDCu;
label_148ddc:
    // 0x148ddc: 0x90a30016  lbu         $v1, 0x16($a1)
    ctx->pc = 0x148ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x148de0: 0x90840034  lbu         $a0, 0x34($a0)
    ctx->pc = 0x148de0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x148de4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x148de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x148de8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x148de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x148dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148df0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x148df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x148df4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x148df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148df8: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x148df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x148dfc: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x148e00: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148e04: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x148e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x148e08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x148e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148e0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148e10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148e14: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x148e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x148e18: 0xc044894  jal         func_112250
    ctx->pc = 0x148E18u;
    SET_GPR_U32(ctx, 31, 0x148E20u);
    ctx->pc = 0x148E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E18u;
    // 0x148e1c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x148E18u, 0x148E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E20u;
label_148e20:
    // 0x148e20: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x148E20u;
    {
        const bool branch_taken_0x148e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e20) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148E28u;
    // 0x148e28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x148E28u;
    {
        const bool branch_taken_0x148e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E28u;
        // 0x148e2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e28) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148E30u;
label_148e30:
    // 0x148e30: 0x90a30016  lbu         $v1, 0x16($a1)
    ctx->pc = 0x148e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x148e34: 0x90840034  lbu         $a0, 0x34($a0)
    ctx->pc = 0x148e34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x148e38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x148e3c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x148e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148e44: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x148e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x148e48: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x148e4c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148e50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148e54: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x148e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x148e58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x148e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148e5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148e60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148e64: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x148e68: 0xc044894  jal         func_112250
    ctx->pc = 0x148E68u;
    SET_GPR_U32(ctx, 31, 0x148E70u);
    ctx->pc = 0x148E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E68u;
    // 0x148e6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x148E68u, 0x148E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E70u;
label_148e70:
    // 0x148e70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148E70u;
    {
        const bool branch_taken_0x148e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e70) {
            ctx->pc = 0x148E7Cu;
            goto label_148e7c;
        }
    }
    ctx->pc = 0x148E78u;
    // 0x148e78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x148e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148e7c:
    // 0x148e7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x148e84u;
}
