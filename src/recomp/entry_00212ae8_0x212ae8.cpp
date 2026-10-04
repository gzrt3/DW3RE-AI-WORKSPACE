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

// Function: entry_00212ae8
// Address: 0x212ae8 - 0x212b08
void entry_00212ae8_0x212ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212ae8_0x212ae8");
#endif

    switch (ctx->pc) {
        case 0x212b00u: goto label_212b00;
        default: break;
    }

    ctx->pc = 0x212ae8u;

    // 0x212ae8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212AE8u;
    {
        const bool branch_taken_0x212ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae8) {
            ctx->pc = 0x212B08u;
            return;
        }
    }
    ctx->pc = 0x212AF0u;
    // 0x212af0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212af4: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x212af8: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212AF8u, 0x212B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x212B00u;
    {
        const bool branch_taken_0x212b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b00) {
            ctx->pc = 0x212BBCu;
            return;
        }
    }
    ctx->pc = 0x212B08u;
}
