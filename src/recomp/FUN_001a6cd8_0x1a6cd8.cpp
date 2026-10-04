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

// Function: FUN_001a6cd8
// Address: 0x1a6cd8 - 0x1a6e04
void FUN_001a6cd8_0x1a6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6cd8_0x1a6cd8");
#endif

    switch (ctx->pc) {
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6ddcu: goto label_1a6ddc;
        case 0x1a6decu: goto label_1a6dec;
        default: break;
    }

    ctx->pc = 0x1a6cd8u;

    // 0x1a6cd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a6cdc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a6ce0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a6ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1a6ce4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ce8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a6cec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a6cf4: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1a6cf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a6d00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a6d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a6d04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d0c: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x1a6d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x1a6d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6D20u;
            goto label_1a6d20;
        }
    }
    ctx->pc = 0x1A6D18u;
    // 0x1a6d18: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1A6D18u;
    {
        const bool branch_taken_0x1a6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D18u;
        // 0x1a6d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d18) {
            ctx->pc = 0x1A6DECu;
            goto label_1a6dec;
        }
    }
    ctx->pc = 0x1A6D20u;
label_1a6d20:
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
            goto label_1a6d68;
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
            goto label_1a6d74;
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
            goto label_1a6d78;
        }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6d6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a6d70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a6d74:
    // 0x1a6d74: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1a6d78:
    // 0x1a6d78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6d7c: 0x8c441820  lw          $a0, 0x1820($v0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x371820u));
    // 0x1a6d80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1a6d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1a6d88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a6d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6d90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a6d94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6d98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6d9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1a6da0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a6da4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a6da8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1a6dac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1a6dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a6db0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a6db4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a6db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dc0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A6DC0u;
    SET_GPR_U32(ctx, 31, 0x1A6DC8u);
    ctx->pc = 0x1A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DC0u;
    // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A6DC0u, 0x1A6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DC8u;
label_1a6dc8:
    // 0x1a6dc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a6dcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6DCCu;
    {
        const bool branch_taken_0x1a6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dcc) {
            ctx->pc = 0x1A6DE4u;
            goto label_1a6de4;
        }
    }
    ctx->pc = 0x1A6DD4u;
    // 0x1a6dd4: 0xc0692fc  jal         func_1A4BF0
    ctx->pc = 0x1A6DD4u;
    SET_GPR_U32(ctx, 31, 0x1A6DDCu);
    ctx->pc = 0x1A6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DD4u;
    // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BF0u, 0x1A6DD4u, 0x1A6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DDCu;
label_1a6ddc:
    // 0x1a6ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6DDCu;
    {
        const bool branch_taken_0x1a6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ddc) {
            ctx->pc = 0x1A6DF0u;
            goto label_1a6df0;
        }
    }
    ctx->pc = 0x1A6DE4u;
label_1a6de4:
    // 0x1a6de4: 0xc0692f8  jal         func_1A4BE0
    ctx->pc = 0x1A6DE4u;
    SET_GPR_U32(ctx, 31, 0x1A6DECu);
    ctx->pc = 0x1A6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DE4u;
    // 0x1a6de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BE0u, 0x1A6DE4u, 0x1A6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DECu;
label_1a6dec:
    // 0x1a6dec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6df0:
    // 0x1a6df0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a6df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a6df4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a6df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6df8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a6df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6dfc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6e00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a6e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a6e04u;
}
