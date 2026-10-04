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

// Function: entry_001110e0
// Address: 0x1110e0 - 0x111108
void entry_001110e0_0x1110e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110e0_0x1110e0");
#endif

    ctx->pc = 0x1110e0u;

    // 0x1110e0: 0x11600009  beqz        $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1110E0u;
    {
        const bool branch_taken_0x1110e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110e0) {
            ctx->pc = 0x111108u;
            return;
        }
    }
    ctx->pc = 0x1110E8u;
    // 0x1110e8: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x1110e8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1110ec: 0xc95821  addu        $t3, $a2, $t1
    ctx->pc = 0x1110ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1110f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1110f4: 0xe6100  sll         $t4, $t6, 4
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1110f8: 0x18e6023  subu        $t4, $t4, $t6
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1110fc: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x111100: 0x918c0004  lbu         $t4, 0x4($t4)
    ctx->pc = 0x111100u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x111104: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x111104u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
    ctx->pc = 0x111108u;
}
