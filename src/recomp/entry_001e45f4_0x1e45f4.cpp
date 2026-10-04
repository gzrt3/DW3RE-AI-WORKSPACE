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

// Function: entry_001e45f4
// Address: 0x1e45f4 - 0x1e461c
void entry_001e45f4_0x1e45f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45f4_0x1e45f4");
#endif

    ctx->pc = 0x1e45f4u;

    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
    // 0x1e45f8: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E45F8u;
    {
        const bool branch_taken_0x1e45f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45F8u;
        // 0x1e45fc: 0xad3821  addu        $a3, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45f8) {
            ctx->pc = 0x1E4638u;
            return;
        }
    }
    ctx->pc = 0x1E4600u;
    // 0x1e4600: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e4600u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e4604: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
    // 0x1e4608: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4608u;
    {
        const bool branch_taken_0x1e4608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4608u;
        // 0x1e460c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4608) {
            ctx->pc = 0x1E461Cu;
            return;
        }
    }
    ctx->pc = 0x1E4610u;
    // 0x1e4610: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
    // 0x1e4614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4614u;
    {
        const bool branch_taken_0x1e4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4614u;
        // 0x1e4618: 0xfce30ed0  sd          $v1, 0xED0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4614) {
            ctx->pc = 0x1E462Cu;
            return;
        }
    }
    ctx->pc = 0x1E461Cu;
}
