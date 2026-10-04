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

// Function: entry_002445a8
// Address: 0x2445a8 - 0x2445d4
void entry_002445a8_0x2445a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002445a8_0x2445a8");
#endif

    ctx->pc = 0x2445a8u;

    // 0x2445a8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x2445ac: 0x2484eb08  addiu       $a0, $a0, -0x14F8
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961928));
    // 0x2445b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2445b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2445b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2445b8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2445bc: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445c0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2445c4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x2445D4u;
            return;
        }
    }
    ctx->pc = 0x2445CCu;
    // 0x2445cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2445CCu;
    {
        const bool branch_taken_0x2445cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445cc) {
            ctx->pc = 0x244614u;
            return;
        }
    }
    ctx->pc = 0x2445D4u;
}
