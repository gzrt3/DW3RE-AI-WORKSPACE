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

// Function: FUN_00168700
// Address: 0x168700 - 0x168710
void FUN_00168700_0x168700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168700_0x168700");
#endif

    ctx->pc = 0x168700u;

    // 0x168700: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x168704: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x168708: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x168708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16870c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x168710u;
}
