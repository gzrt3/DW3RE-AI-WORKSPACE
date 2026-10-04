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

// Function: entry_001347ec
// Address: 0x1347ec - 0x1347fc
void entry_001347ec_0x1347ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347ec_0x1347ec");
#endif

    ctx->pc = 0x1347ecu;

    // 0x1347ec: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1347ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1347f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1347f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347f4: 0x8c24a3cc  lw          $a0, -0x5C34($at)
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x1347f8: 0x0  nop
    ctx->pc = 0x1347f8u;
    // NOP
    ctx->pc = 0x1347fcu;
}
