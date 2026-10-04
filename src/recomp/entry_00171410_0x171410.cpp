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

// Function: entry_00171410
// Address: 0x171410 - 0x171424
void entry_00171410_0x171410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171410_0x171410");
#endif

    ctx->pc = 0x171410u;

    // 0x171410: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x171410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171414: 0x24c91150  addiu       $t1, $a2, 0x1150
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4432));
    // 0x171418: 0x24e80090  addiu       $t0, $a3, 0x90
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x17141c: 0x24ea00a0  addiu       $t2, $a3, 0xA0
    ctx->pc = 0x17141cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x171420: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171424u;
}
