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

// Function: FUN_001a5ca0
// Address: 0x1a5ca0 - 0x1a5de8
void FUN_001a5ca0_0x1a5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5ca0_0x1a5ca0");
#endif

    switch (ctx->pc) {
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5dc8u: goto label_1a5dc8;
        default: break;
    }

    ctx->pc = 0x1a5ca0u;

    // 0x1a5ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a5ca4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a5ca8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a5cac: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1a5cb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a5cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5cbc: 0x26b31410  addiu       $s3, $s5, 0x1410
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
    // 0x1a5cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5ccc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a5cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a5cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1a5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x37141Cu));
    // 0x1a5cdc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A5CDCu;
    {
        const bool branch_taken_0x1a5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CDCu;
        // 0x1a5ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cdc) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5CE4u;
    // 0x1a5ce4: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5CE4u;
    SET_GPR_U32(ctx, 31, 0x1A5CECu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5CE4u, 0x1A5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CECu;
label_1a5cec:
    // 0x1a5cec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a5cf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a5cf4: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x1a5cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5cfc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a5cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5d00: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1a5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x1a5d04: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x1a5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x1a5d08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a5d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5d0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a5d10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a5d14: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x1a5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1a5d18:
    // 0x1a5d18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a5d1c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5D1Cu;
    {
        const bool branch_taken_0x1a5d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1a5d1c) {
            ctx->pc = 0x1A5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5D1Cu;
            // 0x1a5d20: 0x26b01410  addiu       $s0, $s5, 0x1410 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D68u;
            goto label_1a5d68;
        }
    }
    ctx->pc = 0x1A5D24u;
    // 0x1a5d24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d28: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5D28u;
    {
        const bool branch_taken_0x1a5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D28u;
        // 0x1a5d2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d28) {
            ctx->pc = 0x1A5D48u;
            goto label_1a5d48;
        }
    }
    ctx->pc = 0x1A5D30u;
    // 0x1a5d30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1a5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a5d34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a5d38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1a5d3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5D3Cu;
    {
        const bool branch_taken_0x1a5d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D3Cu;
        // 0x1a5d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d3c) {
            ctx->pc = 0x1A5D64u;
            goto label_1a5d64;
        }
    }
    ctx->pc = 0x1A5D44u;
    // 0x1a5d44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a5d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5d48:
    // 0x1a5d48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a5d50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a5d54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a5d58: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1a5d5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A5D5Cu;
    {
        const bool branch_taken_0x1a5d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d5c) {
            ctx->pc = 0x1A5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5d18;
        }
    }
    ctx->pc = 0x1A5D64u;
label_1a5d64:
    // 0x1a5d64: 0x26b01410  addiu       $s0, $s5, 0x1410
    ctx->pc = 0x1a5d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
label_1a5d68:
    // 0x1a5d68: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1a5d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a5d70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5d74: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1a5d78: 0x8ea41410  lw          $a0, 0x1410($s5)
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5136)));
    // 0x1a5d7c: 0xc06963c  jal         func_1A58F0
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D7Cu;
    // 0x1a5d80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58F0u, 0x1A5D7Cu, 0x1A5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5D9Cu;
            goto label_1a5d9c;
        }
    }
    ctx->pc = 0x1A5D8Cu;
    // 0x1a5d8c: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D94u);
    ctx->pc = 0x1A5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D8Cu;
    // 0x1a5d90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5D8Cu, 0x1A5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D94u;
label_1a5d94:
    // 0x1a5d94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A5D94u;
    {
        const bool branch_taken_0x1a5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d94) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5D9Cu;
label_1a5d9c:
    // 0x1a5d9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5DA0u;
    {
        const bool branch_taken_0x1a5da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5da0) {
            ctx->pc = 0x1A5DC0u;
            goto label_1a5dc0;
        }
    }
    ctx->pc = 0x1A5DA8u;
label_1a5da8:
    // 0x1a5da8: 0x8e241410  lw          $a0, 0x1410($s1)
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5136)));
    // 0x1a5dac: 0xc069648  jal         func_1A5920
    ctx->pc = 0x1A5DACu;
    SET_GPR_U32(ctx, 31, 0x1A5DB4u);
    ctx->pc = 0x1A5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5920u, 0x1A5DACu, 0x1A5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5db8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A5DB8u;
    {
        const bool branch_taken_0x1a5db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5db8) {
            ctx->pc = 0x1A5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5da8;
        }
    }
    ctx->pc = 0x1A5DC0u;
label_1a5dc0:
    // 0x1a5dc0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5DC0u, 0x1A5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5dcc:
    // 0x1a5dcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a5dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5dd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a5dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5dd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5dd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5ddc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5de0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5de8u;
}
