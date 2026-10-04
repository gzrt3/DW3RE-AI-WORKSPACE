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

// Function: entry_002013ac
// Address: 0x2013ac - 0x2013c0
void entry_002013ac_0x2013ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013ac_0x2013ac");
#endif

    ctx->pc = 0x2013acu;

    // 0x2013ac: 0x0  nop
    ctx->pc = 0x2013acu;
    // NOP
    // 0x2013b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2013b4: 0x294b0003  slti        $t3, $t2, 0x3
    ctx->pc = 0x2013b4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2013b8: 0x1560ffd3  bnez        $t3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2013B8u;
    {
        const bool branch_taken_0x2013b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B8u;
        // 0x2013bc: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b8) {
            ctx->pc = 0x201308u;
            return;
        }
    }
    ctx->pc = 0x2013C0u;
}
