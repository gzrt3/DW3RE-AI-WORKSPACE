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

// Function: FUN_001e9550
// Address: 0x1e9550 - 0x1e9570
void FUN_001e9550_0x1e9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9550_0x1e9550");
#endif

    ctx->pc = 0x1e9550u;

    // 0x1e9550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e9554: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1e9558: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e955c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1e9560: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e9564: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e9564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e9568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e956c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e956cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e9570u;
}
