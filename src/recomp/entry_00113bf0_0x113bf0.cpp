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

// Function: entry_00113bf0
// Address: 0x113bf0 - 0x113c14
void entry_00113bf0_0x113bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113bf0_0x113bf0");
#endif

    ctx->pc = 0x113bf0u;

    // 0x113bf0: 0x822300be  lb          $v1, 0xBE($s1)
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113bf4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113bf8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x113BF8u;
    {
        const bool branch_taken_0x113bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113bf8) {
            ctx->pc = 0x113BC4u;
            return;
        }
    }
    ctx->pc = 0x113C00u;
    // 0x113c00: 0x8e2800c0  lw          $t0, 0xC0($s1)
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x113c04: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x113c08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x113c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x113C0Cu;
    {
        const bool branch_taken_0x113c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C0Cu;
        // 0x113c10: 0x3487ffe0  ori         $a3, $a0, 0xFFE0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65504);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c0c) {
            ctx->pc = 0x113C98u;
            return;
        }
    }
    ctx->pc = 0x113C14u;
}
