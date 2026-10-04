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

// Function: entry_00111040
// Address: 0x111040 - 0x111060
void entry_00111040_0x111040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111040_0x111040");
#endif

    ctx->pc = 0x111040u;

    // 0x111040: 0x95b9000c  lhu         $t9, 0xC($t5)
    ctx->pc = 0x111040u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x111044: 0x19c100  sll         $t8, $t9, 4
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x111048: 0x319c023  subu        $t8, $t8, $t9
    ctx->pc = 0x111048u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x11104c: 0xb8c021  addu        $t8, $a1, $t8
    ctx->pc = 0x11104cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x111050: 0x93180004  lbu         $t8, 0x4($t8)
    ctx->pc = 0x111050u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x111054: 0x16380002  bne         $s1, $t8, . + 4 + (0x2 << 2)
    ctx->pc = 0x111054u;
    {
        const bool branch_taken_0x111054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 24));
        if (branch_taken_0x111054) {
            ctx->pc = 0x111060u;
            return;
        }
    }
    ctx->pc = 0x11105Cu;
    // 0x11105c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11105cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111060u;
}
