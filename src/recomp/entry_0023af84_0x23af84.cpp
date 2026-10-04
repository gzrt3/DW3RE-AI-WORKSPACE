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

// Function: entry_0023af84
// Address: 0x23af84 - 0x23afb8
void entry_0023af84_0x23af84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023af84_0x23af84");
#endif

    switch (ctx->pc) {
        case 0x23af9cu: goto label_23af9c;
        case 0x23afacu: goto label_23afac;
        default: break;
    }

    ctx->pc = 0x23af84u;

    // 0x23af84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23AF84u;
    {
        const bool branch_taken_0x23af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF84u;
        // 0x23af88: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af84) {
            ctx->pc = 0x23AFACu;
            goto label_23afac;
        }
    }
    ctx->pc = 0x23AF8Cu;
    // 0x23af8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23af8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af94: 0xc08eb32  jal         func_23ACC8
    ctx->pc = 0x23AF94u;
    SET_GPR_U32(ctx, 31, 0x23AF9Cu);
    ctx->pc = 0x23AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF94u;
    // 0x23af98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACC8u, 0x23AF94u, 0x23AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF9Cu;
label_23af9c:
    // 0x23af9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa4: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23AFA4u;
    SET_GPR_U32(ctx, 31, 0x23AFACu);
    ctx->pc = 0x23AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA4u;
    // 0x23afa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23AFA4u, 0x23AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFACu;
label_23afac:
    // 0x23afac: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF58u;
            return;
        }
    }
    ctx->pc = 0x23AFB4u;
    // 0x23afb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23afb8u;
}
