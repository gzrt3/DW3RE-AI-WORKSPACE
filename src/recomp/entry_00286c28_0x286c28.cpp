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

// Function: entry_00286c28
// Address: 0x286c28 - 0x286c38
void entry_00286c28_0x286c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286c28_0x286c28");
#endif

    ctx->pc = 0x286c28u;

    // 0x286c28: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x286c2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c30: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x286c30u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x80076708u));
    // 0x286c34: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x286c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
    ctx->pc = 0x286c38u;
}
