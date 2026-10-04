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

// Function: entry_001c5cbc
// Address: 0x1c5cbc - 0x1c5ccc
void entry_001c5cbc_0x1c5cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5cbc_0x1c5cbc");
#endif

    ctx->pc = 0x1c5cbcu;

    // 0x1c5cbc: 0xa08002ec  sb          $zero, 0x2EC($a0)
    ctx->pc = 0x1c5cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5cc0: 0x908202e8  lbu         $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x1c5cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5cc8: 0xa08202e8  sb          $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c5cccu;
}
