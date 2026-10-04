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

// Function: entry_00238978
// Address: 0x238978 - 0x23899c
void entry_00238978_0x238978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238978_0x238978");
#endif

    ctx->pc = 0x238978u;

label_238978:
    // 0x238978: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23897c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23897Cu;
    {
        const bool branch_taken_0x23897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23897Cu;
        // 0x238980: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23897c) {
            ctx->pc = 0x2389D8u;
            return;
        }
    }
    ctx->pc = 0x238984u;
    // 0x238984: 0x0  nop
    ctx->pc = 0x238984u;
    // NOP
    // 0x238988: 0x0  nop
    ctx->pc = 0x238988u;
    // NOP
    // 0x23898c: 0x0  nop
    ctx->pc = 0x23898cu;
    // NOP
    // 0x238990: 0x0  nop
    ctx->pc = 0x238990u;
    // NOP
    // 0x238994: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238994u;
    {
        const bool branch_taken_0x238994 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x238998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238994u;
        // 0x238998: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238994) {
            ctx->pc = 0x238978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238978;
        }
    }
    ctx->pc = 0x23899Cu;
}
