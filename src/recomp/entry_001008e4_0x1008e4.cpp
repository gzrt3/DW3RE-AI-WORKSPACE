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

// Function: entry_001008e4
// Address: 0x1008e4 - 0x100908
void entry_001008e4_0x1008e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001008e4_0x1008e4");
#endif

    switch (ctx->pc) {
        case 0x1008ecu: goto label_1008ec;
        default: break;
    }

    ctx->pc = 0x1008e4u;

    // 0x1008e4: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1008E4u;
    SET_GPR_U32(ctx, 31, 0x1008ECu);
    ctx->pc = 0x1008E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008E4u;
    // 0x1008e8: 0x27858468  addiu       $a1, $gp, -0x7B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1008E4u, 0x1008ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1008ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1008f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1008f4: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1008f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1008F8u;
    {
        const bool branch_taken_0x1008f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1008FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008F8u;
        // 0x1008fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008f8) {
            ctx->pc = 0x100908u;
            return;
        }
    }
    ctx->pc = 0x100900u;
    // 0x100900: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x100900u;
    {
        const bool branch_taken_0x100900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100900) {
            ctx->pc = 0x100950u;
            return;
        }
    }
    ctx->pc = 0x100908u;
}
