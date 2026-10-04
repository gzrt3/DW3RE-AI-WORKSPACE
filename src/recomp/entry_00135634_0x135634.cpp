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

// Function: entry_00135634
// Address: 0x135634 - 0x135648
void entry_00135634_0x135634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135634_0x135634");
#endif

    ctx->pc = 0x135634u;

    // 0x135634: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135638: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13563c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x135640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x135640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x135644: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x135644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x135648u;
}
