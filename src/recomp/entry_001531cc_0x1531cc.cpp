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

// Function: entry_001531cc
// Address: 0x1531cc - 0x1531e0
void entry_001531cc_0x1531cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531cc_0x1531cc");
#endif

    ctx->pc = 0x1531ccu;

    // 0x1531cc: 0x2ca20019  sltiu       $v0, $a1, 0x19
    ctx->pc = 0x1531ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1531d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1531D0u;
    {
        const bool branch_taken_0x1531d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531d0) {
            ctx->pc = 0x1531E0u;
            return;
        }
    }
    ctx->pc = 0x1531D8u;
    // 0x1531d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1531dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1531dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1531e0u;
}
