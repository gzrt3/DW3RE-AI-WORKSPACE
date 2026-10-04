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

// Function: FUN_001fcee0
// Address: 0x1fcee0 - 0x1fcef8
void FUN_001fcee0_0x1fcee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fcee0_0x1fcee0");
#endif

    ctx->pc = 0x1fcee0u;

    // 0x1fcee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fcee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcee8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fcee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fceec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcef0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1fcef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1fcef4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fcef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    ctx->pc = 0x1fcef8u;
}
