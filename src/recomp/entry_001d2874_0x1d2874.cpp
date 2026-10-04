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

// Function: entry_001d2874
// Address: 0x1d2874 - 0x1d2890
void entry_001d2874_0x1d2874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2874_0x1d2874");
#endif

    ctx->pc = 0x1d2874u;

    // 0x1d2874: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2878: 0x84e2021c  lh          $v0, 0x21C($a3)
    ctx->pc = 0x1d2878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 540)));
    // 0x1d287c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2880: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2880u;
    {
        const bool branch_taken_0x1d2880 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2880) {
            ctx->pc = 0x1D2890u;
            return;
        }
    }
    ctx->pc = 0x1D2888u;
    // 0x1d2888: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1d288c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1d2890u;
}
