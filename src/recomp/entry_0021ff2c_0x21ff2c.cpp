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

// Function: entry_0021ff2c
// Address: 0x21ff2c - 0x21ff54
void entry_0021ff2c_0x21ff2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff2c_0x21ff2c");
#endif

    switch (ctx->pc) {
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff48u: goto label_21ff48;
        default: break;
    }

    ctx->pc = 0x21ff2cu;

    // 0x21ff2c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF2Cu;
    SET_GPR_U32(ctx, 31, 0x21FF34u);
    ctx->pc = 0x21FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF2Cu;
    // 0x21ff30: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF2Cu, 0x21FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF34u;
label_21ff34:
    // 0x21ff34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FF34u;
    {
        const bool branch_taken_0x21ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF34u;
        // 0x21ff38: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff34) {
            ctx->pc = 0x21FF54u;
            return;
        }
    }
    ctx->pc = 0x21FF3Cu;
    // 0x21ff3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ff40: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FF40u;
    SET_GPR_U32(ctx, 31, 0x21FF48u);
    ctx->pc = 0x21FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF40u;
    // 0x21ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FF40u, 0x21FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF48u;
label_21ff48:
    // 0x21ff48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FF48u;
    {
        const bool branch_taken_0x21ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff48) {
            ctx->pc = 0x21FF6Cu;
            return;
        }
    }
    ctx->pc = 0x21FF50u;
    // 0x21ff50: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x21ff54u;
}
