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

// Function: entry_001959f8
// Address: 0x1959f8 - 0x195a0c
void entry_001959f8_0x1959f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959f8_0x1959f8");
#endif

    ctx->pc = 0x1959f8u;

    // 0x1959f8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1959fc: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959FCu;
    {
        const bool branch_taken_0x1959fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959fc) {
            ctx->pc = 0x195A0Cu;
            return;
        }
    }
    ctx->pc = 0x195A04u;
    // 0x195a04: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195A18u;
            return;
        }
    }
    ctx->pc = 0x195A0Cu;
}
