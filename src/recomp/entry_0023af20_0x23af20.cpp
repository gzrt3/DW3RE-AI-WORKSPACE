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

// Function: entry_0023af20
// Address: 0x23af20 - 0x23af80
void entry_0023af20_0x23af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023af20_0x23af20");
#endif

    switch (ctx->pc) {
        case 0x23af44u: goto label_23af44;
        case 0x23af70u: goto label_23af70;
        default: break;
    }

    ctx->pc = 0x23af20u;

    // 0x23af20: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x23af24: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x23AF24u;
    {
        const bool branch_taken_0x23af24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF24u;
        // 0x23af28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af24) {
            ctx->pc = 0x23AFB8u;
            return;
        }
    }
    ctx->pc = 0x23AF2Cu;
    // 0x23af2c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x23af2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x23af30: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23AF30u;
    {
        const bool branch_taken_0x23af30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF30u;
        // 0x23af34: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af30) {
            ctx->pc = 0x23AF84u;
            return;
        }
    }
    ctx->pc = 0x23AF38u;
    // 0x23af38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af3c: 0xc08eb24  jal         func_23AC90
    ctx->pc = 0x23AF3Cu;
    SET_GPR_U32(ctx, 31, 0x23AF44u);
    ctx->pc = 0x23AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF3Cu;
    // 0x23af40: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC90u, 0x23AF3Cu, 0x23AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23af44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af48: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x23af48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x23af4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23AF4Cu;
    {
        const bool branch_taken_0x23af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af4c) {
            ctx->pc = 0x23AF80u;
            return;
        }
    }
    ctx->pc = 0x23AF54u;
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
    // 0x23af58: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF58u;
            // 0x23af5c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF80u;
            return;
        }
    }
    ctx->pc = 0x23AF60u;
    // 0x23af60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af68: 0xc08eb32  jal         func_23ACC8
    ctx->pc = 0x23AF68u;
    SET_GPR_U32(ctx, 31, 0x23AF70u);
    ctx->pc = 0x23AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF68u;
    // 0x23af6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACC8u, 0x23AF68u, 0x23AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF70u;
label_23af70:
    // 0x23af70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23af70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23af78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23af78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23af7c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23af80u;
}
