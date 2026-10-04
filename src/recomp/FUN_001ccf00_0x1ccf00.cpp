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

// Function: FUN_001ccf00
// Address: 0x1ccf00 - 0x1ccf38
void FUN_001ccf00_0x1ccf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccf00_0x1ccf00");
#endif

    switch (ctx->pc) {
        case 0x1ccf28u: goto label_1ccf28;
        default: break;
    }

    ctx->pc = 0x1ccf00u;

    // 0x1ccf00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ccf04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccf0c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1ccf10: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1ccf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ccf14: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1ccf18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCF18u;
    {
        const bool branch_taken_0x1ccf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF18u;
        // 0x1ccf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf18) {
            ctx->pc = 0x1CCF30u;
            goto label_1ccf30;
        }
    }
    ctx->pc = 0x1CCF20u;
    // 0x1ccf20: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1CCF20u;
    SET_GPR_U32(ctx, 31, 0x1CCF28u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CCF20u, 0x1CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF28u;
label_1ccf28:
    // 0x1ccf28: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CCF28u;
    {
        const bool branch_taken_0x1ccf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF28u;
        // 0x1ccf2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf28) {
            ctx->pc = 0x1CCFBCu;
            return;
        }
    }
    ctx->pc = 0x1CCF30u;
label_1ccf30:
    // 0x1ccf30: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CCF30u;
    SET_GPR_U32(ctx, 31, 0x1CCF38u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CCF30u, 0x1CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF38u;
}
