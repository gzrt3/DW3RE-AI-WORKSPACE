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

// Function: entry_0022f7f4
// Address: 0x22f7f4 - 0x22f818
void entry_0022f7f4_0x22f7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f7f4_0x22f7f4");
#endif

    ctx->pc = 0x22f7f4u;

    // 0x22f7f4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f7f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f7fc: 0x8c22001c  lw          $v0, 0x1C($at)
    ctx->pc = 0x22f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B001Cu));
    // 0x22f800: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F800u;
    {
        const bool branch_taken_0x22f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f800) {
            ctx->pc = 0x22F818u;
            return;
        }
    }
    ctx->pc = 0x22F808u;
    // 0x22f808: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f80c: 0x8c220304  lw          $v0, 0x304($at)
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B0304u));
    // 0x22f810: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F810u;
    {
        const bool branch_taken_0x22f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F810u;
        // 0x22f814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f810) {
            ctx->pc = 0x22F824u;
            return;
        }
    }
    ctx->pc = 0x22F818u;
}
