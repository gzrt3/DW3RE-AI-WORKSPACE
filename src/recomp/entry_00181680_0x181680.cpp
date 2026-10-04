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

// Function: entry_00181680
// Address: 0x181680 - 0x181694
void entry_00181680_0x181680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181680_0x181680");
#endif

    ctx->pc = 0x181680u;

    // 0x181680: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x181684: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181684u;
    {
        const bool branch_taken_0x181684 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181684u;
        // 0x181688: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181684) {
            ctx->pc = 0x181694u;
            return;
        }
    }
    ctx->pc = 0x18168Cu;
    // 0x18168c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181690: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x181694u;
}
