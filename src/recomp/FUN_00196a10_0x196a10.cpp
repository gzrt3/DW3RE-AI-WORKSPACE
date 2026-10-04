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

// Function: FUN_00196a10
// Address: 0x196a10 - 0x196a28
void FUN_00196a10_0x196a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196a10_0x196a10");
#endif

    ctx->pc = 0x196a10u;

    // 0x196a10: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x196a14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x196a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x196a18: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x196a1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x196a20: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x196a24: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x196a28u;
}
