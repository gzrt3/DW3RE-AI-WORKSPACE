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

// Function: entry_001aeaa0
// Address: 0x1aeaa0 - 0x1aebf0
void entry_001aeaa0_0x1aeaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeaa0_0x1aeaa0");
#endif

    switch (ctx->pc) {
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb78u: goto label_1aeb78;
        default: break;
    }

    ctx->pc = 0x1aeaa0u;

label_1aeaa0:
    // 0x1aeaa0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aeaa4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1aeaa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aeaac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aeab0: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aeab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1aeab4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aeab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aeab8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEAB8u;
    {
        const bool branch_taken_0x1aeab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeab8) {
            ctx->pc = 0x1AEAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeaa0;
        }
    }
    ctx->pc = 0x1AEAC0u;
    // 0x1aeac0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aeac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aeac8: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1aeacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aead0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aead4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aead4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aead8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeadc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeae0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeae4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AEAE4u;
    SET_GPR_U32(ctx, 31, 0x1AEAECu);
    ctx->pc = 0x1AEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAE4u;
    // 0x1aeae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AEAE4u, 0x1AEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAECu;
label_1aeaec:
    // 0x1aeaec: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEAECu;
    {
        const bool branch_taken_0x1aeaec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aeaec) {
            ctx->pc = 0x1AEAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEAECu;
            // 0x1aeaf0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEAFCu;
            goto label_1aeafc;
        }
    }
    ctx->pc = 0x1AEAF4u;
    // 0x1aeaf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AEAF4u;
    {
        const bool branch_taken_0x1aeaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAF4u;
        // 0x1aeaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaf4) {
            ctx->pc = 0x1AEB20u;
            goto label_1aeb20;
        }
    }
    ctx->pc = 0x1AEAFCu;
label_1aeafc:
    // 0x1aeafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeb00: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEB00u;
    {
        const bool branch_taken_0x1aeb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB00u;
        // 0x1aeb04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb00) {
            ctx->pc = 0x1AEB20u;
            goto label_1aeb20;
        }
    }
    ctx->pc = 0x1AEB08u;
    // 0x1aeb08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aeb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aeb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb10: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1AEB10u;
    SET_GPR_U32(ctx, 31, 0x1AEB18u);
    ctx->pc = 0x1AEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB10u;
    // 0x1aeb14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1AEB10u, 0x1AEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB18u;
label_1aeb18:
    // 0x1aeb18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1aeb1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aeb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb20:
    // 0x1aeb20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aeb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aeb24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aeb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aeb28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aeb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeb2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aeb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeb30: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB30u;
        // 0x1aeb34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEB38u;
    // 0x1aeb38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aeb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb3c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1aeb40: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1aeb44: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1aeb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1aeb48: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1aeb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1aeb4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aeb50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeb58: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1aeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
    // 0x1aeb5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aeb60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1aeb64: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1aeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aeb68: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AEB68u;
    {
        const bool branch_taken_0x1aeb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB68u;
        // 0x1aeb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb68) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEB70u;
    // 0x1aeb70: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1AEB70u;
    SET_GPR_U32(ctx, 31, 0x1AEB78u);
    ctx->pc = 0x1AEB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB70u;
    // 0x1aeb74: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE2A0u, 0x1AEB70u, 0x1AEB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB78u;
label_1aeb78:
    // 0x1aeb78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aeb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeb80: 0x90c20072  lbu         $v0, 0x72($a2)
    ctx->pc = 0x1aeb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 114)));
    // 0x1aeb84: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEB84u;
    {
        const bool branch_taken_0x1aeb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1aeb84) {
            ctx->pc = 0x1AEB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEB84u;
            // 0x1aeb88: 0x90c20064  lbu         $v0, 0x64($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB94u;
            goto label_1aeb94;
        }
    }
    ctx->pc = 0x1AEB8Cu;
    // 0x1aeb8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEB8Cu;
    {
        const bool branch_taken_0x1aeb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB8Cu;
        // 0x1aeb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb8c) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEB94u;
label_1aeb94:
    // 0x1aeb94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aeb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aeb98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AEB98u;
    {
        const bool branch_taken_0x1aeb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB98u;
        // 0x1aeb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb98) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEBA0u;
    // 0x1aeba0: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x1aeba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
    // 0x1aeba4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aeba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aeba8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AEBA8u;
    {
        const bool branch_taken_0x1aeba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBA8u;
        // 0x1aebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeba8) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEBB0u;
    // 0x1aebb0: 0x90c5007a  lbu         $a1, 0x7A($a2)
    ctx->pc = 0x1aebb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x1aebb4: 0x90c4007c  lbu         $a0, 0x7C($a2)
    ctx->pc = 0x1aebb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1aebb8: 0x90c3007b  lbu         $v1, 0x7B($a2)
    ctx->pc = 0x1aebb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 123)));
    // 0x1aebbc: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x1aebbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x1aebc0: 0x90c20079  lbu         $v0, 0x79($a2)
    ctx->pc = 0x1aebc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 121)));
    // 0x1aebc4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1aebc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1aebc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aebcc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1aebccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1aebd0: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1aebd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1aebd4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1aebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1aebd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aebdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aebdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1aebe0:
    // 0x1aebe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE4u;
        // 0x1aebe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEBECu;
    // 0x1aebec: 0x0  nop
    ctx->pc = 0x1aebecu;
    // NOP
    ctx->pc = 0x1aebf0u;
}
