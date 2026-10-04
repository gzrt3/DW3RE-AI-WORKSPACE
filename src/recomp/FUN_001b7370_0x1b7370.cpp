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

// Function: FUN_001b7370
// Address: 0x1b7370 - 0x1b7440
void FUN_001b7370_0x1b7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7370_0x1b7370");
#endif

    ctx->pc = 0x1b7370u;

    // 0x1b7370: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1b7370u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7374: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b7378: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1b7378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b737c: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1B737Cu;
    {
        const bool branch_taken_0x1b737c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B737Cu;
        // 0x1b7380: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b737c) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B7384u;
    // 0x1b7384: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7388: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x1b7388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b738c: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x1B738Cu;
    {
        const bool branch_taken_0x1b738c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B738Cu;
        // 0x1b7390: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b738c) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B7394u;
    // 0x1b7394: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x1b7398: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7398u;
    {
        const bool branch_taken_0x1b7398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7398u;
        // 0x1b739c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7398) {
            ctx->pc = 0x1B73C8u;
            goto label_1b73c8;
        }
    }
    ctx->pc = 0x1B73A0u;
    // 0x1b73a0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1b73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1b73a4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B73A4u;
    {
        const bool branch_taken_0x1b73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73a4) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73ACu;
    // 0x1b73ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b73b0: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1b73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1b73b4: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B73B4u;
    {
        const bool branch_taken_0x1b73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b73b4) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73BCu;
    // 0x1b73bc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b73c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C0u;
        // 0x1b73c4: 0x2442b6b0  addiu       $v0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B73C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B73C8u;
label_1b73c8:
    // 0x1b73c8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1B73C8u;
    {
        const bool branch_taken_0x1b73c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C8u;
        // 0x1b73cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c8) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B73D0u;
    // 0x1b73d0: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1b73d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B73D4u;
    {
        const bool branch_taken_0x1b73d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D4u;
        // 0x1b73d8: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d4) {
            ctx->pc = 0x1B7420u;
            goto label_1b7420;
        }
    }
    ctx->pc = 0x1B73DCu;
    // 0x1b73dc: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1b73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x1b73e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B73E0u;
    {
        const bool branch_taken_0x1b73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73e0) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73E8u;
    // 0x1b73e8: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x1b73e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b73ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b73ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73f0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1b73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1b73f4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x1b73f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1b73f8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1b73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1b73fc: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x1b73fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1b7400: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1b7400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1b7404: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1b7408: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b740c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b7410: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7410u;
        // 0x1b7414: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7418u;
label_1b7418:
    // 0x1b7418: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7418u;
        // 0x1b741c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7420u;
label_1b7420:
    // 0x1b7420: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1B7420u;
    {
        const bool branch_taken_0x1b7420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7420u;
        // 0x1b7424: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7420) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B7428u;
    // 0x1b7428: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1b742c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1b742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7430: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1b7430u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1b7434: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b7438: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b743c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b743cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    ctx->pc = 0x1b7440u;
}
