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

// Function: entry_001a6af8
// Address: 0x1a6af8 - 0x1a6b18
void entry_001a6af8_0x1a6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6af8_0x1a6af8");
#endif

    switch (ctx->pc) {
        case 0x1a6b14u: goto label_1a6b14;
        default: break;
    }

    ctx->pc = 0x1a6af8u;

    // 0x1a6af8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1a6afc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b00: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1a6b04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B04u;
    {
        const bool branch_taken_0x1a6b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B04u;
        // 0x1a6b08: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b04) {
            ctx->pc = 0x1A6B18u;
            return;
        }
    }
    ctx->pc = 0x1A6B0Cu;
    // 0x1a6b0c: 0xc069300  jal         func_1A4C00
    ctx->pc = 0x1A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B14u);
    ctx->pc = 0x1A4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C00u, 0x1A6B0Cu, 0x1A6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B14u;
label_1a6b14:
    // 0x1a6b14: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x1a6b18u;
}
