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

// Function: entry_0024a134
// Address: 0x24a134 - 0x24a13c
void entry_0024a134_0x24a134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a134_0x24a134");
#endif

    ctx->pc = 0x24a134u;

    // 0x24a134: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x24a138: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x24a138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x24a13cu;
}
