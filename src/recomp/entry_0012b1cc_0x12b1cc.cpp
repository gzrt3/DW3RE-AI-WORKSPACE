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

// Function: entry_0012b1cc
// Address: 0x12b1cc - 0x12b1e0
void entry_0012b1cc_0x12b1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1cc_0x12b1cc");
#endif

    ctx->pc = 0x12b1ccu;

    // 0x12b1cc: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1CCu;
    {
        const bool branch_taken_0x12b1cc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x12B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1CCu;
        // 0x12b1d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1cc) {
            ctx->pc = 0x12B1E0u;
            return;
        }
    }
    ctx->pc = 0x12B1D4u;
    // 0x12b1d4: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x12b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x12b1d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x12b1dc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x12b1e0u;
}
