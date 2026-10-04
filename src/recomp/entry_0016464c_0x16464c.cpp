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

// Function: entry_0016464c
// Address: 0x16464c - 0x164664
void entry_0016464c_0x16464c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016464c_0x16464c");
#endif

    ctx->pc = 0x16464cu;

    // 0x16464c: 0x0  nop
    ctx->pc = 0x16464cu;
    // NOP
    // 0x164650: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x164650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x164654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164654u;
    {
        const bool branch_taken_0x164654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164654u;
        // 0x164658: 0x240319a0  addiu       $v1, $zero, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164654) {
            ctx->pc = 0x164664u;
            return;
        }
    }
    ctx->pc = 0x16465Cu;
    // 0x16465c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16465Cu;
    {
        const bool branch_taken_0x16465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16465Cu;
        // 0x164660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16465c) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x164664u;
}
