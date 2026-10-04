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

// Function: entry_00199f24
// Address: 0x199f24 - 0x199f28
void entry_00199f24_0x199f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f24_0x199f24");
#endif

    ctx->pc = 0x199f24u;

    // 0x199f24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x199f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x199f28u;
}
