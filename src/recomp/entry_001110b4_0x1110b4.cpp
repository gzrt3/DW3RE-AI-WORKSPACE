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

// Function: entry_001110b4
// Address: 0x1110b4 - 0x1110e0
void entry_001110b4_0x1110b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110b4_0x1110b4");
#endif

    ctx->pc = 0x1110b4u;

    // 0x1110b4: 0x0  nop
    ctx->pc = 0x1110b4u;
    // NOP
    // 0x1110b8: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1110B8u;
    {
        const bool branch_taken_0x1110b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110b8) {
            ctx->pc = 0x1110E0u;
            return;
        }
    }
    ctx->pc = 0x1110C0u;
    // 0x1110c0: 0x95af000a  lhu         $t7, 0xA($t5)
    ctx->pc = 0x1110c0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1110c4: 0xc96021  addu        $t4, $a2, $t1
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1110c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1110cc: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1110d0: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1110d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1110d4: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1110d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1110d8: 0x91ce0004  lbu         $t6, 0x4($t6)
    ctx->pc = 0x1110d8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1110dc: 0xa18e0000  sb          $t6, 0x0($t4)
    ctx->pc = 0x1110dcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 14));
    ctx->pc = 0x1110e0u;
}
