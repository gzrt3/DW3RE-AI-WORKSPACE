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

// Function: FUN_0015c540
// Address: 0x15c540 - 0x15c560
void FUN_0015c540_0x15c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c540_0x15c540");
#endif

    ctx->pc = 0x15c540u;

    // 0x15c540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15c544: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x15c548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15c54c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15c550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c554: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x15c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x15c558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c55c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c560u;
}
