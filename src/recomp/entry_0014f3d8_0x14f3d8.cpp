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

// Function: entry_0014f3d8
// Address: 0x14f3d8 - 0x14f404
void entry_0014f3d8_0x14f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f3d8_0x14f3d8");
#endif

    ctx->pc = 0x14f3d8u;

    // 0x14f3d8: 0x84a4003c  lh          $a0, 0x3C($a1)
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x14f3dc: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x14f3e0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F3E0u;
    {
        const bool branch_taken_0x14f3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e0) {
            ctx->pc = 0x14F464u;
            return;
        }
    }
    ctx->pc = 0x14F3E8u;
    // 0x14f3e8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14F3E8u;
    {
        const bool branch_taken_0x14f3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3e8) {
            ctx->pc = 0x14F464u;
            return;
        }
    }
    ctx->pc = 0x14F3F0u;
    // 0x14f3f0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x14f3f4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F464u;
            return;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F3FCu;
    {
        const bool branch_taken_0x14f3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3fc) {
            ctx->pc = 0x14F464u;
            return;
        }
    }
    ctx->pc = 0x14F404u;
}
