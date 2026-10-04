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

// Function: entry_00112500
// Address: 0x112500 - 0x11251c
void entry_00112500_0x112500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112500_0x112500");
#endif

    ctx->pc = 0x112500u;

    // 0x112500: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x112504: 0x24631dc0  addiu       $v1, $v1, 0x1DC0
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7616));
    // 0x112508: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x112508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11250c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112510: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x112514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112518: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x112518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x11251cu;
}
