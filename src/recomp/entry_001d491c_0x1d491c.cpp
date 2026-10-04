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

// Function: entry_001d491c
// Address: 0x1d491c - 0x1d493c
void entry_001d491c_0x1d491c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d491c_0x1d491c");
#endif

    ctx->pc = 0x1d491cu;

    // 0x1d491c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D491Cu;
    {
        const bool branch_taken_0x1d491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D491Cu;
        // 0x1d4920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d491c) {
            ctx->pc = 0x1D4940u;
            return;
        }
    }
    ctx->pc = 0x1D4924u;
    // 0x1d4924: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d4928: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1d492c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D492Cu;
    {
        const bool branch_taken_0x1d492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D492Cu;
        // 0x1d4930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d492c) {
            ctx->pc = 0x1D493Cu;
            return;
        }
    }
    ctx->pc = 0x1D4934u;
    // 0x1d4934: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D4934u;
    {
        const bool branch_taken_0x1d4934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4934) {
            ctx->pc = 0x1D49A0u;
            return;
        }
    }
    ctx->pc = 0x1D493Cu;
}
