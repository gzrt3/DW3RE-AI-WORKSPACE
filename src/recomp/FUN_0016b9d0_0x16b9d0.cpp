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

// Function: FUN_0016b9d0
// Address: 0x16b9d0 - 0x16ba30
void FUN_0016b9d0_0x16b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b9d0_0x16b9d0");
#endif

    switch (ctx->pc) {
        case 0x16b9f8u: goto label_16b9f8;
        case 0x16ba08u: goto label_16ba08;
        default: break;
    }

    ctx->pc = 0x16b9d0u;

    // 0x16b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9dc: 0xaf828728  sw          $v0, -0x78D8($gp)
    ctx->pc = 0x16b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
    // 0x16b9e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b9e4: 0xaf848724  sw          $a0, -0x78DC($gp)
    ctx->pc = 0x16b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 4));
    // 0x16b9e8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B9E8u;
    {
        const bool branch_taken_0x16b9e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9E8u;
        // 0x16b9ec: 0xaf858720  sw          $a1, -0x78E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9e8) {
            ctx->pc = 0x16BA00u;
            goto label_16ba00;
        }
    }
    ctx->pc = 0x16B9F0u;
    // 0x16b9f0: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x16B9F0u;
    SET_GPR_U32(ctx, 31, 0x16B9F8u);
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x16B9F0u, 0x16B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9F8u;
label_16b9f8:
    // 0x16b9f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B9F8u;
    {
        const bool branch_taken_0x16b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9F8u;
        // 0x16b9fc: 0xaf82871c  sw          $v0, -0x78E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9f8) {
            ctx->pc = 0x16BA0Cu;
            goto label_16ba0c;
        }
    }
    ctx->pc = 0x16BA00u;
label_16ba00:
    // 0x16ba00: 0xc055e64  jal         func_157990
    ctx->pc = 0x16BA00u;
    SET_GPR_U32(ctx, 31, 0x16BA08u);
    ctx->pc = 0x157990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157990u, 0x16BA00u, 0x16BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA08u;
label_16ba08:
    // 0x16ba08: 0xaf82871c  sw          $v0, -0x78E4($gp)
    ctx->pc = 0x16ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
label_16ba0c:
    // 0x16ba0c: 0x8f848700  lw          $a0, -0x7900($gp)
    ctx->pc = 0x16ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16ba10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ba14: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA14u;
    {
        const bool branch_taken_0x16ba14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ba14) {
            ctx->pc = 0x16BA2Cu;
            goto label_16ba2c;
        }
    }
    ctx->pc = 0x16BA1Cu;
    // 0x16ba1c: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16ba20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA20u;
    {
        const bool branch_taken_0x16ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA20u;
        // 0x16ba24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba20) {
            ctx->pc = 0x16BA2Cu;
            goto label_16ba2c;
        }
    }
    ctx->pc = 0x16BA28u;
    // 0x16ba28: 0xaf838700  sw          $v1, -0x7900($gp)
    ctx->pc = 0x16ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 3));
label_16ba2c:
    // 0x16ba2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16ba30u;
}
