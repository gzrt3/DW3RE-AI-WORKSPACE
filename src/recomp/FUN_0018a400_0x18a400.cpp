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

// Function: FUN_0018a400
// Address: 0x18a400 - 0x18a410
void FUN_0018a400_0x18a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a400_0x18a400");
#endif

    ctx->pc = 0x18a400u;

    // 0x18a400: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x18a404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a408: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18a40c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x18a410u;
}
