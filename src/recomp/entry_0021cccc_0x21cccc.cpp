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

// Function: entry_0021cccc
// Address: 0x21cccc - 0x21cce4
void entry_0021cccc_0x21cccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cccc_0x21cccc");
#endif

    ctx->pc = 0x21ccccu;

    // 0x21cccc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x21ccd0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x21ccd4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCD4u;
    {
        const bool branch_taken_0x21ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccd4) {
            ctx->pc = 0x21CCE4u;
            return;
        }
    }
    ctx->pc = 0x21CCDCu;
    // 0x21ccdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21CCDCu;
    {
        const bool branch_taken_0x21ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccdc) {
            ctx->pc = 0x21CD70u;
            return;
        }
    }
    ctx->pc = 0x21CCE4u;
}
