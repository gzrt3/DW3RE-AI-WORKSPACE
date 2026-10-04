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

// Function: FUN_0016be70
// Address: 0x16be70 - 0x16be8c
void FUN_0016be70_0x16be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016be70_0x16be70");
#endif

    ctx->pc = 0x16be70u;

    // 0x16be70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16be74: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x16be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x16be78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16be7c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16be80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16be84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16be88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16be88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16be8cu;
}
