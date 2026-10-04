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

// Function: entry_001ec78c
// Address: 0x1ec78c - 0x1ec798
void entry_001ec78c_0x1ec78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec78c_0x1ec78c");
#endif

    ctx->pc = 0x1ec78cu;

    // 0x1ec78c: 0x0  nop
    ctx->pc = 0x1ec78cu;
    // NOP
    // 0x1ec790: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ec794: 0xa04006c3  sb          $zero, 0x6C3($v0)
    ctx->pc = 0x1ec794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ec798u;
}
