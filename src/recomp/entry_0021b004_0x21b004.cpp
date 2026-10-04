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

// Function: entry_0021b004
// Address: 0x21b004 - 0x21b014
void entry_0021b004_0x21b004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b004_0x21b004");
#endif

    ctx->pc = 0x21b004u;

    // 0x21b004: 0x0  nop
    ctx->pc = 0x21b004u;
    // NOP
    // 0x21b008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21b00c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21b00cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21b010: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21b010u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
    ctx->pc = 0x21b014u;
}
