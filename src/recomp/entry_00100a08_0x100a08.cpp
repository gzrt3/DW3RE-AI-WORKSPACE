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

// Function: entry_00100a08
// Address: 0x100a08 - 0x100a28
void entry_00100a08_0x100a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a08_0x100a08");
#endif

    ctx->pc = 0x100a08u;

    // 0x100a08: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x100a0c: 0x2463afe0  addiu       $v1, $v1, -0x5020
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x100a10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x100a14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x100a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100a18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100A18u;
    {
        const bool branch_taken_0x100a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A18u;
        // 0x100a1c: 0x27858450  addiu       $a1, $gp, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a18) {
            ctx->pc = 0x100A28u;
            return;
        }
    }
    ctx->pc = 0x100A20u;
    // 0x100a20: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100A20u;
    SET_GPR_U32(ctx, 31, 0x100A28u);
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100A20u, 0x100A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A28u;
}
