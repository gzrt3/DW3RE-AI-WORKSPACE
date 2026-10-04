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

// Function: entry_002403f8
// Address: 0x2403f8 - 0x240420
void entry_002403f8_0x2403f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002403f8_0x2403f8");
#endif

    ctx->pc = 0x2403f8u;

    // 0x2403f8: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2403fc: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x240400: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x240404: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x240408: 0x6cc021  addu        $t8, $v1, $t4
    ctx->pc = 0x240408u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x24040c: 0x24900000  addiu       $s0, $a0, 0x0
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x240410: 0xcd7021  addu        $t6, $a2, $t5
    ctx->pc = 0x240410u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x240414: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x240414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x240418: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24041c: 0x25cf0000  addiu       $t7, $t6, 0x0
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 0));
    ctx->pc = 0x240420u;
}
