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

// Function: FUN_001a1930
// Address: 0x1a1930 - 0x1a1954
void FUN_001a1930_0x1a1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1930_0x1a1930");
#endif

    ctx->pc = 0x1a1930u;

    // 0x1a1930: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1934: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x1a1938: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a193c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a1940: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a1944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1944u;
    {
        const bool branch_taken_0x1a1944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1944) {
            ctx->pc = 0x1A1954u;
            return;
        }
    }
    ctx->pc = 0x1A194Cu;
    // 0x1a194c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a1950: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a1950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a1954u;
}
