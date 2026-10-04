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

// Function: FUN_0021b460
// Address: 0x21b460 - 0x21b470
void FUN_0021b460_0x21b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b460_0x21b460");
#endif

    ctx->pc = 0x21b460u;

    // 0x21b460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21b464: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x21b468: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21b46c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x21b470u;
}
