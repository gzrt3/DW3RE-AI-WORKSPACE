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

// Function: entry_001959ac
// Address: 0x1959ac - 0x1959c0
void entry_001959ac_0x1959ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001959ac_0x1959ac");
#endif

    ctx->pc = 0x1959acu;

    // 0x1959ac: 0x0  nop
    ctx->pc = 0x1959acu;
    // NOP
    // 0x1959b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1959b4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1959b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1959b8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1959B8u;
    {
        const bool branch_taken_0x1959b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1959BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B8u;
        // 0x1959bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959b8) {
            ctx->pc = 0x195924u;
            return;
        }
    }
    ctx->pc = 0x1959C0u;
}
