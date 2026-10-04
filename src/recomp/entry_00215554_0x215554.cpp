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

// Function: entry_00215554
// Address: 0x215554 - 0x215570
void entry_00215554_0x215554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215554_0x215554");
#endif

    ctx->pc = 0x215554u;

    // 0x215554: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x215554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x215558: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x21555c: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x21555cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215560: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215560u;
        // 0x215564: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215560) {
            ctx->pc = 0x215570u;
            return;
        }
    }
    ctx->pc = 0x215568u;
    // 0x215568: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21556c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x215570u;
}
