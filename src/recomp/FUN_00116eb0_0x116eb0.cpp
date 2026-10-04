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

// Function: FUN_00116eb0
// Address: 0x116eb0 - 0x116efc
void FUN_00116eb0_0x116eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116eb0_0x116eb0");
#endif

    switch (ctx->pc) {
        case 0x116eccu: goto label_116ecc;
        case 0x116ee4u: goto label_116ee4;
        default: break;
    }

    ctx->pc = 0x116eb0u;

    // 0x116eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x116eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x116ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116ec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x116ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ec4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x116ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x116ec8: 0x26102620  addiu       $s0, $s0, 0x2620
    ctx->pc = 0x116ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9760));
label_116ecc:
    // 0x116ecc: 0x0  nop
    ctx->pc = 0x116eccu;
    // NOP
    // 0x116ed0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116ed4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116ED4u;
    {
        const bool branch_taken_0x116ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED4u;
        // 0x116ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed4) {
            ctx->pc = 0x116EE4u;
            goto label_116ee4;
        }
    }
    ctx->pc = 0x116EDCu;
    // 0x116edc: 0xc05a0a8  jal         func_1682A0
    ctx->pc = 0x116EDCu;
    SET_GPR_U32(ctx, 31, 0x116EE4u);
    ctx->pc = 0x1682A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1682A0u, 0x116EDCu, 0x116EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EE4u;
label_116ee4:
    // 0x116ee4: 0x0  nop
    ctx->pc = 0x116ee4u;
    // NOP
    // 0x116ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x116eec: 0x2a23002f  slti        $v1, $s1, 0x2F
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x116ef0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x116EF0u;
    {
        const bool branch_taken_0x116ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EF0u;
        // 0x116ef4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ef0) {
            ctx->pc = 0x116ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116ecc;
        }
    }
    ctx->pc = 0x116EF8u;
    // 0x116ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x116efcu;
}
