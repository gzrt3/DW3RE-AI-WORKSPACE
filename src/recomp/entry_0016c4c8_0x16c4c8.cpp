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

// Function: entry_0016c4c8
// Address: 0x16c4c8 - 0x16c4f0
void entry_0016c4c8_0x16c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c4c8_0x16c4c8");
#endif

    switch (ctx->pc) {
        case 0x16c4dcu: goto label_16c4dc;
        default: break;
    }

    ctx->pc = 0x16c4c8u;

label_16c4c8:
    // 0x16c4c8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c4cc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16c4d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c4d4: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16C4D4u;
    SET_GPR_U32(ctx, 31, 0x16C4DCu);
    ctx->pc = 0x16C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4D4u;
    // 0x16c4d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16C4D4u, 0x16C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4DCu;
label_16c4dc:
    // 0x16c4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c4e0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C4E0u;
    {
        const bool branch_taken_0x16c4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4e0) {
            ctx->pc = 0x16C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c4c8;
        }
    }
    ctx->pc = 0x16C4E8u;
    // 0x16c4e8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16c4ec: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16c4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x16c4f0u;
}
