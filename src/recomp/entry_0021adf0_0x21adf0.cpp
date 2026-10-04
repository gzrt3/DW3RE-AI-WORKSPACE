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

// Function: entry_0021adf0
// Address: 0x21adf0 - 0x21ae20
void entry_0021adf0_0x21adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021adf0_0x21adf0");
#endif

    switch (ctx->pc) {
        case 0x21ae0cu: goto label_21ae0c;
        default: break;
    }

    ctx->pc = 0x21adf0u;

    // 0x21adf0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21adf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
    // 0x21adf4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21adf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21ADF8u;
    {
        const bool branch_taken_0x21adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adf8) {
            ctx->pc = 0x21AE34u;
            return;
        }
    }
    ctx->pc = 0x21AE00u;
    // 0x21ae00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae04: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AE04u;
    SET_GPR_U32(ctx, 31, 0x21AE0Cu);
    ctx->pc = 0x21AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE04u;
    // 0x21ae08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE04u, 0x21AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE0Cu;
label_21ae0c:
    // 0x21ae0c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AE0Cu;
    {
        const bool branch_taken_0x21ae0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae0c) {
            ctx->pc = 0x21AE20u;
            return;
        }
    }
    ctx->pc = 0x21AE14u;
    // 0x21ae14: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ae18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE18u;
    {
        const bool branch_taken_0x21ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE18u;
        // 0x21ae1c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae18) {
            ctx->pc = 0x21AE24u;
            return;
        }
    }
    ctx->pc = 0x21AE20u;
}
