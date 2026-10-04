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

// Function: entry_0013f0c0
// Address: 0x13f0c0 - 0x13f0c8
void entry_0013f0c0_0x13f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0c0_0x13f0c0");
#endif

    ctx->pc = 0x13f0c0u;

    // 0x13f0c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f0c4: 0xae0301bc  sw          $v1, 0x1BC($s0)
    ctx->pc = 0x13f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
    ctx->pc = 0x13f0c8u;
}
