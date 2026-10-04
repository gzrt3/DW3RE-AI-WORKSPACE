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

// Function: entry_001d48f0
// Address: 0x1d48f0 - 0x1d4918
void entry_001d48f0_0x1d48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48f0_0x1d48f0");
#endif

    ctx->pc = 0x1d48f0u;

    // 0x1d48f0: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x1d48f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d48f8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D48F8u;
    {
        const bool branch_taken_0x1d48f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48F8u;
        // 0x1d48fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48f8) {
            ctx->pc = 0x1D491Cu;
            return;
        }
    }
    ctx->pc = 0x1D4900u;
    // 0x1d4900: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d4900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d4904: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1d4904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1d4908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4908u;
    {
        const bool branch_taken_0x1d4908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4908u;
        // 0x1d490c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4908) {
            ctx->pc = 0x1D4918u;
            return;
        }
    }
    ctx->pc = 0x1D4910u;
    // 0x1d4910: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D4910u;
    {
        const bool branch_taken_0x1d4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4910) {
            ctx->pc = 0x1D49A0u;
            return;
        }
    }
    ctx->pc = 0x1D4918u;
}
