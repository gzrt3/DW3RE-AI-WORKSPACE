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

// Function: entry_0024a11c
// Address: 0x24a11c - 0x24a134
void entry_0024a11c_0x24a11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a11c_0x24a11c");
#endif

    ctx->pc = 0x24a11cu;

    // 0x24a11c: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24a120: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A120u;
    {
        const bool branch_taken_0x24a120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A120u;
        // 0x24a124: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a120) {
            ctx->pc = 0x24A134u;
            return;
        }
    }
    ctx->pc = 0x24A128u;
    // 0x24a128: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x24a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a12c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A12Cu;
    {
        const bool branch_taken_0x24a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A12Cu;
        // 0x24a130: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a12c) {
            ctx->pc = 0x24A13Cu;
            return;
        }
    }
    ctx->pc = 0x24A134u;
}
