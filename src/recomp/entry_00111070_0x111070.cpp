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

// Function: entry_00111070
// Address: 0x111070 - 0x1110b4
void entry_00111070_0x111070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111070_0x111070");
#endif

    ctx->pc = 0x111070u;

    // 0x111070: 0x11800010  beqz        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x111070u;
    {
        const bool branch_taken_0x111070 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x111070) {
            ctx->pc = 0x1110B4u;
            return;
        }
    }
    ctx->pc = 0x111078u;
    // 0x111078: 0x1160000e  beqz        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x111078u;
    {
        const bool branch_taken_0x111078 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x111078) {
            ctx->pc = 0x1110B4u;
            return;
        }
    }
    ctx->pc = 0x111080u;
    // 0x111080: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x111080u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111084: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x111084u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111088: 0x187100  sll         $t6, $t8, 4
    ctx->pc = 0x111088u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x11108c: 0x1d8c023  subu        $t8, $t6, $t8
    ctx->pc = 0x11108cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x111090: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x111094: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x111098: 0xb87821  addu        $t7, $a1, $t8
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x11109c: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x11109cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1110a0: 0x91ef0004  lbu         $t7, 0x4($t7)
    ctx->pc = 0x1110a0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1110a4: 0x91ce0004  lbu         $t6, 0x4($t6)
    ctx->pc = 0x1110a4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1110a8: 0x15ee0002  bne         $t7, $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1110A8u;
    {
        const bool branch_taken_0x1110a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        if (branch_taken_0x1110a8) {
            ctx->pc = 0x1110B4u;
            return;
        }
    }
    ctx->pc = 0x1110B0u;
    // 0x1110b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1110b4u;
}
