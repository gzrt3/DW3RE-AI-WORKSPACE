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

// Function: entry_00226ae8
// Address: 0x226ae8 - 0x226b0c
void entry_00226ae8_0x226ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226ae8_0x226ae8");
#endif

    switch (ctx->pc) {
        case 0x226b00u: goto label_226b00;
        default: break;
    }

    ctx->pc = 0x226ae8u;

    // 0x226ae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226aec: 0x14460023  bne         $v0, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x226AECu;
    {
        const bool branch_taken_0x226aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x226aec) {
            ctx->pc = 0x226B7Cu;
            return;
        }
    }
    ctx->pc = 0x226AF4u;
    // 0x226af4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226af8: 0xc04494c  jal         func_112530
    ctx->pc = 0x226AF8u;
    SET_GPR_U32(ctx, 31, 0x226B00u);
    ctx->pc = 0x226AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AF8u;
    // 0x226afc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226AF8u, 0x226B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B00u;
label_226b00:
    // 0x226b00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226B00u;
    {
        const bool branch_taken_0x226b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B00u;
        // 0x226b04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b00) {
            ctx->pc = 0x226B0Cu;
            return;
        }
    }
    ctx->pc = 0x226B08u;
    // 0x226b08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x226b0cu;
}
