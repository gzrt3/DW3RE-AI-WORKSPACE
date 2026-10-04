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

// Function: entry_00220c2c
// Address: 0x220c2c - 0x220c40
void entry_00220c2c_0x220c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220c2c_0x220c2c");
#endif

    ctx->pc = 0x220c2cu;

    // 0x220c2c: 0x0  nop
    ctx->pc = 0x220c2cu;
    // NOP
    // 0x220c30: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x220c34: 0x296300ff  slti        $v1, $t3, 0xFF
    ctx->pc = 0x220c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220c38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x220C38u;
    {
        const bool branch_taken_0x220c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C38u;
        // 0x220c3c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c38) {
            ctx->pc = 0x220BFCu;
            return;
        }
    }
    ctx->pc = 0x220C40u;
}
