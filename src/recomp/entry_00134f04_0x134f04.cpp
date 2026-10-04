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

// Function: entry_00134f04
// Address: 0x134f04 - 0x134f30
void entry_00134f04_0x134f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f04_0x134f04");
#endif

    ctx->pc = 0x134f04u;

    // 0x134f04: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x134f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x134f08: 0x246800a4  addiu       $t0, $v1, 0xA4
    ctx->pc = 0x134f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x134f0c: 0x906300a5  lbu         $v1, 0xA5($v1)
    ctx->pc = 0x134f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 165)));
    // 0x134f10: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x134F10u;
    {
        const bool branch_taken_0x134f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x134f10) {
            ctx->pc = 0x134F30u;
            return;
        }
    }
    ctx->pc = 0x134F18u;
    // 0x134f18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x134f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x134f1c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134F1Cu;
    {
        const bool branch_taken_0x134f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x134f1c) {
            ctx->pc = 0x134F30u;
            return;
        }
    }
    ctx->pc = 0x134F24u;
    // 0x134f24: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x134f24u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x134f28: 0xa5000006  sh          $zero, 0x6($t0)
    ctx->pc = 0x134f28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x134f2c: 0xa5040008  sh          $a0, 0x8($t0)
    ctx->pc = 0x134f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x134f30u;
}
