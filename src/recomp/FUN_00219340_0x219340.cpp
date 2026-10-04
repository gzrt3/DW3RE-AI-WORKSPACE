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

// Function: FUN_00219340
// Address: 0x219340 - 0x219358
void FUN_00219340_0x219340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00219340_0x219340");
#endif

    ctx->pc = 0x219340u;

    // 0x219340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x219344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21934c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x21934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x219350: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x219350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x219354: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x219354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x219358u;
}
