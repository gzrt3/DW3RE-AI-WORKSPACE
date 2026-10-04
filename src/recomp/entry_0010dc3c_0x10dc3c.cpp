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

// Function: entry_0010dc3c
// Address: 0x10dc3c - 0x10dc5c
void entry_0010dc3c_0x10dc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc3c_0x10dc3c");
#endif

    ctx->pc = 0x10dc3cu;

    // 0x10dc3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10dc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dc40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc44: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x10dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x10dc48: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x10dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x10dc4c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x10dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x10dc50: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x10dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
    // 0x10dc54: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x10dc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x10dc58: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x10dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    ctx->pc = 0x10dc5cu;
}
