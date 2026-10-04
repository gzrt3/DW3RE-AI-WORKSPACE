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

// Function: entry_001cf624
// Address: 0x1cf624 - 0x1cf62c
void entry_001cf624_0x1cf624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf624_0x1cf624");
#endif

    ctx->pc = 0x1cf624u;

    // 0x1cf624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf628: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x1cf62cu;
}
