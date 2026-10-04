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

// Function: entry_0021afe0
// Address: 0x21afe0 - 0x21b004
void entry_0021afe0_0x21afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021afe0_0x21afe0");
#endif

    ctx->pc = 0x21afe0u;

    // 0x21afe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21afe4: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AFE4u;
    {
        const bool branch_taken_0x21afe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE4u;
        // 0x21afe8: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afe4) {
            ctx->pc = 0x21B014u;
            return;
        }
    }
    ctx->pc = 0x21AFECu;
    // 0x21afec: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AFECu;
    {
        const bool branch_taken_0x21afec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21afec) {
            ctx->pc = 0x21B004u;
            return;
        }
    }
    ctx->pc = 0x21AFF4u;
    // 0x21aff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21aff8: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21affc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AFFCu;
    {
        const bool branch_taken_0x21affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFFCu;
        // 0x21b000: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21affc) {
            ctx->pc = 0x21B014u;
            return;
        }
    }
    ctx->pc = 0x21B004u;
}
