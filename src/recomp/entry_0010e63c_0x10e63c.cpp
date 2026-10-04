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

// Function: entry_0010e63c
// Address: 0x10e63c - 0x10e664
void entry_0010e63c_0x10e63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e63c_0x10e63c");
#endif

    ctx->pc = 0x10e63cu;

    // 0x10e63c: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x10e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e640: 0xa144000e  sb          $a0, 0xE($t2)
    ctx->pc = 0x10e640u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e644: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x10e644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10e648: 0x9065024a  lbu         $a1, 0x24A($v1)
    ctx->pc = 0x10e648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 586)));
    // 0x10e64c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e650: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10e654: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x10e654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e658: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E658u;
    {
        const bool branch_taken_0x10e658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e658) {
            ctx->pc = 0x10E664u;
            return;
        }
    }
    ctx->pc = 0x10E660u;
    // 0x10e660: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x10e660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x10e664u;
}
