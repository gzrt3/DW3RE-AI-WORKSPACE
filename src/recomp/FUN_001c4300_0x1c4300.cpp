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

// Function: FUN_001c4300
// Address: 0x1c4300 - 0x1c4310
void FUN_001c4300_0x1c4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4300_0x1c4300");
#endif

    ctx->pc = 0x1c4300u;

    // 0x1c4300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c4304: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c4304u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c4308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c430c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1c4310u;
}
