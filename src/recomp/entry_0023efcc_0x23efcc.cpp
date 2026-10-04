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

// Function: entry_0023efcc
// Address: 0x23efcc - 0x23efd4
void entry_0023efcc_0x23efcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023efcc_0x23efcc");
#endif

    ctx->pc = 0x23efccu;

    // 0x23efcc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23efd0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x23efd4u;
}
