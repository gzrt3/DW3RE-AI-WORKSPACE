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

// Function: entry_001bc80c
// Address: 0x1bc80c - 0x1bc834
void entry_001bc80c_0x1bc80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc80c_0x1bc80c");
#endif

    ctx->pc = 0x1bc80cu;

    // 0x1bc80c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc814: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1bc818: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc81c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc824: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1bc828: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC828u;
    {
        const bool branch_taken_0x1bc828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc828) {
            ctx->pc = 0x1BC834u;
            return;
        }
    }
    ctx->pc = 0x1BC830u;
    // 0x1bc830: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x1bc834u;
}
