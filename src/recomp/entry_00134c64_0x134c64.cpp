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

// Function: entry_00134c64
// Address: 0x134c64 - 0x134c78
void entry_00134c64_0x134c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c64_0x134c64");
#endif

    ctx->pc = 0x134c64u;

    // 0x134c64: 0x0  nop
    ctx->pc = 0x134c64u;
    // NOP
    // 0x134c68: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134c6c: 0x9023a407  lbu         $v1, -0x5BF9($at)
    ctx->pc = 0x134c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A407u));
    // 0x134c70: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x134c74: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x134c78u;
}
