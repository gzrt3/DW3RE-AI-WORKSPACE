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

// Function: entry_001111dc
// Address: 0x1111dc - 0x111208
void entry_001111dc_0x1111dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001111dc_0x1111dc");
#endif

    ctx->pc = 0x1111dcu;

    // 0x1111dc: 0x0  nop
    ctx->pc = 0x1111dcu;
    // NOP
    // 0x1111e0: 0x11c00009  beqz        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1111E0u;
    {
        const bool branch_taken_0x1111e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111e0) {
            ctx->pc = 0x111208u;
            return;
        }
    }
    ctx->pc = 0x1111E8u;
    // 0x1111e8: 0x95af000a  lhu         $t7, 0xA($t5)
    ctx->pc = 0x1111e8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1111ec: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1111f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1111f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1111f4: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1111f8: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1111f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1111fc: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1111fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x111200: 0x91ce0002  lbu         $t6, 0x2($t6)
    ctx->pc = 0x111200u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x111204: 0xa16e0000  sb          $t6, 0x0($t3)
    ctx->pc = 0x111204u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 14));
    ctx->pc = 0x111208u;
}
