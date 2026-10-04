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

// Function: entry_0021c4c4
// Address: 0x21c4c4 - 0x21c4cc
void entry_0021c4c4_0x21c4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c4c4_0x21c4c4");
#endif

    ctx->pc = 0x21c4c4u;

    // 0x21c4c4: 0xaf9092d0  sw          $s0, -0x6D30($gp)
    ctx->pc = 0x21c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939344), GPR_U32(ctx, 16));
    // 0x21c4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21c4ccu;
}
