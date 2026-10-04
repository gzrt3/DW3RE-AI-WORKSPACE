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

// Function: FUN_00137400
// Address: 0x137400 - 0x137410
void FUN_00137400_0x137400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137400_0x137400");
#endif

    ctx->pc = 0x137400u;

    // 0x137400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x137404: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x137404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
    // 0x137408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13740c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x13740cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x137410u;
}
