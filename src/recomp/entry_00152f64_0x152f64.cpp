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

// Function: entry_00152f64
// Address: 0x152f64 - 0x152f7c
void entry_00152f64_0x152f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152f64_0x152f64");
#endif

    ctx->pc = 0x152f64u;

    // 0x152f64: 0x90a3024b  lbu         $v1, 0x24B($a1)
    ctx->pc = 0x152f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 587)));
    // 0x152f68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152f6c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x152f70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152F70u;
    {
        const bool branch_taken_0x152f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f70) {
            ctx->pc = 0x152F7Cu;
            return;
        }
    }
    ctx->pc = 0x152F78u;
    // 0x152f78: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x152f7cu;
}
