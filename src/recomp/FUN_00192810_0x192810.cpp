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

// Function: FUN_00192810
// Address: 0x192810 - 0x19282c
void FUN_00192810_0x192810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192810_0x192810");
#endif

    ctx->pc = 0x192810u;

    // 0x192810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x192814: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x192814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x192818: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x192818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19281c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x192820: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x192820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x192828: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x192828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19282cu;
}
