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

// Function: FUN_00104010
// Address: 0x104010 - 0x104018
void FUN_00104010_0x104010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00104010_0x104010");
#endif

    ctx->pc = 0x104010u;

    // 0x104010: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x104014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x104014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x104018u;
}
