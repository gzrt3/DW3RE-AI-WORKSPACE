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

// Function: FUN_00100d20
// Address: 0x100d20 - 0x100d38
void FUN_00100d20_0x100d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100d20_0x100d20");
#endif

    ctx->pc = 0x100d20u;

    // 0x100d20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x100d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x100d24: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x100d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x100d28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x100d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x100d2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x100d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x100d30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x100d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x100d34: 0x3c170030  lui         $s7, 0x30
    ctx->pc = 0x100d34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)48 << 16));
    ctx->pc = 0x100d38u;
}
