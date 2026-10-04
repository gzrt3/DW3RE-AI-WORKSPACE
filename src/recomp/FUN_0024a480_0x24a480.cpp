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

// Function: FUN_0024a480
// Address: 0x24a480 - 0x24a494
void FUN_0024a480_0x24a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a480_0x24a480");
#endif

    ctx->pc = 0x24a480u;

    // 0x24a480: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x24a484: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x24a484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x24a488: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24a48c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24a490: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x24a494u;
}
