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

// Function: FUN_0017d520
// Address: 0x17d520 - 0x17d530
void FUN_0017d520_0x17d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d520_0x17d520");
#endif

    ctx->pc = 0x17d520u;

    // 0x17d520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17d524: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x17d528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d52c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x17d530u;
}
