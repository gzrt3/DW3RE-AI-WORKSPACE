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

// Function: FUN_0019d0a8
// Address: 0x19d0a8 - 0x19d0b8
void FUN_0019d0a8_0x19d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d0a8_0x19d0a8");
#endif

    ctx->pc = 0x19d0a8u;

    // 0x19d0a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19d0ac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x19d0b0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x19d0b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    ctx->pc = 0x19d0b8u;
}
