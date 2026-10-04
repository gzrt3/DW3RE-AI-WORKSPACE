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

// Function: FUN_001de6b0
// Address: 0x1de6b0 - 0x1de6c0
void FUN_001de6b0_0x1de6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de6b0_0x1de6b0");
#endif

    ctx->pc = 0x1de6b0u;

    // 0x1de6b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1de6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1de6b4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1de6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1de6b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1de6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1de6bc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    ctx->pc = 0x1de6c0u;
}
