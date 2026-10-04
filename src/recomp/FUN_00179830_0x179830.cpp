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

// Function: FUN_00179830
// Address: 0x179830 - 0x179844
void FUN_00179830_0x179830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179830_0x179830");
#endif

    ctx->pc = 0x179830u;

    // 0x179830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x179830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x179834: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x179834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x179838: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x179838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17983c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x179840: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179844u;
}
