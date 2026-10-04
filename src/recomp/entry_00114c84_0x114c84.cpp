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

// Function: entry_00114c84
// Address: 0x114c84 - 0x114cc8
void entry_00114c84_0x114c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c84_0x114c84");
#endif

    ctx->pc = 0x114c84u;

    // 0x114c84: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x114c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x114c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114c8c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x114c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x114c90: 0xa600002c  sh          $zero, 0x2C($s0)
    ctx->pc = 0x114c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x114c94: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x114c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c98: 0x82050029  lb          $a1, 0x29($s0)
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x114c9c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x114c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x114ca0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x114ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114ca4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x114ca8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x114ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x114cac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x114cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x114cb0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x114cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x114cb4: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x114cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cb8: 0xa2030033  sb          $v1, 0x33($s0)
    ctx->pc = 0x114cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cbc: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x114cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cc0: 0xa2030035  sb          $v1, 0x35($s0)
    ctx->pc = 0x114cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cc4: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x114cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x114cc8u;
}
