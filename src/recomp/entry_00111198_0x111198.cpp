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

// Function: entry_00111198
// Address: 0x111198 - 0x1111dc
void entry_00111198_0x111198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111198_0x111198");
#endif

    ctx->pc = 0x111198u;

    // 0x111198: 0x11c00010  beqz        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x111198u;
    {
        const bool branch_taken_0x111198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x111198) {
            ctx->pc = 0x1111DCu;
            return;
        }
    }
    ctx->pc = 0x1111A0u;
    // 0x1111a0: 0x1180000e  beqz        $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x1111DCu;
            return;
        }
    }
    ctx->pc = 0x1111A8u;
    // 0x1111a8: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x1111a8u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x1111ac: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x1111acu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1111b0: 0x185900  sll         $t3, $t8, 4
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x1111b4: 0x178c023  subu        $t8, $t3, $t8
    ctx->pc = 0x1111b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x1111b8: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1111bc: 0x16f5823  subu        $t3, $t3, $t7
    ctx->pc = 0x1111bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1111c0: 0xb87821  addu        $t7, $a1, $t8
    ctx->pc = 0x1111c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1111c4: 0xab5821  addu        $t3, $a1, $t3
    ctx->pc = 0x1111c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1111c8: 0x91ef0002  lbu         $t7, 0x2($t7)
    ctx->pc = 0x1111c8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x1111cc: 0x916b0002  lbu         $t3, 0x2($t3)
    ctx->pc = 0x1111ccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1111d0: 0x15eb0002  bne         $t7, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1111D0u;
    {
        const bool branch_taken_0x1111d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 11));
        if (branch_taken_0x1111d0) {
            ctx->pc = 0x1111DCu;
            return;
        }
    }
    ctx->pc = 0x1111D8u;
    // 0x1111d8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1111d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1111dcu;
}
