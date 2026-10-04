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

// Function: entry_0023f458
// Address: 0x23f458 - 0x23f470
void entry_0023f458_0x23f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f458_0x23f458");
#endif

    ctx->pc = 0x23f458u;

    // 0x23f458: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F458u;
    {
        const bool branch_taken_0x23f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F458u;
        // 0x23f45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f458) {
            ctx->pc = 0x23F470u;
            return;
        }
    }
    ctx->pc = 0x23F460u;
    // 0x23f460: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x23f460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f464: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F464u;
    {
        const bool branch_taken_0x23f464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f464) {
            ctx->pc = 0x23F470u;
            return;
        }
    }
    ctx->pc = 0x23F46Cu;
    // 0x23f46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x23f470u;
}
