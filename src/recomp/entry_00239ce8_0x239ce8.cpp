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

// Function: entry_00239ce8
// Address: 0x239ce8 - 0x239d08
void entry_00239ce8_0x239ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239ce8_0x239ce8");
#endif

    ctx->pc = 0x239ce8u;

    // 0x239ce8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239CE8u;
    {
        const bool branch_taken_0x239ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE8u;
        // 0x239cec: 0x246a005b  addiu       $t2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce8) {
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239CF0u;
    // 0x239cf0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x239cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239CF4u;
    {
        const bool branch_taken_0x239cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CF4u;
        // 0x239cf8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cf4) {
            ctx->pc = 0x239D08u;
            return;
        }
    }
    ctx->pc = 0x239CFCu;
    // 0x239cfc: 0x111302  srl         $v0, $s1, 12
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
    // 0x239d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D00u;
        // 0x239d04: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D30u;
            return;
        }
    }
    ctx->pc = 0x239D08u;
}
