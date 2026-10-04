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

// Function: entry_00157fe0
// Address: 0x157fe0 - 0x157ffc
void entry_00157fe0_0x157fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157fe0_0x157fe0");
#endif

    switch (ctx->pc) {
        case 0x157ff0u: goto label_157ff0;
        default: break;
    }

    ctx->pc = 0x157fe0u;

    // 0x157fe0: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157FE0u;
    {
        const bool branch_taken_0x157fe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x157fe0) {
            ctx->pc = 0x157FFCu;
            return;
        }
    }
    ctx->pc = 0x157FE8u;
    // 0x157fe8: 0xc084900  jal         func_212400
    ctx->pc = 0x157FE8u;
    SET_GPR_U32(ctx, 31, 0x157FF0u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x157FE8u, 0x157FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FF0u;
label_157ff0:
    // 0x157ff0: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x157ff4: 0xc05139c  jal         func_144E70
    ctx->pc = 0x157FF4u;
    SET_GPR_U32(ctx, 31, 0x157FFCu);
    ctx->pc = 0x157FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FF4u;
    // 0x157ff8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FF4u, 0x157FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FFCu;
}
