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

// Function: entry_00199138
// Address: 0x199138 - 0x199154
void entry_00199138_0x199138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199138_0x199138");
#endif

    ctx->pc = 0x199138u;

label_199138:
    // 0x199138: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19913c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19913c) {
            ctx->pc = 0x19925Cu;
            return;
        }
    }
    ctx->pc = 0x199144u;
    // 0x199144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199148: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19914c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19914c) {
            ctx->pc = 0x199138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199138;
        }
    }
    ctx->pc = 0x199154u;
}
