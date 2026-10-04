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

// Function: entry_001e0b10
// Address: 0x1e0b10 - 0x1e0b28
void entry_001e0b10_0x1e0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b10_0x1e0b10");
#endif

    ctx->pc = 0x1e0b10u;

    // 0x1e0b10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0b14: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1e0b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e0b18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B18u;
    {
        const bool branch_taken_0x1e0b18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B18u;
        // 0x1e0b1c: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b18) {
            ctx->pc = 0x1E0B28u;
            return;
        }
    }
    ctx->pc = 0x1E0B20u;
    // 0x1e0b20: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e0b24: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1e0b28u;
}
