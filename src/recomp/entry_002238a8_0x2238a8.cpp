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

// Function: entry_002238a8
// Address: 0x2238a8 - 0x2238c0
void entry_002238a8_0x2238a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002238a8_0x2238a8");
#endif

    ctx->pc = 0x2238a8u;

    // 0x2238a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2238ac: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2238acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2238b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2238B0u;
    {
        const bool branch_taken_0x2238b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2238b0) {
            ctx->pc = 0x22388Cu;
            return;
        }
    }
    ctx->pc = 0x2238B8u;
    // 0x2238b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2238b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2238bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x2238c0u;
}
