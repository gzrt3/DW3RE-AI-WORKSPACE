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

// Function: FUN_00236c88
// Address: 0x236c88 - 0x236d34
void FUN_00236c88_0x236c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236c88_0x236c88");
#endif

    switch (ctx->pc) {
        case 0x236cb4u: goto label_236cb4;
        case 0x236cf4u: goto label_236cf4;
        default: break;
    }

    ctx->pc = 0x236c88u;

    // 0x236c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236c8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x236c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x236c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x236c98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236ca0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ca4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x236ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x236ca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x236cac: 0xc08db0c  jal         func_236C30
    ctx->pc = 0x236CACu;
    SET_GPR_U32(ctx, 31, 0x236CB4u);
    ctx->pc = 0x236CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CACu;
    // 0x236cb0: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C30u, 0x236CACu, 0x236CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236cbc: 0x2450b280  addiu       $s0, $v0, -0x4D80
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x236cc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x236cc4: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x236cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x236cc8: 0x2484b2e8  addiu       $a0, $a0, -0x4D18
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947560));
    // 0x236ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x236cd4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x236cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x236cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ce0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x236ce4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x236CE4u;
    {
        const bool branch_taken_0x236ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE4u;
        // 0x236ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ce4) {
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236CECu;
    // 0x236cec: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x236CECu;
    SET_GPR_U32(ctx, 31, 0x236CF4u);
    ctx->pc = 0x236CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CECu;
    // 0x236cf0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x236CECu, 0x236CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CF4u;
label_236cf4:
    // 0x236cf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236CF8u;
    {
        const bool branch_taken_0x236cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cf8) {
            ctx->pc = 0x236D10u;
            goto label_236d10;
        }
    }
    ctx->pc = 0x236D00u;
    // 0x236d00: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D00u;
            // 0x236d04: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236D08u;
    // 0x236d08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x236D08u;
    {
        const bool branch_taken_0x236d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D08u;
        // 0x236d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d08) {
            ctx->pc = 0x236D20u;
            goto label_236d20;
        }
    }
    ctx->pc = 0x236D10u;
label_236d10:
    // 0x236d10: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x236d14: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x236d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x236d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x236d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_236d1c:
    // 0x236d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236d20:
    // 0x236d20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x236d34u;
}
