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

// Function: entry_001685fc
// Address: 0x1685fc - 0x168610
void entry_001685fc_0x1685fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001685fc_0x1685fc");
#endif

    ctx->pc = 0x1685fcu;

    // 0x1685fc: 0x0  nop
    ctx->pc = 0x1685fcu;
    // NOP
    // 0x168600: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x168604: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x168604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168608: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16860c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x168610u;
}
