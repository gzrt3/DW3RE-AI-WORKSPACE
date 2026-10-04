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

// Function: entry_00110fbc
// Address: 0x110fbc - 0x110fdc
void entry_00110fbc_0x110fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110fbc_0x110fbc");
#endif

    ctx->pc = 0x110fbcu;

    // 0x110fbc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110fc0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x110fc4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x110fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110fcc: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
    // 0x110fd0: 0x24c62470  addiu       $a2, $a2, 0x2470
    ctx->pc = 0x110fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9328));
    // 0x110fd4: 0x24632490  addiu       $v1, $v1, 0x2490
    ctx->pc = 0x110fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9360));
    // 0x110fd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110fdcu;
}
