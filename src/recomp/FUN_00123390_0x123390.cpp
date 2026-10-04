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

// Function: FUN_00123390
// Address: 0x123390 - 0x1233a4
void FUN_00123390_0x123390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123390_0x123390");
#endif

    ctx->pc = 0x123390u;

    // 0x123390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x123390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x123394: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x123394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x123398: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x123398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x12339c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x12339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1233a0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1233a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1233a4u;
}
