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

// Function: entry_0023dad0
// Address: 0x23dad0 - 0x23db20
void entry_0023dad0_0x23dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023dad0_0x23dad0");
#endif

    switch (ctx->pc) {
        case 0x23db10u: goto label_23db10;
        default: break;
    }

    ctx->pc = 0x23dad0u;

    // 0x23dad0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23DAD0u;
    {
        const bool branch_taken_0x23dad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dad0) {
            ctx->pc = 0x23DB2Cu;
            return;
        }
    }
    ctx->pc = 0x23DAD8u;
    // 0x23dad8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x23dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x23dadc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x23dae0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23dae4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23dae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23daec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23daf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23daf4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23daf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23daf8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23dafc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DAFCu;
    {
        const bool branch_taken_0x23dafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAFCu;
        // 0x23db00: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dafc) {
            ctx->pc = 0x23DB20u;
            return;
        }
    }
    ctx->pc = 0x23DB04u;
    // 0x23db04: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23db08: 0xc08f610  jal         func_23D840
    ctx->pc = 0x23DB08u;
    SET_GPR_U32(ctx, 31, 0x23DB10u);
    ctx->pc = 0x23DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB08u;
    // 0x23db0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D840u, 0x23DB08u, 0x23DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB10u;
label_23db10:
    // 0x23db10: 0x14400530  bnez        $v0, . + 4 + (0x530 << 2)
    ctx->pc = 0x23DB10u;
    {
        const bool branch_taken_0x23db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db10) {
            ctx->pc = 0x23EFD4u;
            return;
        }
    }
    ctx->pc = 0x23DB18u;
    // 0x23db18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23db1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23db1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23db20u;
}
