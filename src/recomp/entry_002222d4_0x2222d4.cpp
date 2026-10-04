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

// Function: entry_002222d4
// Address: 0x2222d4 - 0x2222fc
void entry_002222d4_0x2222d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002222d4_0x2222d4");
#endif

    ctx->pc = 0x2222d4u;

    // 0x2222d4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2222d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2222d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2222D8u;
    {
        const bool branch_taken_0x2222d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222d8) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x2222E0u;
    // 0x2222e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2222e4: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2222e8: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2222ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2222ECu;
    {
        const bool branch_taken_0x2222ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222ec) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x2222F4u;
    // 0x2222f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2222f8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x2222fcu;
}
