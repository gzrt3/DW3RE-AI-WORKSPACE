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

// Function: entry_0013677c
// Address: 0x13677c - 0x136788
void entry_0013677c_0x13677c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013677c_0x13677c");
#endif

    ctx->pc = 0x13677cu;

    // 0x13677c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136780: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x136780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x136784: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x136784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->pc = 0x136788u;
}
