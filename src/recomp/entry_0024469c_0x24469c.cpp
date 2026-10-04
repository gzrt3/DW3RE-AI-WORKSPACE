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

// Function: entry_0024469c
// Address: 0x24469c - 0x2446c8
void entry_0024469c_0x24469c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024469c_0x24469c");
#endif

    ctx->pc = 0x24469cu;

    // 0x24469c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24469cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2446a0: 0x2881005c  slti        $at, $a0, 0x5C
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)92) ? 1 : 0);
    // 0x2446a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2446A4u;
    {
        const bool branch_taken_0x2446a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446a4) {
            ctx->pc = 0x2446C8u;
            return;
        }
    }
    ctx->pc = 0x2446ACu;
    // 0x2446ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2446acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446b0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2446b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2446b4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2446b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2446bc: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2446BCu;
    {
        const bool branch_taken_0x2446bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2446bc) {
            ctx->pc = 0x2446C8u;
            return;
        }
    }
    ctx->pc = 0x2446C4u;
    // 0x2446c4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x2446c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2446c8u;
}
