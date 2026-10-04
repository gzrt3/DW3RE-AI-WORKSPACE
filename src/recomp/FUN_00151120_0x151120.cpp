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

// Function: FUN_00151120
// Address: 0x151120 - 0x151198
void FUN_00151120_0x151120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151120_0x151120");
#endif

    switch (ctx->pc) {
        case 0x151168u: goto label_151168;
        case 0x151170u: goto label_151170;
        case 0x151194u: goto label_151194;
        default: break;
    }

    ctx->pc = 0x151120u;

    // 0x151120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15112c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151130: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x151130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x151134: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x151134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x151138: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151138u;
    {
        const bool branch_taken_0x151138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151138) {
            ctx->pc = 0x151194u;
            goto label_151194;
        }
    }
    ctx->pc = 0x151140u;
    // 0x151140: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x151144: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x151148: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x151148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x15114c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15114Cu;
    {
        const bool branch_taken_0x15114c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15114c) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x151154u;
    // 0x151154: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x151154u;
    {
        const bool branch_taken_0x151154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151154u;
        // 0x151158: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151154) {
            ctx->pc = 0x151198u;
            return;
        }
    }
    ctx->pc = 0x15115Cu;
label_15115c:
    // 0x15115c: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x151160: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151164: 0x26106ae0  addiu       $s0, $s0, 0x6AE0
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27360));
label_151168:
    // 0x151168: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x151168u;
    SET_GPR_U32(ctx, 31, 0x151170u);
    ctx->pc = 0x15116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151168u;
    // 0x15116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x151168u, 0x151170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151170u;
label_151170:
    // 0x151170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151174: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x151178: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x151178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
    // 0x151180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151180) {
            ctx->pc = 0x151168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151168;
        }
    }
    ctx->pc = 0x151188u;
    // 0x151188: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x151188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x15118c: 0xc044a54  jal         func_112950
    ctx->pc = 0x15118Cu;
    SET_GPR_U32(ctx, 31, 0x151194u);
    ctx->pc = 0x151190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15118Cu;
    // 0x151190: 0x248467b0  addiu       $a0, $a0, 0x67B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112950u, 0x15118Cu, 0x151194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151194u;
label_151194:
    // 0x151194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x151198u;
}
