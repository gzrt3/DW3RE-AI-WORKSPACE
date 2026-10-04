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

// Function: FUN_001d5be0
// Address: 0x1d5be0 - 0x1d5c34
void FUN_001d5be0_0x1d5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5be0_0x1d5be0");
#endif

    switch (ctx->pc) {
        case 0x1d5bf8u: goto label_1d5bf8;
        case 0x1d5c1cu: goto label_1d5c1c;
        default: break;
    }

    ctx->pc = 0x1d5be0u;

    // 0x1d5be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5bf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5bf8:
    // 0x1d5bf8: 0x0  nop
    ctx->pc = 0x1d5bf8u;
    // NOP
    // 0x1d5bfc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d5c00: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d5c04: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d5c08: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1d5c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C0Cu;
    {
        const bool branch_taken_0x1d5c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c0c) {
            ctx->pc = 0x1D5C1Cu;
            goto label_1d5c1c;
        }
    }
    ctx->pc = 0x1D5C14u;
    // 0x1d5c14: 0xc075714  jal         func_1D5C50
    ctx->pc = 0x1D5C14u;
    SET_GPR_U32(ctx, 31, 0x1D5C1Cu);
    ctx->pc = 0x1D5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C50u, 0x1D5C14u, 0x1D5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x0  nop
    ctx->pc = 0x1d5c1cu;
    // NOP
    // 0x1d5c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5c24: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d5c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5c28: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D5C28u;
    {
        const bool branch_taken_0x1d5c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C28u;
        // 0x1d5c2c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c28) {
            ctx->pc = 0x1D5BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bf8;
        }
    }
    ctx->pc = 0x1D5C30u;
    // 0x1d5c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d5c34u;
}
