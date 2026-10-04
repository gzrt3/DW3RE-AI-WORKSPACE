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

// Function: entry_00238c58
// Address: 0x238c58 - 0x238c70
void entry_00238c58_0x238c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238c58_0x238c58");
#endif

    ctx->pc = 0x238c58u;

    // 0x238c58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x238c5c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x238c60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c64: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x238c68: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x238c6c: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x238c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x238c70u;
}
