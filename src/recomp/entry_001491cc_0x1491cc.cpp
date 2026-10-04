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

// Function: entry_001491cc
// Address: 0x1491cc - 0x1491d8
void entry_001491cc_0x1491cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001491cc_0x1491cc");
#endif

    ctx->pc = 0x1491ccu;

    // 0x1491cc: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x1491ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1491d0: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x1491d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1491d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1491d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1491d8u;
}
