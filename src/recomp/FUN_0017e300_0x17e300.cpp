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

// Function: FUN_0017e300
// Address: 0x17e300 - 0x17e314
void FUN_0017e300_0x17e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e300_0x17e300");
#endif

    ctx->pc = 0x17e300u;

    // 0x17e300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17e304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17e308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17e30c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17e310: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x17e310u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17e314u;
}
