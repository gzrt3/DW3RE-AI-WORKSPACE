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

// Function: entry_0023c9f8
// Address: 0x23c9f8 - 0x23ca00
void entry_0023c9f8_0x23c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c9f8_0x23c9f8");
#endif

    ctx->pc = 0x23c9f8u;

    // 0x23c9f8: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x23c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x23c9fc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x23c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x23ca00u;
}
