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

// Function: entry_0022f5fc
// Address: 0x22f5fc - 0x22f620
void entry_0022f5fc_0x22f5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f5fc_0x22f5fc");
#endif

    ctx->pc = 0x22f5fcu;

    // 0x22f5fc: 0x0  nop
    ctx->pc = 0x22f5fcu;
    // NOP
    // 0x22f600: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f604: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f608: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F608u;
    {
        const bool branch_taken_0x22f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f608) {
            ctx->pc = 0x22F5D4u;
            return;
        }
    }
    ctx->pc = 0x22F610u;
    // 0x22f610: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F610u;
    {
        const bool branch_taken_0x22f610 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x22f610) {
            ctx->pc = 0x22F620u;
            return;
        }
    }
    ctx->pc = 0x22F618u;
    // 0x22f618: 0xc090208  jal         func_240820
    ctx->pc = 0x22F618u;
    SET_GPR_U32(ctx, 31, 0x22F620u);
    ctx->pc = 0x240820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240820u, 0x22F618u, 0x22F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F620u;
}
