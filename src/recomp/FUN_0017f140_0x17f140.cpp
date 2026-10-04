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

// Function: FUN_0017f140
// Address: 0x17f140 - 0x17f158
void FUN_0017f140_0x17f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f140_0x17f140");
#endif

    ctx->pc = 0x17f140u;

    // 0x17f140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17f144: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x17f148: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17f14c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x17f14cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x17f150: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17f154: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    ctx->pc = 0x17f158u;
}
