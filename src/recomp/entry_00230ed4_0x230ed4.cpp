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

// Function: entry_00230ed4
// Address: 0x230ed4 - 0x230ef0
void entry_00230ed4_0x230ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ed4_0x230ed4");
#endif

    ctx->pc = 0x230ed4u;

    // 0x230ed4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x230ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230edc: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x230ee0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x230ee4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ee8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x230eec: 0xac22128c  sw          $v0, 0x128C($at)
    ctx->pc = 0x230eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4748), GPR_U32(ctx, 2));
    ctx->pc = 0x230ef0u;
}
