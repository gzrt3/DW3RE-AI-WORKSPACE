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

// Function: entry_0023b660
// Address: 0x23b660 - 0x23b668
void entry_0023b660_0x23b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b660_0x23b660");
#endif

    ctx->pc = 0x23b660u;

    // 0x23b660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x23b668u;
}
