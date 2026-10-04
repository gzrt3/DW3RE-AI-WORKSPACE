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

// Function: entry_00105568
// Address: 0x105568 - 0x105590
void entry_00105568_0x105568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105568_0x105568");
#endif

    switch (ctx->pc) {
        case 0x10557cu: goto label_10557c;
        default: break;
    }

    ctx->pc = 0x105568u;

    // 0x105568: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x105568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x10556c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10556Cu;
    {
        const bool branch_taken_0x10556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10556Cu;
        // 0x105570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10556c) {
            ctx->pc = 0x105590u;
            return;
        }
    }
    ctx->pc = 0x105574u;
    // 0x105574: 0xc08d9ee  jal         func_2367B8
    ctx->pc = 0x105574u;
    SET_GPR_U32(ctx, 31, 0x10557Cu);
    ctx->pc = 0x105578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105574u;
    // 0x105578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2367B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2367B8u, 0x105574u, 0x10557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10557Cu;
label_10557c:
    // 0x10557c: 0x2c41005b  sltiu       $at, $v0, 0x5B
    ctx->pc = 0x10557cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x105580: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x105580u;
    {
        const bool branch_taken_0x105580 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x105580) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105588u;
    // 0x105588: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x105588u;
    {
        const bool branch_taken_0x105588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105588u;
        // 0x10558c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105588) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105590u;
}
