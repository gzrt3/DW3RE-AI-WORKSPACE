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

// Function: FUN_00233c30
// Address: 0x233c30 - 0x233d54
void FUN_00233c30_0x233c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233c30_0x233c30");
#endif

    switch (ctx->pc) {
        case 0x233ca4u: goto label_233ca4;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cc8u: goto label_233cc8;
        case 0x233ce4u: goto label_233ce4;
        case 0x233cf4u: goto label_233cf4;
        case 0x233d08u: goto label_233d08;
        case 0x233d18u: goto label_233d18;
        case 0x233d28u: goto label_233d28;
        default: break;
    }

    ctx->pc = 0x233c30u;

    // 0x233c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233c3c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x233c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x233c4c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x233c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c50: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x233c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x233c54: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x233c58: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x233c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x233c5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233c60: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x233c60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x233c64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x233c68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x233c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x233c6c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x233c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x233c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x233c74: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x233c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233c7c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x233c7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x233c80: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x233c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x233c84: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x233c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c88: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x233C88u;
    {
        const bool branch_taken_0x233c88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C88u;
        // 0x233c8c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c88) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233C90u;
    // 0x233c90: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x233C90u;
    {
        const bool branch_taken_0x233c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233c90) {
            ctx->pc = 0x233C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C90u;
            // 0x233c94: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233CD0u;
            goto label_233cd0;
        }
    }
    ctx->pc = 0x233C98u;
    // 0x233c98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c9c: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233C9Cu;
    SET_GPR_U32(ctx, 31, 0x233CA4u);
    ctx->pc = 0x233CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C9Cu;
    // 0x233ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233C9Cu, 0x233CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CA4u;
label_233ca4:
    // 0x233ca4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x233ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ca8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x233cac: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233CACu;
    SET_GPR_U32(ctx, 31, 0x233CB4u);
    ctx->pc = 0x233CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CACu;
    // 0x233cb0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233CACu, 0x233CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CB4u;
label_233cb4:
    // 0x233cb4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x233cb8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x233cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x233cbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cc0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233CC0u;
    SET_GPR_U32(ctx, 31, 0x233CC8u);
    ctx->pc = 0x233CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CC0u;
    // 0x233cc4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233CC0u, 0x233CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CC8u;
label_233cc8:
    // 0x233cc8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x233CC8u;
    {
        const bool branch_taken_0x233cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC8u;
        // 0x233ccc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cc8) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233CD0u;
label_233cd0:
    // 0x233cd0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x233cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x233cd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x233CD4u;
    {
        const bool branch_taken_0x233cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD4u;
        // 0x233cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd4) {
            ctx->pc = 0x233D10u;
            goto label_233d10;
        }
    }
    ctx->pc = 0x233CDCu;
    // 0x233cdc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233CDCu;
    SET_GPR_U32(ctx, 31, 0x233CE4u);
    ctx->pc = 0x233CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CDCu;
    // 0x233ce0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233CDCu, 0x233CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CE4u;
label_233ce4:
    // 0x233ce4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x233ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cec: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233CECu;
    SET_GPR_U32(ctx, 31, 0x233CF4u);
    ctx->pc = 0x233CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CECu;
    // 0x233cf0: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233CECu, 0x233CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CF4u;
label_233cf4:
    // 0x233cf4: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x233cf8: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x233cfc: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x233cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x233d00: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233D00u;
    SET_GPR_U32(ctx, 31, 0x233D08u);
    ctx->pc = 0x233D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D00u;
    // 0x233d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233D00u, 0x233D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D08u;
label_233d08:
    // 0x233d08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x233D08u;
    {
        const bool branch_taken_0x233d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D08u;
        // 0x233d0c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d08) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233D10u;
    SET_GPR_U32(ctx, 31, 0x233D18u);
    ctx->pc = 0x233D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D10u;
    // 0x233d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233D10u, 0x233D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D18u;
label_233d18:
    // 0x233d18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x233d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d20: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x233D20u;
    SET_GPR_U32(ctx, 31, 0x233D28u);
    ctx->pc = 0x233D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D20u;
    // 0x233d24: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x233D20u, 0x233D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D28u;
label_233d28:
    // 0x233d28: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x233d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_233d2c:
    // 0x233d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233d40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233d44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233d48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233d4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233d50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x233d54u;
}
