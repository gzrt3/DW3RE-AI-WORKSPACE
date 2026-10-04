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

// Function: entry_0023a878
// Address: 0x23a878 - 0x23a898
void entry_0023a878_0x23a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a878_0x23a878");
#endif

    ctx->pc = 0x23a878u;

    // 0x23a878: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23a87c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a884: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A884u;
    {
        const bool branch_taken_0x23a884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A884u;
        // 0x23a888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a884) {
            ctx->pc = 0x23A898u;
            return;
        }
    }
    ctx->pc = 0x23A88Cu;
    // 0x23a88c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a890: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23A890u;
    {
        const bool branch_taken_0x23a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A890u;
        // 0x23a894: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a890) {
            ctx->pc = 0x23A8C4u;
            return;
        }
    }
    ctx->pc = 0x23A898u;
}
