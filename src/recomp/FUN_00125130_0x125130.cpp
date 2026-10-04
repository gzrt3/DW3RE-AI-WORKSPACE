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

// Function: FUN_00125130
// Address: 0x125130 - 0x125148
void FUN_00125130_0x125130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125130_0x125130");
#endif

    ctx->pc = 0x125130u;

    // 0x125130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x125138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12513c: 0x2463fb30  addiu       $v1, $v1, -0x4D0
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966064));
    // 0x125140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125144: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x125148u;
}
