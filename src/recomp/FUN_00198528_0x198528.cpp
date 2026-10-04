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

// Function: FUN_00198528
// Address: 0x198528 - 0x19852c
void FUN_00198528_0x198528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198528_0x198528");
#endif

    ctx->pc = 0x198528u;

    // 0x198528: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x198528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    ctx->pc = 0x19852cu;
}
