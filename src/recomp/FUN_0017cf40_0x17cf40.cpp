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

// Function: FUN_0017cf40
// Address: 0x17cf40 - 0x17cf50
void FUN_0017cf40_0x17cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017cf40_0x17cf40");
#endif

    ctx->pc = 0x17cf40u;

    // 0x17cf40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x17cf44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17cf48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17cf4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cf4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x17cf50u;
}
