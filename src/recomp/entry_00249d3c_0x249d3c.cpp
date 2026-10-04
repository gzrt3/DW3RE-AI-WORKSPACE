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

// Function: entry_00249d3c
// Address: 0x249d3c - 0x249d54
void entry_00249d3c_0x249d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249d3c_0x249d3c");
#endif

    ctx->pc = 0x249d3cu;

    // 0x249d3c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x249d40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x249d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x249d44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x249d48: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249d4c: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
    // 0x249d50: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    ctx->pc = 0x249d54u;
}
