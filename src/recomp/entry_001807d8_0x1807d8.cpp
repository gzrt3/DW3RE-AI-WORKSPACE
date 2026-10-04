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

// Function: entry_001807d8
// Address: 0x1807d8 - 0x18083c
void entry_001807d8_0x1807d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001807d8_0x1807d8");
#endif

    switch (ctx->pc) {
        case 0x180818u: goto label_180818;
        case 0x180834u: goto label_180834;
        default: break;
    }

    ctx->pc = 0x1807d8u;

    // 0x1807d8: 0x8f8687dc  lw          $a2, -0x7824($gp)
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x1807dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1807e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1807e4: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1807e8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1807ec: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1807f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1807f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1807f8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1807fc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1807fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180800: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x180804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180808: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x180808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18080c: 0x8f8587dc  lw          $a1, -0x7824($gp)
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x180810: 0xc066972  jal         func_19A5C8
    ctx->pc = 0x180810u;
    SET_GPR_U32(ctx, 31, 0x180818u);
    ctx->pc = 0x180814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180810u;
    // 0x180814: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5C8u, 0x180810u, 0x180818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180818u;
label_180818:
    // 0x180818: 0x8f828808  lw          $v0, -0x77F8($gp)
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936584)));
    // 0x18081c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18081Cu;
        // 0x180820: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18081c) {
            ctx->pc = 0x18083Cu;
            return;
        }
    }
    ctx->pc = 0x180824u;
    // 0x180824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x180828: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x18082c: 0xc06e09c  jal         func_1B8270
    ctx->pc = 0x18082Cu;
    SET_GPR_U32(ctx, 31, 0x180834u);
    ctx->pc = 0x180830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18082Cu;
    // 0x180830: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8270u, 0x18082Cu, 0x180834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180834u;
label_180834:
    // 0x180834: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x180834u;
    {
        const bool branch_taken_0x180834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180834u;
        // 0x180838: 0x8f8287d8  lw          $v0, -0x7828($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180834) {
            ctx->pc = 0x1808F0u;
            return;
        }
    }
    ctx->pc = 0x18083Cu;
}
