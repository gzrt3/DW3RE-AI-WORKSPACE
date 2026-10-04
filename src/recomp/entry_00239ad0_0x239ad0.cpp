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

// Function: entry_00239ad0
// Address: 0x239ad0 - 0x239ad8
void entry_00239ad0_0x239ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239ad0_0x239ad0");
#endif

    ctx->pc = 0x239ad0u;

    // 0x239ad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x239ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239ad4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x239ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x239ad8u;
}
