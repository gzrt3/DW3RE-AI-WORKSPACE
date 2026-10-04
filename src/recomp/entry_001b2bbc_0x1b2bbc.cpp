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

// Function: entry_001b2bbc
// Address: 0x1b2bbc - 0x1b2bc0
void entry_001b2bbc_0x1b2bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2bbc_0x1b2bbc");
#endif

    ctx->pc = 0x1b2bbcu;

    // 0x1b2bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b2bc0u;
}
