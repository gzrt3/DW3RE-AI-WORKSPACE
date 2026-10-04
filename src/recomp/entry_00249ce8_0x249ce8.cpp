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

// Function: entry_00249ce8
// Address: 0x249ce8 - 0x249cf8
void entry_00249ce8_0x249ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ce8_0x249ce8");
#endif

    ctx->pc = 0x249ce8u;

    // 0x249ce8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x249cec: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x249cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249cf0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x249CF0u;
    {
        const bool branch_taken_0x249cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf0) {
            ctx->pc = 0x249C9Cu;
            return;
        }
    }
    ctx->pc = 0x249CF8u;
}
