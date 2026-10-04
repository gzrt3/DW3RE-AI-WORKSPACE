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

// Function: FUN_001788d0
// Address: 0x1788d0 - 0x1788ec
void FUN_001788d0_0x1788d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001788d0_0x1788d0");
#endif

    ctx->pc = 0x1788d0u;

    // 0x1788d0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1788d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1788d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1788d8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1788d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1788dc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1788dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1788e0: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1788e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1788e4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1788e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1788e8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x1788ecu;
}
