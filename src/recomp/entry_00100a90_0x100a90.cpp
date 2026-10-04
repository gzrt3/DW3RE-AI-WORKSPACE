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

// Function: entry_00100a90
// Address: 0x100a90 - 0x100ab8
void entry_00100a90_0x100a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a90_0x100a90");
#endif

    ctx->pc = 0x100a90u;

    // 0x100a90: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x100a94: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x100a98: 0x521fff4  bgez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x100A98u;
    {
        const bool branch_taken_0x100a98 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x100A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A98u;
        // 0x100a9c: 0x256bffec  addiu       $t3, $t3, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a98) {
            ctx->pc = 0x100A6Cu;
            return;
        }
    }
    ctx->pc = 0x100AA0u;
    // 0x100aa0: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x100aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x100aa4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x100aa8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100AA8u;
    {
        const bool branch_taken_0x100aa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa8) {
            ctx->pc = 0x100AB8u;
            return;
        }
    }
    ctx->pc = 0x100AB0u;
    // 0x100ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100AB0u;
    {
        const bool branch_taken_0x100ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB0u;
        // 0x100ab4: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ab0) {
            ctx->pc = 0x100AC0u;
            return;
        }
    }
    ctx->pc = 0x100AB8u;
}
