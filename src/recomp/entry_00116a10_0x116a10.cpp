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

// Function: entry_00116a10
// Address: 0x116a10 - 0x116a1c
void entry_00116a10_0x116a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a10_0x116a10");
#endif

    ctx->pc = 0x116a10u;

    // 0x116a10: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x116a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a18: 0xad000200  sw          $zero, 0x200($t0)
    ctx->pc = 0x116a18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 512), GPR_U32(ctx, 0));
    ctx->pc = 0x116a1cu;
}
