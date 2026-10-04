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

// Function: entry_00249fd8
// Address: 0x249fd8 - 0x249fe8
void entry_00249fd8_0x249fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249fd8_0x249fd8");
#endif

    ctx->pc = 0x249fd8u;

    // 0x249fd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249fdc: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249fe0: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x249FE0u;
    {
        const bool branch_taken_0x249fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FE0u;
        // 0x249fe4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fe0) {
            ctx->pc = 0x249F00u;
            return;
        }
    }
    ctx->pc = 0x249FE8u;
}
