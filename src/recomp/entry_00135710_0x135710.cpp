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

// Function: entry_00135710
// Address: 0x135710 - 0x135724
void entry_00135710_0x135710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135710_0x135710");
#endif

    ctx->pc = 0x135710u;

    // 0x135710: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135714: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x135714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135718: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x135718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13571c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x135720: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x135720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x135724u;
}
