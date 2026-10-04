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

// Function: FUN_001a4fd8
// Address: 0x1a4fd8 - 0x1a4fe4
void FUN_001a4fd8_0x1a4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4fd8_0x1a4fd8");
#endif

    ctx->pc = 0x1a4fd8u;

    // 0x1a4fd8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a4fdc: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x1a4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x1a4fe0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1a4fe4u;
}
