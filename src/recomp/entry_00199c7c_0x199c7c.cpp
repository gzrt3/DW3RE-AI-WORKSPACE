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

// Function: entry_00199c7c
// Address: 0x199c7c - 0x199cac
void entry_00199c7c_0x199c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c7c_0x199c7c");
#endif

    switch (ctx->pc) {
        case 0x199c88u: goto label_199c88;
        default: break;
    }

    ctx->pc = 0x199c7cu;

    // 0x199c7c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199c80: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199C80u;
    SET_GPR_U32(ctx, 31, 0x199C88u);
    ctx->pc = 0x199C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C80u;
    // 0x199c84: 0x24849df8  addiu       $a0, $a0, -0x6208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199C80u, 0x199C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C88u;
label_199c88:
    // 0x199c88: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x199c8c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x199c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x199c90: 0x246357e0  addiu       $v1, $v1, 0x57E0
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22496));
    // 0x199c94: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x199c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x199c98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x199c98u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x2857E0u));
    // 0x199c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199ca0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x199ca0u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 4));
    // 0x199ca4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x199CA4u;
    {
        const bool branch_taken_0x199ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CA4u;
        // 0x199ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ca4) {
            ctx->pc = 0x199F28u;
            return;
        }
    }
    ctx->pc = 0x199CACu;
}
