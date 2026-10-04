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

// Function: FUN_0019a660
// Address: 0x19a660 - 0x19a678
void FUN_0019a660_0x19a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a660_0x19a660");
#endif

    ctx->pc = 0x19a660u;

    // 0x19a660: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x19a660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19a664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A664u;
    {
        const bool branch_taken_0x19a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A664u;
        // 0x19a668: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a664) {
            ctx->pc = 0x19A680u;
            return;
        }
    }
    ctx->pc = 0x19A66Cu;
    // 0x19a66c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19a670: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x19a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
    // 0x19a674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x19a678u;
}
