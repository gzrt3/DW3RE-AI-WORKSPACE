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

// Function: FUN_00100ad0
// Address: 0x100ad0 - 0x100adc
void FUN_00100ad0_0x100ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100ad0_0x100ad0");
#endif

    ctx->pc = 0x100ad0u;

    // 0x100ad0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x100ad4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x100ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x100ad8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x100ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x100adcu;
}
