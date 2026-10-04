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

// Function: FUN_00125410
// Address: 0x125410 - 0x125434
void FUN_00125410_0x125410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125410_0x125410");
#endif

    ctx->pc = 0x125410u;

    // 0x125410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x125414: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x125414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x125418: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x125418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12541c: 0x2442faf0  addiu       $v0, $v0, -0x510
    ctx->pc = 0x12541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
    // 0x125420: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x125420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x125424: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x125424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x125428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x125428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12542c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x125430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x125430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125434u;
}
