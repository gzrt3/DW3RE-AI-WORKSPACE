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

// Function: entry_00231fac
// Address: 0x231fac - 0x232080
void entry_00231fac_0x231fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231fac_0x231fac");
#endif

    ctx->pc = 0x231facu;

    // 0x231fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x231FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FB4u;
        // 0x231fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231FBCu;
    // 0x231fbc: 0x0  nop
    ctx->pc = 0x231fbcu;
    // NOP
    // 0x231fc0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x231fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fc4: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x231fc8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x231FC8u;
    {
        const bool branch_taken_0x231fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FC8u;
        // 0x231fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fc8) {
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x231FD0u;
    // 0x231fd0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x231fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x231fd4: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231FD4u;
    {
        const bool branch_taken_0x231fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231fd4) {
            ctx->pc = 0x231FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FD4u;
            // 0x231fd8: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x231FDCu;
    // 0x231fdc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x231fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x231fe0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x231FE0u;
    {
        const bool branch_taken_0x231fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231fe0) {
            ctx->pc = 0x231FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FE0u;
            // 0x231fe4: 0x8d220040  lw          $v0, 0x40($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x231FE8u;
    // 0x231fe8: 0x8d240030  lw          $a0, 0x30($t1)
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x231fec: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x231fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x231ff0: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x231ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x231ff4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231ff8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x231ffc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x231ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x232000: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x232000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x232004: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x232008: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x232008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x23200c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x23200cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x232010: 0x3e00008  jr          $ra
    ctx->pc = 0x232010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232010u;
        // 0x232014: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232018u;
label_232018:
    // 0x232018: 0x8d2a0038  lw          $t2, 0x38($t1)
    ctx->pc = 0x232018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x23201c: 0x8d24003c  lw          $a0, 0x3C($t1)
    ctx->pc = 0x23201cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x232020: 0x4a6023  subu        $t4, $v0, $t2
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x232024: 0x445823  subu        $t3, $v0, $a0
    ctx->pc = 0x232024u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232028: 0x18b182a  slt         $v1, $t4, $t3
    ctx->pc = 0x232028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x23202c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23202Cu;
    {
        const bool branch_taken_0x23202c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23202Cu;
        // 0x232030: 0x8d220034  lw          $v0, 0x34($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23202c) {
            ctx->pc = 0x232050u;
            goto label_232050;
        }
    }
    ctx->pc = 0x232034u;
    // 0x232034: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x232034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x232038: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x232038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x23203c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x23203cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x232040: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x232040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x232044: 0x3e00008  jr          $ra
    ctx->pc = 0x232044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232044u;
        // 0x232048: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23204Cu;
    // 0x23204c: 0x0  nop
    ctx->pc = 0x23204cu;
    // NOP
label_232050:
    // 0x232050: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x232050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x232054: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x232054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x232058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x232058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x23205c: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x23205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x232060: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x232064: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x232064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x232068: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x232068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23206c: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x23206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x232070: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x232070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x232074: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x232074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_232078:
    // 0x232078: 0x3e00008  jr          $ra
    ctx->pc = 0x232078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232080u;
}
