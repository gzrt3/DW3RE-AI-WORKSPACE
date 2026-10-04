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

// Function: FUN_00105400
// Address: 0x105400 - 0x105418
void FUN_00105400_0x105400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105400_0x105400");
#endif

    ctx->pc = 0x105400u;

    // 0x105400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x105404: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x105404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x105408: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x105408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10540c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x105410: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x105410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105414: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x105414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x105418u;
}
