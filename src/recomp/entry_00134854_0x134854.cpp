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

// Function: entry_00134854
// Address: 0x134854 - 0x134870
void entry_00134854_0x134854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134854_0x134854");
#endif

    ctx->pc = 0x134854u;

    // 0x134854: 0x0  nop
    ctx->pc = 0x134854u;
    // NOP
    // 0x134858: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x134858u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13485c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x13485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x134860: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134860u;
    {
        const bool branch_taken_0x134860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x134860) {
            ctx->pc = 0x134870u;
            return;
        }
    }
    ctx->pc = 0x134868u;
    // 0x134868: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x134868u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13486c: 0x0  nop
    ctx->pc = 0x13486cu;
    // NOP
    ctx->pc = 0x134870u;
}
