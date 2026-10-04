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

// Function: FUN_00167b20
// Address: 0x167b20 - 0x167b30
void FUN_00167b20_0x167b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167b20_0x167b20");
#endif

    ctx->pc = 0x167b20u;

    // 0x167b20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x167b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x167b24: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x167b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x167b28: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x167b2c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    ctx->pc = 0x167b30u;
}
