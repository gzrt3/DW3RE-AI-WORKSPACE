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

// Function: entry_00157874
// Address: 0x157874 - 0x157894
void entry_00157874_0x157874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157874_0x157874");
#endif

    ctx->pc = 0x157874u;

    // 0x157874: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157874u;
    {
        const bool branch_taken_0x157874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157874u;
        // 0x157878: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157874) {
            ctx->pc = 0x157894u;
            return;
        }
    }
    ctx->pc = 0x15787Cu;
    // 0x15787c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x157880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x157880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157884u;
    {
        const bool branch_taken_0x157884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157884u;
        // 0x157888: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157884) {
            ctx->pc = 0x157898u;
            return;
        }
    }
    ctx->pc = 0x15788Cu;
    // 0x15788c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15788Cu;
    {
        const bool branch_taken_0x15788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15788Cu;
        // 0x157890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15788c) {
            ctx->pc = 0x1578C0u;
            return;
        }
    }
    ctx->pc = 0x157894u;
}
