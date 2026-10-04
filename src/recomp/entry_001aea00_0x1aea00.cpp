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

// Function: entry_001aea00
// Address: 0x1aea00 - 0x1aea48
void entry_001aea00_0x1aea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aea00_0x1aea00");
#endif

    switch (ctx->pc) {
        case 0x1aea3cu: goto label_1aea3c;
        default: break;
    }

    ctx->pc = 0x1aea00u;

label_1aea00:
    // 0x1aea00: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1aea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1aea04: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1aea08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aea08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aea0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aea10: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1aea14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aea14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aea18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEA18u;
    {
        const bool branch_taken_0x1aea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea18) {
            ctx->pc = 0x1AEA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea00;
        }
    }
    ctx->pc = 0x1AEA20u;
    // 0x1aea20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aea24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aea28: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1aea28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1aea2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea30: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1aea34: 0xc06b722  jal         func_1ADC88
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x1AEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA34u;
    // 0x1aea38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC88u, 0x1AEA34u, 0x1AEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA3Cu;
label_1aea3c:
    // 0x1aea3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1aea40: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1aea40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1aea44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aea44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aea48u;
}
