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

// Function: entry_001816c8
// Address: 0x1816c8 - 0x1816dc
void entry_001816c8_0x1816c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001816c8_0x1816c8");
#endif

    ctx->pc = 0x1816c8u;

    // 0x1816c8: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1816cc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816CCu;
    {
        const bool branch_taken_0x1816cc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816CCu;
        // 0x1816d0: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816cc) {
            ctx->pc = 0x1816DCu;
            return;
        }
    }
    ctx->pc = 0x1816D4u;
    // 0x1816d4: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x1816d8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x1816dcu;
}
