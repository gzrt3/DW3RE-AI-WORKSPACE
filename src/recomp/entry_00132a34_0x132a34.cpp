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

// Function: entry_00132a34
// Address: 0x132a34 - 0x132a4c
void entry_00132a34_0x132a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a34_0x132a34");
#endif

    ctx->pc = 0x132a34u;

    // 0x132a34: 0x28c1005f  slti        $at, $a2, 0x5F
    ctx->pc = 0x132a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)95) ? 1 : 0);
    // 0x132a38: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x132A38u;
    {
        const bool branch_taken_0x132a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A38u;
        // 0x132a3c: 0x28c10060  slti        $at, $a2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a38) {
            ctx->pc = 0x132A4Cu;
            return;
        }
    }
    ctx->pc = 0x132A40u;
    // 0x132a40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x132A44u;
    {
        const bool branch_taken_0x132a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A44u;
        // 0x132a48: 0x2484e7f0  addiu       $a0, $a0, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a44) {
            ctx->pc = 0x132A84u;
            return;
        }
    }
    ctx->pc = 0x132A4Cu;
}
