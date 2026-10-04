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

// Function: entry_002864c8
// Address: 0x2864c8 - 0x2864cc
void entry_002864c8_0x2864c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002864c8_0x2864c8");
#endif

    ctx->pc = 0x2864c8u;

    // 0x2864c8: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
    ctx->pc = 0x2864ccu;
}
