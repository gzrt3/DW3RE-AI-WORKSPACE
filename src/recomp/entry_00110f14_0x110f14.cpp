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

// Function: entry_00110f14
// Address: 0x110f14 - 0x110f20
void entry_00110f14_0x110f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f14_0x110f14");
#endif

    ctx->pc = 0x110f14u;

    // 0x110f14: 0x0  nop
    ctx->pc = 0x110f14u;
    // NOP
    // 0x110f18: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110f1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x110f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x110f20u;
}
