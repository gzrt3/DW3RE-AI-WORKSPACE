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

// Function: entry_001a2e80
// Address: 0x1a2e80 - 0x1a2eb0
void entry_001a2e80_0x1a2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2e80_0x1a2e80");
#endif

    switch (ctx->pc) {
        case 0x1a2e88u: goto label_1a2e88;
        default: break;
    }

    ctx->pc = 0x1a2e80u;

label_1a2e80:
    // 0x1a2e80: 0xc067e60  jal         func_19F980
    ctx->pc = 0x1A2E80u;
    SET_GPR_U32(ctx, 31, 0x1A2E88u);
    ctx->pc = 0x1A2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E80u;
    // 0x1a2e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F980u, 0x1A2E80u, 0x1A2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E88u;
label_1a2e88:
    // 0x1a2e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a2e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2E8Cu;
    {
        const bool branch_taken_0x1a2e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E8Cu;
        // 0x1a2e90: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e8c) {
            ctx->pc = 0x1A2EB0u;
            return;
        }
    }
    ctx->pc = 0x1A2E94u;
    // 0x1a2e94: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a2e98: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1a2e9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EB0u;
            return;
        }
    }
    ctx->pc = 0x1A2EA4u;
    // 0x1a2ea4: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1a2ea8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A2EA8u;
    {
        const bool branch_taken_0x1a2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA8u;
        // 0x1a2eac: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ea8) {
            ctx->pc = 0x1A2E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e80;
        }
    }
    ctx->pc = 0x1A2EB0u;
}
