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

// Function: FUN_00210000
// Address: 0x210000 - 0x21000c
void FUN_00210000_0x210000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00210000_0x210000");
#endif

    ctx->pc = 0x210000u;

    // 0x210000: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x210000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x210004: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x210004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x210008: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x21000cu;
}
