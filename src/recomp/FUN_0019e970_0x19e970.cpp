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

// Function: FUN_0019e970
// Address: 0x19e970 - 0x19e990
void FUN_0019e970_0x19e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e970_0x19e970");
#endif

    ctx->pc = 0x19e970u;

    // 0x19e970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e974: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x19e978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e97c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e984: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19e984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e988: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e98c: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    ctx->pc = 0x19e990u;
}
