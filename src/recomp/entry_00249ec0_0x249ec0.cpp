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

// Function: entry_00249ec0
// Address: 0x249ec0 - 0x249ed0
void entry_00249ec0_0x249ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ec0_0x249ec0");
#endif

    ctx->pc = 0x249ec0u;

    // 0x249ec0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249ec4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249ec8: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x249EC8u;
    {
        const bool branch_taken_0x249ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC8u;
        // 0x249ecc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ec8) {
            ctx->pc = 0x249DECu;
            return;
        }
    }
    ctx->pc = 0x249ED0u;
}
