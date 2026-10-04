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

// Function: entry_00239c58
// Address: 0x239c58 - 0x239c5c
void entry_00239c58_0x239c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239c58_0x239c58");
#endif

    ctx->pc = 0x239c58u;

    // 0x239c58: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x239c5cu;
}
