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

// Function: entry_00144820
// Address: 0x144820 - 0x144830
void entry_00144820_0x144820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144820_0x144820");
#endif

    ctx->pc = 0x144820u;

    // 0x144820: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x144824: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x144828: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14482c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x14482cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
    ctx->pc = 0x144830u;
}
