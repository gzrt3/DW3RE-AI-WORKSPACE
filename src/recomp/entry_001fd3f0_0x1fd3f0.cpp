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

// Function: entry_001fd3f0
// Address: 0x1fd3f0 - 0x1fd400
void entry_001fd3f0_0x1fd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd3f0_0x1fd3f0");
#endif

    ctx->pc = 0x1fd3f0u;

    // 0x1fd3f0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1fd3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1fd3f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD3F4u;
    {
        const bool branch_taken_0x1fd3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3F4u;
        // 0x1fd3f8: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3f4) {
            ctx->pc = 0x1FD400u;
            return;
        }
    }
    ctx->pc = 0x1FD3FCu;
    // 0x1fd3fc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd400u;
}
