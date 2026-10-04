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

// Function: entry_00167a2c
// Address: 0x167a2c - 0x167a5c
void entry_00167a2c_0x167a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a2c_0x167a2c");
#endif

    ctx->pc = 0x167a2cu;

    // 0x167a2c: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x167a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167a30: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x167a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x167a34: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x167A34u;
    {
        const bool branch_taken_0x167a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167a34) {
            ctx->pc = 0x167AA4u;
            return;
        }
    }
    ctx->pc = 0x167A3Cu;
    // 0x167a3c: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x167a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x167a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a44: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x167A44u;
    {
        const bool branch_taken_0x167a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x167a44) {
            ctx->pc = 0x167A84u;
            return;
        }
    }
    ctx->pc = 0x167A4Cu;
    // 0x167a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167A4Cu;
    {
        const bool branch_taken_0x167a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a4c) {
            ctx->pc = 0x167A5Cu;
            return;
        }
    }
    ctx->pc = 0x167A54u;
    // 0x167a54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x167A54u;
    {
        const bool branch_taken_0x167a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a54) {
            ctx->pc = 0x167AA4u;
            return;
        }
    }
    ctx->pc = 0x167A5Cu;
}
