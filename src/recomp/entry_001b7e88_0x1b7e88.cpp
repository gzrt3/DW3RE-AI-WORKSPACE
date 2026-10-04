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

// Function: entry_001b7e88
// Address: 0x1b7e88 - 0x1b7e94
void entry_001b7e88_0x1b7e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7e88_0x1b7e88");
#endif

    ctx->pc = 0x1b7e88u;

    // 0x1b7e88: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b7e90: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1b7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    ctx->pc = 0x1b7e94u;
}
