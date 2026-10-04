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

// Function: entry_00174bb0
// Address: 0x174bb0 - 0x174bf8
void entry_00174bb0_0x174bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bb0_0x174bb0");
#endif

    switch (ctx->pc) {
        case 0x174bf0u: goto label_174bf0;
        default: break;
    }

    ctx->pc = 0x174bb0u;

    // 0x174bb0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x174BB0u;
    {
        const bool branch_taken_0x174bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BB0u;
        // 0x174bb4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bb0) {
            ctx->pc = 0x174C3Cu;
            return;
        }
    }
    ctx->pc = 0x174BB8u;
    // 0x174bb8: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x174bbc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x174BBCu;
    {
        const bool branch_taken_0x174bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bbc) {
            ctx->pc = 0x174C38u;
            return;
        }
    }
    ctx->pc = 0x174BC4u;
    // 0x174bc4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174bc8: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x174bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x174bcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x174BCCu;
    {
        const bool branch_taken_0x174bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bcc) {
            ctx->pc = 0x174BF8u;
            return;
        }
    }
    ctx->pc = 0x174BD4u;
    // 0x174bd4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x174BD4u;
    {
        const bool branch_taken_0x174bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174bd4) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174BDCu;
    // 0x174bdc: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x174be0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x174BE0u;
    {
        const bool branch_taken_0x174be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174be0) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174BE8u;
    // 0x174be8: 0xc05b6d8  jal         func_16DB60
    ctx->pc = 0x174BE8u;
    SET_GPR_U32(ctx, 31, 0x174BF0u);
    ctx->pc = 0x174BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BE8u;
    // 0x174bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB60u, 0x174BE8u, 0x174BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BF0u;
label_174bf0:
    // 0x174bf0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174BF0u;
    {
        const bool branch_taken_0x174bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bf0) {
            ctx->pc = 0x174C94u;
            return;
        }
    }
    ctx->pc = 0x174BF8u;
}
