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

// Function: entry_0022f260
// Address: 0x22f260 - 0x22f270
void entry_0022f260_0x22f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f260_0x22f260");
#endif

    ctx->pc = 0x22f260u;

    // 0x22f260: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x22f264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f268: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x22f26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22f270u;
}
