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

// Function: FUN_00231c40
// Address: 0x231c40 - 0x231d64
void FUN_00231c40_0x231c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231c40_0x231c40");
#endif

    switch (ctx->pc) {
        case 0x231cb4u: goto label_231cb4;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cd8u: goto label_231cd8;
        case 0x231cf4u: goto label_231cf4;
        case 0x231d04u: goto label_231d04;
        case 0x231d18u: goto label_231d18;
        case 0x231d28u: goto label_231d28;
        case 0x231d38u: goto label_231d38;
        default: break;
    }

    ctx->pc = 0x231c40u;

    // 0x231c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x231c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231c4c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x231c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231c54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x231c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x231c5c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x231c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c60: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x231c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x231c64: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x231c68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x231c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x231c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x231c70: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x231c70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x231c74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x231c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x231c78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x231c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x231c7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x231c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x231c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x231c84: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x231c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x231c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x231c8c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x231c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x231c90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x231c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x231c94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c98: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x231C98u;
    {
        const bool branch_taken_0x231c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c98) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CA0u;
    // 0x231ca0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x231CA0u;
    {
        const bool branch_taken_0x231ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ca0) {
            ctx->pc = 0x231CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CA0u;
            // 0x231ca4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CA8u;
    // 0x231ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cac: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231CACu;
    SET_GPR_U32(ctx, 31, 0x231CB4u);
    ctx->pc = 0x231CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CACu;
    // 0x231cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231CACu, 0x231CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CB4u;
label_231cb4:
    // 0x231cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x231cbc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231CBCu;
    SET_GPR_U32(ctx, 31, 0x231CC4u);
    ctx->pc = 0x231CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CBCu;
    // 0x231cc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231CBCu, 0x231CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC4u;
label_231cc4:
    // 0x231cc4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x231cc8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x231cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x231ccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cd0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231CD0u;
    SET_GPR_U32(ctx, 31, 0x231CD8u);
    ctx->pc = 0x231CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CD0u;
    // 0x231cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231CD0u, 0x231CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CD8u;
label_231cd8:
    // 0x231cd8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD8u;
        // 0x231cdc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CE0u;
label_231ce0:
    // 0x231ce0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x231ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x231ce4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231CE4u;
    {
        const bool branch_taken_0x231ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CE4u;
        // 0x231ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ce4) {
            ctx->pc = 0x231D20u;
            goto label_231d20;
        }
    }
    ctx->pc = 0x231CECu;
    // 0x231cec: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231CECu;
    SET_GPR_U32(ctx, 31, 0x231CF4u);
    ctx->pc = 0x231CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CECu;
    // 0x231cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231CECu, 0x231CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CF4u;
label_231cf4:
    // 0x231cf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cfc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231CFCu;
    SET_GPR_U32(ctx, 31, 0x231D04u);
    ctx->pc = 0x231D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CFCu;
    // 0x231d00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231CFCu, 0x231D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D04u;
label_231d04:
    // 0x231d04: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x231d08: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x231d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x231d0c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x231d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x231d10: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231D10u;
    SET_GPR_U32(ctx, 31, 0x231D18u);
    ctx->pc = 0x231D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D10u;
    // 0x231d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231D10u, 0x231D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D18u;
label_231d18:
    // 0x231d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231D18u;
    {
        const bool branch_taken_0x231d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D18u;
        // 0x231d1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d18) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231D20u;
label_231d20:
    // 0x231d20: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231D20u;
    SET_GPR_U32(ctx, 31, 0x231D28u);
    ctx->pc = 0x231D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D20u;
    // 0x231d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231D20u, 0x231D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D28u;
label_231d28:
    // 0x231d28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d30: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x231D30u;
    SET_GPR_U32(ctx, 31, 0x231D38u);
    ctx->pc = 0x231D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D30u;
    // 0x231d34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x231D30u, 0x231D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D38u;
label_231d38:
    // 0x231d38: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_231d3c:
    // 0x231d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x231d5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x231d5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231d60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x231d64u;
}
