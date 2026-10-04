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

// Function: FUN_00139f10
// Address: 0x139f10 - 0x139f20
void FUN_00139f10_0x139f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139f10_0x139f10");
#endif

    ctx->pc = 0x139f10u;

    // 0x139f10: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x139f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x139f14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x139f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x139f18: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x139f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x139f1c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x139f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x139f20u;
}
