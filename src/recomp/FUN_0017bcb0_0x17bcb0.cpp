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

// Function: FUN_0017bcb0
// Address: 0x17bcb0 - 0x17bd14
void FUN_0017bcb0_0x17bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bcb0_0x17bcb0");
#endif

    switch (ctx->pc) {
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bd10u: goto label_17bd10;
        default: break;
    }

    ctx->pc = 0x17bcb0u;

    // 0x17bcb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bcb4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x17bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x17bcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bcbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x17bcc0: 0x8f838454  lw          $v1, -0x7BAC($gp)
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
    // 0x17bcc4: 0xaf808758  sw          $zero, -0x78A8($gp)
    ctx->pc = 0x17bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
    // 0x17bcc8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17BCC8u;
    {
        const bool branch_taken_0x17bcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCC8u;
        // 0x17bccc: 0xaf8281e0  sw          $v0, -0x7E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcc8) {
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCD0u;
    // 0x17bcd0: 0x8f8485d0  lw          $a0, -0x7A30($gp)
    ctx->pc = 0x17bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x17bcd4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x17BCD4u;
    {
        const bool branch_taken_0x17bcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcd4) {
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCDCu;
label_17bcdc:
    // 0x17bcdc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x17bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17bce0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17bce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCE4u;
    {
        const bool branch_taken_0x17bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bce4) {
            ctx->pc = 0x17BCF4u;
            goto label_17bcf4;
        }
    }
    ctx->pc = 0x17BCECu;
    // 0x17bcec: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17bcf0: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_17bcf4:
    // 0x17bcf4: 0x0  nop
    ctx->pc = 0x17bcf4u;
    // NOP
    // 0x17bcf8: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x17bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x17bcfc: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17BCFCu;
    {
        const bool branch_taken_0x17bcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bcfc) {
            ctx->pc = 0x17BCDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bcdc;
        }
    }
    ctx->pc = 0x17BD04u;
label_17bd04:
    // 0x17bd04: 0x0  nop
    ctx->pc = 0x17bd04u;
    // NOP
    // 0x17bd08: 0xc05ef48  jal         func_17BD20
    ctx->pc = 0x17BD08u;
    SET_GPR_U32(ctx, 31, 0x17BD10u);
    ctx->pc = 0x17BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD20u, 0x17BD08u, 0x17BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD10u;
label_17bd10:
    // 0x17bd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17bd14u;
}
