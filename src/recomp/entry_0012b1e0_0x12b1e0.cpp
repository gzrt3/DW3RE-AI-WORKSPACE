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

// Function: entry_0012b1e0
// Address: 0x12b1e0 - 0x12b1f8
void entry_0012b1e0_0x12b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1e0_0x12b1e0");
#endif

    ctx->pc = 0x12b1e0u;

    // 0x12b1e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12b1e4: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x12b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x12b1e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B1E8u;
    {
        const bool branch_taken_0x12b1e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1E8u;
        // 0x12b1ec: 0x210bf  dsra32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1e8) {
            ctx->pc = 0x12B1F8u;
            return;
        }
    }
    ctx->pc = 0x12B1F0u;
    // 0x12b1f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12b1f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x12b1f8u;
}
