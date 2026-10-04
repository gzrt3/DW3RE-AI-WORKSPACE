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

// Function: FUN_001b19c8
// Address: 0x1b19c8 - 0x1b1aa0
void FUN_001b19c8_0x1b19c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b19c8_0x1b19c8");
#endif

    switch (ctx->pc) {
        case 0x1b1a14u: goto label_1b1a14;
        case 0x1b1a30u: goto label_1b1a30;
        case 0x1b1a38u: goto label_1b1a38;
        case 0x1b1a40u: goto label_1b1a40;
        case 0x1b1a80u: goto label_1b1a80;
        default: break;
    }

    ctx->pc = 0x1b19c8u;

    // 0x1b19c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b19cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b19d0: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b19d4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1b19d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b19d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b19dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b19dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b19e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b19e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b19e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19e8: 0x8e628d08  lw          $v0, -0x72F8($s3)
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x288D08u));
    // 0x1b19ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b19ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b19f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b19f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B19F8u;
    {
        const bool branch_taken_0x1b19f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F8u;
        // 0x1b19fc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19f8) {
            ctx->pc = 0x1B1A08u;
            goto label_1b1a08;
        }
    }
    ctx->pc = 0x1B1A00u;
    // 0x1b1a00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B1A00u;
    {
        const bool branch_taken_0x1b1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A00u;
        // 0x1b1a04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a00) {
            ctx->pc = 0x1B1A84u;
            goto label_1b1a84;
        }
    }
    ctx->pc = 0x1B1A08u;
label_1b1a08:
    // 0x1b1a08: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b1a08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1b1a0c: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1B1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1A14u);
    ctx->pc = 0x1B1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A0Cu;
    // 0x1b1a10: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1B1A0Cu, 0x1B1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A14u;
label_1b1a14:
    // 0x1b1a14: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1A14u;
    {
        const bool branch_taken_0x1b1a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A14u;
        // 0x1b1a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a14) {
            ctx->pc = 0x1B1A48u;
            goto label_1b1a48;
        }
    }
    ctx->pc = 0x1B1A1Cu;
    // 0x1b1a1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A48u;
            goto label_1b1a48;
        }
    }
    ctx->pc = 0x1B1A24u;
    // 0x1b1a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A24u;
    {
        const bool branch_taken_0x1b1a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a24) {
            ctx->pc = 0x1B1A38u;
            goto label_1b1a38;
        }
    }
    ctx->pc = 0x1B1A2Cu;
    // 0x1b1a2c: 0x0  nop
    ctx->pc = 0x1b1a2cu;
    // NOP
label_1b1a30:
    // 0x1b1a30: 0xc06c660  jal         func_1B1980
    ctx->pc = 0x1B1A30u;
    SET_GPR_U32(ctx, 31, 0x1B1A38u);
    ctx->pc = 0x1B1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A30u;
    // 0x1b1a34: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1980u, 0x1B1A30u, 0x1B1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A38u;
label_1b1a38:
    // 0x1b1a38: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1B1A38u;
    SET_GPR_U32(ctx, 31, 0x1B1A40u);
    ctx->pc = 0x1B1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A38u;
    // 0x1b1a3c: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1B1A38u, 0x1B1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A40u;
label_1b1a40:
    // 0x1b1a40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1A40u;
    {
        const bool branch_taken_0x1b1a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A40u;
        // 0x1b1a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a40) {
            ctx->pc = 0x1B1A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1a30;
        }
    }
    ctx->pc = 0x1B1A48u;
label_1b1a48:
    // 0x1b1a48: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1A48u;
    {
        const bool branch_taken_0x1b1a48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A48u;
        // 0x1b1a4c: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a48) {
            ctx->pc = 0x1B1A58u;
            goto label_1b1a58;
        }
    }
    ctx->pc = 0x1B1A50u;
    // 0x1b1a50: 0x8e628d08  lw          $v0, -0x72F8($s3)
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937864)));
    // 0x1b1a54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1b1a58:
    // 0x1b1a58: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A58u;
    {
        const bool branch_taken_0x1b1a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A58u;
        // 0x1b1a5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a58) {
            ctx->pc = 0x1B1A84u;
            goto label_1b1a84;
        }
    }
    ctx->pc = 0x1B1A60u;
    // 0x1b1a60: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A60u;
    {
        const bool branch_taken_0x1b1a60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0xae608d08  sw          $zero, -0x72F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294937864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a60) {
            ctx->pc = 0x1B1A74u;
            goto label_1b1a74;
        }
    }
    ctx->pc = 0x1B1A68u;
    // 0x1b1a68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1a6c: 0x8c4377c0  lw          $v1, 0x77C0($v0)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3777C0u));
    // 0x1b1a70: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1b1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1b1a74:
    // 0x1b1a74: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b1a78: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1A78u;
    SET_GPR_U32(ctx, 31, 0x1B1A80u);
    ctx->pc = 0x1B1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A78u;
    // 0x1b1a7c: 0x8c448d0c  lw          $a0, -0x72F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1A78u, 0x1B1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A80u;
label_1b1a80:
    // 0x1b1a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1a84:
    // 0x1b1a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1a88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1a8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b1a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b1a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b1aa0u;
}
