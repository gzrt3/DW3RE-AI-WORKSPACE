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

// Function: FUN_001a6068
// Address: 0x1a6068 - 0x1a609c
void FUN_001a6068_0x1a6068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6068_0x1a6068");
#endif

    switch (ctx->pc) {
        case 0x1a6080u: goto label_1a6080;
        default: break;
    }

    ctx->pc = 0x1a6068u;

    // 0x1a6068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a606c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6070: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0xc0697e0  jal         func_1A5F80
    ctx->pc = 0x1A6078u;
    SET_GPR_U32(ctx, 31, 0x1A6080u);
    ctx->pc = 0x1A607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6078u;
    // 0x1a607c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F80u, 0x1A6078u, 0x1A6080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6080u;
label_1a6080:
    // 0x1a6080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6084: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6088: 0x80697e0  j           func_1A5F80
    ctx->pc = 0x1A6088u;
    ctx->pc = 0x1A608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6088u;
    // 0x1a608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    FUN_001a5f80_0x1a5f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6090u;
label_1a6090:
    // 0x1a6090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6094: 0x80697e0  j           func_1A5F80
    ctx->pc = 0x1A6094u;
    ctx->pc = 0x1A6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6094u;
    // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    FUN_001a5f80_0x1a5f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1A609Cu;
}
