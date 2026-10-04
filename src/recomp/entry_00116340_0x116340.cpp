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

// Function: entry_00116340
// Address: 0x116340 - 0x116358
void entry_00116340_0x116340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116340_0x116340");
#endif

    ctx->pc = 0x116340u;

    // 0x116340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116344: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x116344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x116348: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x11634c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x11634cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x116350: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x116350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x116354: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x116354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x116358u;
}
