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

// Function: entry_002224ac
// Address: 0x2224ac - 0x2224cc
void entry_002224ac_0x2224ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002224ac_0x2224ac");
#endif

    ctx->pc = 0x2224acu;

    // 0x2224ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2224b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2224b4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2224b8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2224B8u;
    {
        const bool branch_taken_0x2224b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2224b8) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224C0u;
    // 0x2224c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2224C4u;
    {
        const bool branch_taken_0x2224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c4) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x2224CCu;
}
