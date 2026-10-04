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

// Function: entry_0021744c
// Address: 0x21744c - 0x217474
void entry_0021744c_0x21744c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021744c_0x21744c");
#endif

    ctx->pc = 0x21744cu;

    // 0x21744c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217450: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217450u;
    {
        const bool branch_taken_0x217450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217450u;
        // 0x217454: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217450) {
            ctx->pc = 0x217474u;
            return;
        }
    }
    ctx->pc = 0x217458u;
    // 0x217458: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21745c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217464: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
    // 0x217468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21746c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21746Cu;
        // 0x217470: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21746c) {
            ctx->pc = 0x217478u;
            return;
        }
    }
    ctx->pc = 0x217474u;
}
