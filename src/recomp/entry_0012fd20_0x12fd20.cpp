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

// Function: entry_0012fd20
// Address: 0x12fd20 - 0x12fd44
void entry_0012fd20_0x12fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd20_0x12fd20");
#endif

    ctx->pc = 0x12fd20u;

    // 0x12fd20: 0x90e30094  lbu         $v1, 0x94($a3)
    ctx->pc = 0x12fd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x12fd24: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FD24u;
    {
        const bool branch_taken_0x12fd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x12fd24) {
            ctx->pc = 0x12FD44u;
            return;
        }
    }
    ctx->pc = 0x12FD2Cu;
    // 0x12fd2c: 0x90e30096  lbu         $v1, 0x96($a3)
    ctx->pc = 0x12fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x12fd30: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FD30u;
    {
        const bool branch_taken_0x12fd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x12fd30) {
            ctx->pc = 0x12FD44u;
            return;
        }
    }
    ctx->pc = 0x12FD38u;
    // 0x12fd38: 0x8ce30090  lw          $v1, 0x90($a3)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x12fd3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12fd40: 0xace30090  sw          $v1, 0x90($a3)
    ctx->pc = 0x12fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
    ctx->pc = 0x12fd44u;
}
