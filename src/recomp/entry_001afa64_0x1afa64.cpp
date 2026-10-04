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

// Function: entry_001afa64
// Address: 0x1afa64 - 0x1afad8
void entry_001afa64_0x1afa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa64_0x1afa64");
#endif

    switch (ctx->pc) {
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa8u: goto label_1afaa8;
        default: break;
    }

    ctx->pc = 0x1afa64u;

    // 0x1afa64: 0x26308450  addiu       $s0, $s1, -0x7BB0
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
label_1afa68:
    // 0x1afa68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa70: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x1afa74: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AFA74u;
    SET_GPR_U32(ctx, 31, 0x1AFA7Cu);
    ctx->pc = 0x1AFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA74u;
    // 0x1afa78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AFA74u, 0x1AFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA7Cu;
label_1afa7c:
    // 0x1afa7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFA7Cu;
    {
        const bool branch_taken_0x1afa7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afa7c) {
            ctx->pc = 0x1AFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFA7Cu;
            // 0x1afa80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFACCu;
            goto label_1afacc;
        }
    }
    ctx->pc = 0x1AFA84u;
    // 0x1afa84: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afa88: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afa8c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFA8Cu;
    {
        const bool branch_taken_0x1afa8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA8Cu;
        // 0x1afa90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa8c) {
            ctx->pc = 0x1AFAA4u;
            goto label_1afaa4;
        }
    }
    ctx->pc = 0x1AFA94u;
    // 0x1afa94: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1afa98: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFA98u;
    SET_GPR_U32(ctx, 31, 0x1AFAA0u);
    ctx->pc = 0x1AFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA98u;
    // 0x1afa9c: 0x2484aa10  addiu       $a0, $a0, -0x55F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFA98u, 0x1AFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAA0u;
label_1afaa0:
    // 0x1afaa0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afaa4:
    // 0x1afaa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afaa8:
    // 0x1afaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afaac: 0x0  nop
    ctx->pc = 0x1afaacu;
    // NOP
    // 0x1afab0: 0x0  nop
    ctx->pc = 0x1afab0u;
    // NOP
    // 0x1afab4: 0x0  nop
    ctx->pc = 0x1afab4u;
    // NOP
    // 0x1afab8: 0x0  nop
    ctx->pc = 0x1afab8u;
    // NOP
    // 0x1afabc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFABCu;
    {
        const bool branch_taken_0x1afabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afabc) {
            ctx->pc = 0x1AFAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afaa8;
        }
    }
    ctx->pc = 0x1AFAC4u;
    // 0x1afac4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AFAC4u;
    {
        const bool branch_taken_0x1afac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAC4u;
        // 0x1afac8: 0x26308450  addiu       $s0, $s1, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afac4) {
            ctx->pc = 0x1AFA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa68;
        }
    }
    ctx->pc = 0x1AFACCu;
label_1afacc:
    // 0x1afacc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AFACCu;
    {
        const bool branch_taken_0x1afacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFACCu;
        // 0x1afad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afacc) {
            ctx->pc = 0x1AFA40u;
            return;
        }
    }
    ctx->pc = 0x1AFAD4u;
    // 0x1afad4: 0xae4072b8  sw          $zero, 0x72B8($s2)
    ctx->pc = 0x1afad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29368), GPR_U32(ctx, 0));
    ctx->pc = 0x1afad8u;
}
