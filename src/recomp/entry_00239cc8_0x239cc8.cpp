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

// Function: entry_00239cc8
// Address: 0x239cc8 - 0x239ce8
void entry_00239cc8_0x239cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239cc8_0x239cc8");
#endif

    ctx->pc = 0x239cc8u;

    // 0x239cc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x239CC8u;
    {
        const bool branch_taken_0x239cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC8u;
        // 0x239ccc: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc8) {
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239CD0u;
    // 0x239cd0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x239cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239CD4u;
    {
        const bool branch_taken_0x239cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CD4u;
        // 0x239cd8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cd4) {
            ctx->pc = 0x239CE8u;
            return;
        }
    }
    ctx->pc = 0x239CDCu;
    // 0x239cdc: 0x111182  srl         $v0, $s1, 6
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x239ce0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x239CE0u;
    {
        const bool branch_taken_0x239ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE0u;
        // 0x239ce4: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce0) {
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239CE8u;
}
