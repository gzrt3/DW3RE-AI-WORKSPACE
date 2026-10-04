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

// Function: entry_001b0e94
// Address: 0x1b0e94 - 0x1b0eb4
void entry_001b0e94_0x1b0e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e94_0x1b0e94");
#endif

    switch (ctx->pc) {
        case 0x1b0eacu: goto label_1b0eac;
        default: break;
    }

    ctx->pc = 0x1b0e94u;

    // 0x1b0e94: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b0e98: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0E98u;
    {
        const bool branch_taken_0x1b0e98 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b0e98) {
            ctx->pc = 0x1B0E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E98u;
            // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0EB4u;
            return;
        }
    }
    ctx->pc = 0x1B0EA0u;
    // 0x1b0ea0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0ea4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0EA4u;
    SET_GPR_U32(ctx, 31, 0x1B0EACu);
    ctx->pc = 0x1B0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EA4u;
    // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0EA4u, 0x1B0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b0eb0: 0xaef57380  sw          $s5, 0x7380($s7)
    ctx->pc = 0x1b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
    ctx->pc = 0x1b0eb4u;
}
