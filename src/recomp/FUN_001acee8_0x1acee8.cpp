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

// Function: FUN_001acee8
// Address: 0x1acee8 - 0x1ad0d4
void FUN_001acee8_0x1acee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acee8_0x1acee8");
#endif

    switch (ctx->pc) {
        case 0x1acf38u: goto label_1acf38;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acff8u: goto label_1acff8;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad0b4u: goto label_1ad0b4;
        default: break;
    }

    ctx->pc = 0x1acee8u;

    // 0x1acee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aceec: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1acef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1acef4: 0x2484a770  addiu       $a0, $a0, -0x5890
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944624));
    // 0x1acef8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1acefc: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    // 0x1acf00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acf04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1acf08: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
    // 0x1acf0c: 0x8e456250  lw          $a1, 0x6250($s2)
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x286250u));
    // 0x1acf10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x286254u));
    // 0x1acf14: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x286258u));
    // 0x1acf18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1acf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf1c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1acf20: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1acf24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1acf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1acf2c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1acf30: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1ACF30u;
    SET_GPR_U32(ctx, 31, 0x1ACF38u);
    ctx->pc = 0x1ACF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF30u;
    // 0x1acf34: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1ACF30u, 0x1ACF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF38u;
label_1acf38:
    // 0x1acf38: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x1acf38u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x1acf3c: 0x40f  sync.p
    ctx->pc = 0x1acf3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1acf40: 0x8e516250  lw          $s1, 0x6250($s2)
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25168)));
    // 0x1acf44: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1acf48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACF48u;
    {
        const bool branch_taken_0x1acf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF48u;
        // 0x1acf4c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf48) {
            ctx->pc = 0x1ACF64u;
            goto label_1acf64;
        }
    }
    ctx->pc = 0x1ACF50u;
    // 0x1acf50: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1acf54: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x1ACF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF54u;
    // 0x1acf58: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1ACF54u, 0x1ACF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF5Cu;
label_1acf5c:
    // 0x1acf5c: 0xc06b6b4  jal         func_1ADAD0
    ctx->pc = 0x1ACF5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF64u);
    ctx->pc = 0x1ACF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF5Cu;
    // 0x1acf60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAD0u, 0x1ACF5Cu, 0x1ACF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF64u;
label_1acf64:
    // 0x1acf64: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1acf68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACF68u;
    {
        const bool branch_taken_0x1acf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF68u;
        // 0x1acf6c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf68) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACF70u;
    // 0x1acf70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acf74: 0x0  nop
    ctx->pc = 0x1acf74u;
    // NOP
label_1acf78:
    // 0x1acf78: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf7c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acf80: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acf84: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1acf88: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACF88u;
    SET_GPR_U32(ctx, 31, 0x1ACF90u);
    ctx->pc = 0x1ACF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF88u;
    // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACF88u, 0x1ACF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF90u;
label_1acf90:
    // 0x1acf90: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1acf94: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1acf98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ACF98u;
    {
        const bool branch_taken_0x1acf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf98) {
            ctx->pc = 0x1ACF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF98u;
            // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acf78;
        }
    }
    ctx->pc = 0x1ACFA0u;
label_1acfa0:
    // 0x1acfa0: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
    // 0x1acfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acfa8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1acfac: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1acfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1acfb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACFB0u;
    {
        const bool branch_taken_0x1acfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfb0) {
            ctx->pc = 0x1ACFD0u;
            goto label_1acfd0;
        }
    }
    ctx->pc = 0x1ACFB8u;
    // 0x1acfb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1acfbc: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1ACFBCu;
    SET_GPR_U32(ctx, 31, 0x1ACFC4u);
    ctx->pc = 0x1ACFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFBCu;
    // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1ACFBCu, 0x1ACFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFC4u;
label_1acfc4:
    // 0x1acfc4: 0xc06b6b4  jal         func_1ADAD0
    ctx->pc = 0x1ACFC4u;
    SET_GPR_U32(ctx, 31, 0x1ACFCCu);
    ctx->pc = 0x1ACFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFC4u;
    // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAD0u, 0x1ACFC4u, 0x1ACFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFCCu;
label_1acfcc:
    // 0x1acfcc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acfd0:
    // 0x1acfd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1AD008u;
            goto label_1ad008;
        }
    }
    ctx->pc = 0x1ACFD8u;
    // 0x1acfd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acfdc: 0x0  nop
    ctx->pc = 0x1acfdcu;
    // NOP
label_1acfe0:
    // 0x1acfe0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfe4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acfe8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acfec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1acff0: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACFF0u;
    SET_GPR_U32(ctx, 31, 0x1ACFF8u);
    ctx->pc = 0x1ACFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFF0u;
    // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACFF0u, 0x1ACFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFF8u;
label_1acff8:
    // 0x1acff8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1acffc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ad000: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD000u;
    {
        const bool branch_taken_0x1ad000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad000) {
            ctx->pc = 0x1AD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD000u;
            // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1AD008u;
label_1ad008:
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
            goto label_1ad084;
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
            goto label_1ad04c;
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
label_1ad04c:
    // 0x1ad04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD080u;
            goto label_1ad080;
        }
    }
    ctx->pc = 0x1AD054u;
    // 0x1ad054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad058:
    // 0x1ad058: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1ad058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad05c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ad060: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad064: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ad068: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1AD068u;
    SET_GPR_U32(ctx, 31, 0x1AD070u);
    ctx->pc = 0x1AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD068u;
    // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1AD068u, 0x1AD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD070u;
label_1ad070:
    // 0x1ad070: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1ad074: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ad078: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad058;
        }
    }
    ctx->pc = 0x1AD080u;
label_1ad080:
    // 0x1ad080: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad084:
    // 0x1ad084: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ad088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD090u;
    // 0x1ad090: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1ad094: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad098:
    // 0x1ad098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0ac: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1AD0ACu;
    SET_GPR_U32(ctx, 31, 0x1AD0B4u);
    ctx->pc = 0x1AD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0ACu;
    // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1AD0ACu, 0x1AD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0B4u;
label_1ad0b4:
    // 0x1ad0b4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ad0b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AD0B8u;
    {
        const bool branch_taken_0x1ad0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0b8) {
            ctx->pc = 0x1AD098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad098;
        }
    }
    ctx->pc = 0x1AD0C0u;
label_1ad0c0:
    // 0x1ad0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad0c4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad0cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ad0d4u;
}
