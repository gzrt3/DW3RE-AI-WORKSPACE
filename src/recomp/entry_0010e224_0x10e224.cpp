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

// Function: entry_0010e224
// Address: 0x10e224 - 0x10e26c
void entry_0010e224_0x10e224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e224_0x10e224");
#endif

    ctx->pc = 0x10e224u;

    // 0x10e224: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x10e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e228: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10e228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10e22c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x10e230: 0x8c660d80  lw          $a2, 0xD80($v1)
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3456)));
    // 0x10e234: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10E234u;
    {
        const bool branch_taken_0x10e234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e234) {
            ctx->pc = 0x10E26Cu;
            return;
        }
    }
    ctx->pc = 0x10E23Cu;
    // 0x10e23c: 0x90c3023a  lbu         $v1, 0x23A($a2)
    ctx->pc = 0x10e23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 570)));
    // 0x10e240: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E240u;
    {
        const bool branch_taken_0x10e240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e240) {
            ctx->pc = 0x10E26Cu;
            return;
        }
    }
    ctx->pc = 0x10E248u;
    // 0x10e248: 0x84c3021c  lh          $v1, 0x21C($a2)
    ctx->pc = 0x10e248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 540)));
    // 0x10e24c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e250: 0xa4c3021c  sh          $v1, 0x21C($a2)
    ctx->pc = 0x10e250u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 540), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e254: 0xa4c3021e  sh          $v1, 0x21E($a2)
    ctx->pc = 0x10e254u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e258: 0x84c3021c  lh          $v1, 0x21C($a2)
    ctx->pc = 0x10e258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 540)));
    // 0x10e25c: 0x84c90220  lh          $t1, 0x220($a2)
    ctx->pc = 0x10e25cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 544)));
    // 0x10e260: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x10e260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e264: 0x61480a  movz        $t1, $v1, $at
    ctx->pc = 0x10e264u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x10e268: 0xa4c9021c  sh          $t1, 0x21C($a2)
    ctx->pc = 0x10e268u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 540), (uint16_t)GPR_U32(ctx, 9));
    ctx->pc = 0x10e26cu;
}
