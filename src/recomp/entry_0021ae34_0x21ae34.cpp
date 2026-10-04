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

// Function: entry_0021ae34
// Address: 0x21ae34 - 0x21ae6c
void entry_0021ae34_0x21ae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ae34_0x21ae34");
#endif

    switch (ctx->pc) {
        case 0x21ae54u: goto label_21ae54;
        default: break;
    }

    ctx->pc = 0x21ae34u;

    // 0x21ae34: 0x0  nop
    ctx->pc = 0x21ae34u;
    // NOP
    // 0x21ae38: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21ae38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
    // 0x21ae3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x21ae40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21AE40u;
    {
        const bool branch_taken_0x21ae40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae40) {
            ctx->pc = 0x21AE7Cu;
            return;
        }
    }
    ctx->pc = 0x21AE48u;
    // 0x21ae48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae4c: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AE4Cu;
    SET_GPR_U32(ctx, 31, 0x21AE54u);
    ctx->pc = 0x21AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE4Cu;
    // 0x21ae50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE4Cu, 0x21AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE54u;
label_21ae54:
    // 0x21ae54: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ae58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21ae5c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AE5Cu;
    {
        const bool branch_taken_0x21ae5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ae5c) {
            ctx->pc = 0x21AE6Cu;
            return;
        }
    }
    ctx->pc = 0x21AE64u;
    // 0x21ae64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE64u;
    {
        const bool branch_taken_0x21ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE64u;
        // 0x21ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae64) {
            ctx->pc = 0x21AE70u;
            return;
        }
    }
    ctx->pc = 0x21AE6Cu;
}
