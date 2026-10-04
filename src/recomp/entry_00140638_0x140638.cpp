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

// Function: entry_00140638
// Address: 0x140638 - 0x14063c
void entry_00140638_0x140638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140638_0x140638");
#endif

    ctx->pc = 0x140638u;

    // 0x140638: 0xa60001aa  sh          $zero, 0x1AA($s0)
    ctx->pc = 0x140638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 426), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14063cu;
}
