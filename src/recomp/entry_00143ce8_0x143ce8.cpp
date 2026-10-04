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

// Function: entry_00143ce8
// Address: 0x143ce8 - 0x143cf4
void entry_00143ce8_0x143ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ce8_0x143ce8");
#endif

    ctx->pc = 0x143ce8u;

    // 0x143ce8: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x143ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x143cec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x143cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143cf0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x143cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x143cf4u;
}
