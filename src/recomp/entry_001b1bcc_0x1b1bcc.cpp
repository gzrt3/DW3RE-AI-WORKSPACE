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

// Function: entry_001b1bcc
// Address: 0x1b1bcc - 0x1b1bd4
void entry_001b1bcc_0x1b1bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1bcc_0x1b1bcc");
#endif

    ctx->pc = 0x1b1bccu;

    // 0x1b1bcc: 0x26226280  addiu       $v0, $s1, 0x6280
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1bd0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1b1bd4u;
}
