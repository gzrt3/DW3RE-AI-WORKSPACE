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

// Function: entry_0014f3b4
// Address: 0x14f3b4 - 0x14f3d8
void entry_0014f3b4_0x14f3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f3b4_0x14f3b4");
#endif

    ctx->pc = 0x14f3b4u;

    // 0x14f3b4: 0x8e050200  lw          $a1, 0x200($s0)
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f3b8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F3B8u;
    {
        const bool branch_taken_0x14f3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3b8) {
            ctx->pc = 0x14F464u;
            return;
        }
    }
    ctx->pc = 0x14F3C0u;
    // 0x14f3c0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x14f3c4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14f3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x14f3c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F3D8u;
            return;
        }
    }
    ctx->pc = 0x14F3D0u;
    // 0x14f3d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14F3D0u;
    {
        const bool branch_taken_0x14f3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3d0) {
            ctx->pc = 0x14F404u;
            return;
        }
    }
    ctx->pc = 0x14F3D8u;
}
