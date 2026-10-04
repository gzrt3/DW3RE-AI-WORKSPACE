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

// Function: entry_001e47dc
// Address: 0x1e47dc - 0x1e4804
void entry_001e47dc_0x1e47dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47dc_0x1e47dc");
#endif

    ctx->pc = 0x1e47dcu;

    // 0x1e47dc: 0x0  nop
    ctx->pc = 0x1e47dcu;
    // NOP
    // 0x1e47e0: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x1E47E0u;
    {
        const bool branch_taken_0x1e47e0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47E0u;
        // 0x1e47e4: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47e0) {
            ctx->pc = 0x1E4820u;
            return;
        }
    }
    ctx->pc = 0x1E47E8u;
    // 0x1e47e8: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e47ec: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
    // 0x1e47f0: 0x146b0004  bne         $v1, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E47F0u;
    {
        const bool branch_taken_0x1e47f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47f0) {
            ctx->pc = 0x1E4804u;
            return;
        }
    }
    ctx->pc = 0x1E47F8u;
    // 0x1e47f8: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
    // 0x1e47fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0xfce30cf0  sd          $v1, 0xCF0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4814u;
            return;
        }
    }
    ctx->pc = 0x1E4804u;
}
