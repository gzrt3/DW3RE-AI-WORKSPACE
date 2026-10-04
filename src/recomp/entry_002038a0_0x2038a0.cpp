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

// Function: entry_002038a0
// Address: 0x2038a0 - 0x2038c8
void entry_002038a0_0x2038a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002038a0_0x2038a0");
#endif

    switch (ctx->pc) {
        case 0x2038acu: goto label_2038ac;
        case 0x2038bcu: goto label_2038bc;
        default: break;
    }

    ctx->pc = 0x2038a0u;

    // 0x2038a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2038a4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2038A4u;
    SET_GPR_U32(ctx, 31, 0x2038ACu);
    ctx->pc = 0x2038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A4u;
    // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2038A4u, 0x2038ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2038b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2038b4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x2038B4u;
    SET_GPR_U32(ctx, 31, 0x2038BCu);
    ctx->pc = 0x2038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038B4u;
    // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x2038B4u, 0x2038BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038BCu;
label_2038bc:
    // 0x2038bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2038c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2038C0u;
    {
        const bool branch_taken_0x2038c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c0) {
            ctx->pc = 0x2039E8u;
            return;
        }
    }
    ctx->pc = 0x2038C8u;
}
