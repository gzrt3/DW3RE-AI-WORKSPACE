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

// Function: FUN_0023c450
// Address: 0x23c450 - 0x23c464
void FUN_0023c450_0x23c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c450_0x23c450");
#endif

    ctx->pc = 0x23c450u;

    // 0x23c450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c45c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c460: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    ctx->pc = 0x23c464u;
}
