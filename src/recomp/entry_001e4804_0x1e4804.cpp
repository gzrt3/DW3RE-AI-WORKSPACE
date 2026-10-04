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

// Function: entry_001e4804
// Address: 0x1e4804 - 0x1e4814
void entry_001e4804_0x1e4804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4804_0x1e4804");
#endif

    ctx->pc = 0x1e4804u;

    // 0x1e4804: 0x0  nop
    ctx->pc = 0x1e4804u;
    // NOP
    // 0x1e4808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e480c: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e480cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4B2928u));
    // 0x1e4810: 0xfce30cf0  sd          $v1, 0xCF0($a3)
    ctx->pc = 0x1e4810u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
    ctx->pc = 0x1e4814u;
}
