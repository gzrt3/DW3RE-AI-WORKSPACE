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

// Function: FUN_00196040
// Address: 0x196040 - 0x19604c
void FUN_00196040_0x196040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196040_0x196040");
#endif

    ctx->pc = 0x196040u;

    // 0x196040: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x196044: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x196044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x196048: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x19604cu;
}
