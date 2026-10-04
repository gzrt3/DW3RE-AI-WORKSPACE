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

// Function: entry_0019f7e0
// Address: 0x19f7e0 - 0x19f7f8
void entry_0019f7e0_0x19f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7e0_0x19f7e0");
#endif

    ctx->pc = 0x19f7e0u;

    // 0x19f7e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7E0u;
    {
        const bool branch_taken_0x19f7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E0u;
        // 0x19f7e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7e0) {
            ctx->pc = 0x19F7F8u;
            return;
        }
    }
    ctx->pc = 0x19F7E8u;
    // 0x19f7e8: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x19f7ec: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19f7f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F824u;
            return;
        }
    }
    ctx->pc = 0x19F7F8u;
}
