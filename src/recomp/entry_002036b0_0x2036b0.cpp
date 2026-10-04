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

// Function: entry_002036b0
// Address: 0x2036b0 - 0x2036cc
void entry_002036b0_0x2036b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002036b0_0x2036b0");
#endif

    ctx->pc = 0x2036b0u;

    // 0x2036b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2036b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2036B4u;
    {
        const bool branch_taken_0x2036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036b4) {
            ctx->pc = 0x203700u;
            return;
        }
    }
    ctx->pc = 0x2036BCu;
    // 0x2036bc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2036c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2036C0u;
    {
        const bool branch_taken_0x2036c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2036c0) {
            ctx->pc = 0x2036CCu;
            return;
        }
    }
    ctx->pc = 0x2036C8u;
    // 0x2036c8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2036c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->pc = 0x2036ccu;
}
