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

// Function: entry_00148e7c
// Address: 0x148e7c - 0x148e84
void entry_00148e7c_0x148e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e7c_0x148e7c");
#endif

    ctx->pc = 0x148e7cu;

    // 0x148e7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x148e84u;
}
