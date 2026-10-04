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

// Function: entry_001307e8
// Address: 0x1307e8 - 0x13082c
void entry_001307e8_0x1307e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001307e8_0x1307e8");
#endif

    switch (ctx->pc) {
        case 0x130808u: goto label_130808;
        case 0x130818u: goto label_130818;
        default: break;
    }

    ctx->pc = 0x1307e8u;

    // 0x1307e8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1307ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1307ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1307f0: 0x8c22a428  lw          $v0, -0x5BD8($at)
    ctx->pc = 0x1307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943784)));
    // 0x1307f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1307f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1307f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1307fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130800: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x130800u;
    SET_GPR_U32(ctx, 31, 0x130808u);
    ctx->pc = 0x130804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130800u;
    // 0x130804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x130800u, 0x130808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130808u;
label_130808:
    // 0x130808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130808u;
    {
        const bool branch_taken_0x130808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130808u;
        // 0x13080c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130808) {
            ctx->pc = 0x13082Cu;
            return;
        }
    }
    ctx->pc = 0x130810u;
    // 0x130810: 0xc070700  jal         func_1C1C00
    ctx->pc = 0x130810u;
    SET_GPR_U32(ctx, 31, 0x130818u);
    ctx->pc = 0x1C1C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C00u, 0x130810u, 0x130818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13081c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130820: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x130820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x130824: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130828: 0xac23a3e0  sw          $v1, -0x5C20($at)
    ctx->pc = 0x130828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    ctx->pc = 0x13082cu;
}
