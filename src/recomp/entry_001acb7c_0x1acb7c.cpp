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

// Function: entry_001acb7c
// Address: 0x1acb7c - 0x1acbbc
void entry_001acb7c_0x1acb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acb7c_0x1acb7c");
#endif

    switch (ctx->pc) {
        case 0x1acb90u: goto label_1acb90;
        default: break;
    }

    ctx->pc = 0x1acb7cu;

    // 0x1acb7c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acb80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb84: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACB84u;
    {
        const bool branch_taken_0x1acb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb84) {
            ctx->pc = 0x1ACB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACB84u;
            // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACB8Cu;
    // 0x1acb8c: 0x0  nop
    ctx->pc = 0x1acb8cu;
    // NOP
label_1acb90:
    // 0x1acb90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acb94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1acb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acb9c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACBA4u;
    {
        const bool branch_taken_0x1acba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acba4) {
            ctx->pc = 0x1ACB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb90;
        }
    }
    ctx->pc = 0x1ACBACu;
    // 0x1acbac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1acbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1acbb0:
    // 0x1acbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbb4: 0xc06b248  jal         func_1AC920
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB4u;
    // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC920u, 0x1ACBB4u, 0x1ACBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBBCu;
}
