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

// Function: entry_001cf2f4
// Address: 0x1cf2f4 - 0x1cf320
void entry_001cf2f4_0x1cf2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf2f4_0x1cf2f4");
#endif

    switch (ctx->pc) {
        case 0x1cf300u: goto label_1cf300;
        default: break;
    }

    ctx->pc = 0x1cf2f4u;

    // 0x1cf2f4: 0x0  nop
    ctx->pc = 0x1cf2f4u;
    // NOP
    // 0x1cf2f8: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x1CF2F8u;
    SET_GPR_U32(ctx, 31, 0x1CF300u);
    ctx->pc = 0x1CF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2F8u;
    // 0x1cf2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1CF2F8u, 0x1CF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF300u;
label_1cf300:
    // 0x1cf300: 0xfe620060  sd          $v0, 0x60($s3)
    ctx->pc = 0x1cf300u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
    // 0x1cf304: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf308: 0xa2630070  sb          $v1, 0x70($s3)
    ctx->pc = 0x1cf308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf310: 0xa2630071  sb          $v1, 0x71($s3)
    ctx->pc = 0x1cf310u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf314: 0xa2630072  sb          $v1, 0x72($s3)
    ctx->pc = 0x1cf314u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf318: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cf318u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf31c: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    ctx->pc = 0x1cf320u;
}
