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

// Function: entry_001816e8
// Address: 0x1816e8 - 0x18170c
void entry_001816e8_0x1816e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001816e8_0x1816e8");
#endif

    ctx->pc = 0x1816e8u;

    // 0x1816e8: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1816E8u;
    {
        const bool branch_taken_0x1816e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1816e8) {
            ctx->pc = 0x181730u;
            return;
        }
    }
    ctx->pc = 0x1816F0u;
    // 0x1816f0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1816f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1816f8: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1816fc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816FCu;
    {
        const bool branch_taken_0x1816fc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816FCu;
        // 0x181700: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816fc) {
            ctx->pc = 0x18170Cu;
            return;
        }
    }
    ctx->pc = 0x181704u;
    // 0x181704: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181708: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x18170cu;
}
