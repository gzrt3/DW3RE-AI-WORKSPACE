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

// Function: entry_0014f1e0
// Address: 0x14f1e0 - 0x14f1e8
void entry_0014f1e0_0x14f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1e0_0x14f1e0");
#endif

    ctx->pc = 0x14f1e0u;

    // 0x14f1e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f1e4: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x14f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    ctx->pc = 0x14f1e8u;
}
