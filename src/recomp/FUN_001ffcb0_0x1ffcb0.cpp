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

// Function: FUN_001ffcb0
// Address: 0x1ffcb0 - 0x1ffcc0
void FUN_001ffcb0_0x1ffcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffcb0_0x1ffcb0");
#endif

    ctx->pc = 0x1ffcb0u;

    // 0x1ffcb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ffcb4: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x1ffcb8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ffcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ffcbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ffcc0u;
}
