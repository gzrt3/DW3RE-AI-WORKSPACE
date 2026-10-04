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

// Function: entry_00152cd4
// Address: 0x152cd4 - 0x152ce8
void entry_00152cd4_0x152cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cd4_0x152cd4");
#endif

    ctx->pc = 0x152cd4u;

    // 0x152cd4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x152cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152cd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x152cd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x152cdc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x152cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x152ce0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152ce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152ce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->pc = 0x152ce8u;
}
