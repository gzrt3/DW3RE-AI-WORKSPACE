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

// Function: entry_0019f2f8
// Address: 0x19f2f8 - 0x19f30c
void entry_0019f2f8_0x19f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2f8_0x19f2f8");
#endif

    ctx->pc = 0x19f2f8u;

    // 0x19f2f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f2fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x19f300: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F2E0u;
            return;
        }
    }
    ctx->pc = 0x19F308u;
    // 0x19f308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x19f30cu;
}
