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

// Function: FUN_001abcc0
// Address: 0x1abcc0 - 0x1abd44
void FUN_001abcc0_0x1abcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abcc0_0x1abcc0");
#endif

    switch (ctx->pc) {
        case 0x1abcfcu: goto label_1abcfc;
        case 0x1abd14u: goto label_1abd14;
        case 0x1abd28u: goto label_1abd28;
        default: break;
    }

    ctx->pc = 0x1abcc0u;

    // 0x1abcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1abcc4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1abcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1abcc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1abcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1abccc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1abcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1abcd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1abcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1abcd4: 0x24535b4c  addiu       $s3, $v0, 0x5B4C
    ctx->pc = 0x1abcd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23372));
    // 0x1abcd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1abcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1abcdc: 0x247149a8  addiu       $s1, $v1, 0x49A8
    ctx->pc = 0x1abcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x1abce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1abce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1abce4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1abcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcf4: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1ABCF4u;
    SET_GPR_U32(ctx, 31, 0x1ABCFCu);
    ctx->pc = 0x1ABCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCF4u;
    // 0x1abcf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1ABCF4u, 0x1ABCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCFCu;
label_1abcfc:
    // 0x1abcfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABCFCu;
    {
        const bool branch_taken_0x1abcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCFCu;
        // 0x1abd00: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcfc) {
            ctx->pc = 0x1ABD2Cu;
            goto label_1abd2c;
        }
    }
    ctx->pc = 0x1ABD04u;
    // 0x1abd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd08: 0x8e055c1c  lw          $a1, 0x5C1C($s0)
    ctx->pc = 0x1abd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23580)));
    // 0x1abd0c: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1ABD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD14u);
    ctx->pc = 0x1ABD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD0Cu;
    // 0x1abd10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1ABD0Cu, 0x1ABD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD14u;
label_1abd14:
    // 0x1abd14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABD14u;
    {
        const bool branch_taken_0x1abd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD14u;
        // 0x1abd18: 0x8e055c1c  lw          $a1, 0x5C1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd14) {
            ctx->pc = 0x1ABD2Cu;
            goto label_1abd2c;
        }
    }
    ctx->pc = 0x1ABD1Cu;
    // 0x1abd1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1abd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd20: 0xc08e918  jal         func_23A460
    ctx->pc = 0x1ABD20u;
    SET_GPR_U32(ctx, 31, 0x1ABD28u);
    ctx->pc = 0x1ABD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD20u;
    // 0x1abd24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A460u, 0x1ABD20u, 0x1ABD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD28u;
label_1abd28:
    // 0x1abd28: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1abd28u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1abd2c:
    // 0x1abd2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1abd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1abd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abd34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1abd34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abd38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1abd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abd3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1abd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1abd44u;
}
