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

// Function: entry_0023fe7c
// Address: 0x23fe7c - 0x23fe98
void entry_0023fe7c_0x23fe7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fe7c_0x23fe7c");
#endif

    ctx->pc = 0x23fe7cu;

    // 0x23fe7c: 0x0  nop
    ctx->pc = 0x23fe7cu;
    // NOP
    // 0x23fe80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23fe84: 0x2a0200ab  slti        $v0, $s0, 0xAB
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x23fe88: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x23FE88u;
    {
        const bool branch_taken_0x23fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE88u;
        // 0x23fe8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe88) {
            ctx->pc = 0x23FD40u;
            return;
        }
    }
    ctx->pc = 0x23FE90u;
    // 0x23fe90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fe90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fe94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23fe98u;
}
