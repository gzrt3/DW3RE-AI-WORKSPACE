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

// Function: entry_00230ea8
// Address: 0x230ea8 - 0x230ed4
void entry_00230ea8_0x230ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ea8_0x230ea8");
#endif

    switch (ctx->pc) {
        case 0x230ec8u: goto label_230ec8;
        default: break;
    }

    ctx->pc = 0x230ea8u;

label_230ea8:
    // 0x230ea8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230eac: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x230eb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230eb4: 0x8c84128c  lw          $a0, 0x128C($a0)
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x230eb8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ebc: 0x34211284  ori         $at, $at, 0x1284
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4740);
    // 0x230ec0: 0xc06c2bc  jal         func_1B0AF0
    ctx->pc = 0x230EC0u;
    SET_GPR_U32(ctx, 31, 0x230EC8u);
    ctx->pc = 0x230EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EC0u;
    // 0x230ec4: 0x252821  addu        $a1, $at, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AF0u, 0x230EC0u, 0x230EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x230EC8u;
    {
        const bool branch_taken_0x230ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC8u;
        // 0x230ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec8) {
            ctx->pc = 0x230EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230ea8;
        }
    }
    ctx->pc = 0x230ED0u;
    // 0x230ed0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x230ed4u;
}
