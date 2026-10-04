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

// Function: FUN_001bfd80
// Address: 0x1bfd80 - 0x1bfd90
void FUN_001bfd80_0x1bfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bfd80_0x1bfd80");
#endif

    ctx->pc = 0x1bfd80u;

    // 0x1bfd80: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1bfd84: 0xa0830238  sb          $v1, 0x238($a0)
    ctx->pc = 0x1bfd84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bfd88: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bfd8c: 0xa0830233  sb          $v1, 0x233($a0)
    ctx->pc = 0x1bfd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bfd90u;
}
