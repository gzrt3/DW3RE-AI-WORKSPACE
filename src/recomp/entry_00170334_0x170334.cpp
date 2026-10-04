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

// Function: entry_00170334
// Address: 0x170334 - 0x170344
void entry_00170334_0x170334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170334_0x170334");
#endif

    ctx->pc = 0x170334u;

    // 0x170334: 0x0  nop
    ctx->pc = 0x170334u;
    // NOP
    // 0x170338: 0xc75821  addu        $t3, $a2, $a3
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17033c: 0xa1600100  sb          $zero, 0x100($t3)
    ctx->pc = 0x17033cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x170340: 0xa1600110  sb          $zero, 0x110($t3)
    ctx->pc = 0x170340u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 272), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x170344u;
}
