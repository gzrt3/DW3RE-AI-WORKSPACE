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

// Function: FUN_0020afb0
// Address: 0x20afb0 - 0x20afc0
void FUN_0020afb0_0x20afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020afb0_0x20afb0");
#endif

    ctx->pc = 0x20afb0u;

    // 0x20afb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20afb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x20afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20afb8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x20afbc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    ctx->pc = 0x20afc0u;
}
