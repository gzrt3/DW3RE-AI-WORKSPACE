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

// Function: entry_002234ac
// Address: 0x2234ac - 0x2234c8
void entry_002234ac_0x2234ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002234ac_0x2234ac");
#endif

    switch (ctx->pc) {
        case 0x2234b4u: goto label_2234b4;
        default: break;
    }

    ctx->pc = 0x2234acu;

    // 0x2234ac: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x2234ACu;
    SET_GPR_U32(ctx, 31, 0x2234B4u);
    ctx->pc = 0x2234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234ACu;
    // 0x2234b0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234ACu, 0x2234B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234B4u;
label_2234b4:
    // 0x2234b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234B4u;
    {
        const bool branch_taken_0x2234b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B4u;
        // 0x2234b8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b4) {
            ctx->pc = 0x2234C8u;
            return;
        }
    }
    ctx->pc = 0x2234BCu;
    // 0x2234bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234c0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2234C0u;
    {
        const bool branch_taken_0x2234c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234C0u;
        // 0x2234c4: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234c0) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x2234C8u;
}
