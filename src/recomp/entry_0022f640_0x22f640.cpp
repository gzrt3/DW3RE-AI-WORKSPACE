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

// Function: entry_0022f640
// Address: 0x22f640 - 0x22f668
void entry_0022f640_0x22f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f640_0x22f640");
#endif

    ctx->pc = 0x22f640u;

    // 0x22f640: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f644: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f648: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f64c: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f650: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F650u;
    {
        const bool branch_taken_0x22f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f650) {
            ctx->pc = 0x22F668u;
            return;
        }
    }
    ctx->pc = 0x22F658u;
    // 0x22f658: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f65c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F65Cu;
    {
        const bool branch_taken_0x22f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f65c) {
            ctx->pc = 0x22F668u;
            return;
        }
    }
    ctx->pc = 0x22F664u;
    // 0x22f664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x22f668u;
}
