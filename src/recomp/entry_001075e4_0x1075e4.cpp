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

// Function: entry_001075e4
// Address: 0x1075e4 - 0x10760c
void entry_001075e4_0x1075e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001075e4_0x1075e4");
#endif

    ctx->pc = 0x1075e4u;

    // 0x1075e4: 0xaf8084b0  sw          $zero, -0x7B50($gp)
    ctx->pc = 0x1075e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 0));
    // 0x1075e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1075e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075ec: 0xaf8084a0  sw          $zero, -0x7B60($gp)
    ctx->pc = 0x1075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U32(ctx, 0));
    // 0x1075f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1075f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075f4: 0xaf808478  sw          $zero, -0x7B88($gp)
    ctx->pc = 0x1075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U32(ctx, 0));
    // 0x1075f8: 0xaf808474  sw          $zero, -0x7B8C($gp)
    ctx->pc = 0x1075f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935668), GPR_U32(ctx, 0));
    // 0x1075fc: 0xaf808480  sw          $zero, -0x7B80($gp)
    ctx->pc = 0x1075fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U32(ctx, 0));
    // 0x107600: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x107600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
    // 0x107604: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x107604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x107608: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x107608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
    ctx->pc = 0x10760cu;
}
