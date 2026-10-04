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

// Function: entry_00199de4
// Address: 0x199de4 - 0x199e10
void entry_00199de4_0x199de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199de4_0x199de4");
#endif

    ctx->pc = 0x199de4u;

    // 0x199de4: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x199DE4u;
    {
        const bool branch_taken_0x199de4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE4u;
        // 0x199de8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de4) {
            ctx->pc = 0x199ED8u;
            return;
        }
    }
    ctx->pc = 0x199DECu;
    // 0x199dec: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199df0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199df8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x199df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x199dfc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x199DFCu;
    {
        const bool branch_taken_0x199dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DFCu;
        // 0x199e00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dfc) {
            ctx->pc = 0x199E30u;
            return;
        }
    }
    ctx->pc = 0x199E04u;
    // 0x199e04: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x199e08: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199e10u;
}
