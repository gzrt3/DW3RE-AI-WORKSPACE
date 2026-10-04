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

// Function: FUN_001539d0
// Address: 0x1539d0 - 0x1539f0
void FUN_001539d0_0x1539d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001539d0_0x1539d0");
#endif

    ctx->pc = 0x1539d0u;

    // 0x1539d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1539d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1539d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1539d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1539d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1539dc: 0x27828140  addiu       $v0, $gp, -0x7EC0
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934848));
    // 0x1539e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1539e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1539e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1539e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1539e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1539ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1539ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1539f0u;
}
