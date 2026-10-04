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

// Function: entry_00134c9c
// Address: 0x134c9c - 0x134ccc
void entry_00134c9c_0x134c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c9c_0x134c9c");
#endif

    ctx->pc = 0x134c9cu;

    // 0x134c9c: 0x0  nop
    ctx->pc = 0x134c9cu;
    // NOP
    // 0x134ca0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ca4: 0x9025a405  lbu         $a1, -0x5BFB($at)
    ctx->pc = 0x134ca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A405u));
    // 0x134ca8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x134cac: 0x2484fd00  addiu       $a0, $a0, -0x300
    ctx->pc = 0x134cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
    // 0x134cb0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x134cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134cb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x134cb8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x134cb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134cbc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134CBCu;
    {
        const bool branch_taken_0x134cbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134cbc) {
            ctx->pc = 0x134CCCu;
            return;
        }
    }
    ctx->pc = 0x134CC4u;
    // 0x134cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134CC4u;
    {
        const bool branch_taken_0x134cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cc4) {
            ctx->pc = 0x134CD8u;
            return;
        }
    }
    ctx->pc = 0x134CCCu;
}
