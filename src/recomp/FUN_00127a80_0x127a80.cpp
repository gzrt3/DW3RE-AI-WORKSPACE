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

// Function: FUN_00127a80
// Address: 0x127a80 - 0x127ac0
void FUN_00127a80_0x127a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127a80_0x127a80");
#endif

    switch (ctx->pc) {
        case 0x127ab0u: goto label_127ab0;
        default: break;
    }

    ctx->pc = 0x127a80u;

    // 0x127a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127a84: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x127a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x127a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127a8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127a94: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x127a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x127a98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127A98u;
    {
        const bool branch_taken_0x127a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A98u;
        // 0x127a9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a98) {
            ctx->pc = 0x127AA8u;
            goto label_127aa8;
        }
    }
    ctx->pc = 0x127AA0u;
    // 0x127aa0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127AA0u;
    {
        const bool branch_taken_0x127aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127aa0) {
            ctx->pc = 0x127AB8u;
            goto label_127ab8;
        }
    }
    ctx->pc = 0x127AA8u;
label_127aa8:
    // 0x127aa8: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x127AA8u;
    SET_GPR_U32(ctx, 31, 0x127AB0u);
    ctx->pc = 0x127AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AA8u;
    // 0x127aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x127AA8u, 0x127AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AB0u;
label_127ab0:
    // 0x127ab0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x127AB0u;
    {
        const bool branch_taken_0x127ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB0u;
        // 0x127ab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ab0) {
            ctx->pc = 0x127B44u;
            return;
        }
    }
    ctx->pc = 0x127AB8u;
label_127ab8:
    // 0x127ab8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x127AB8u;
    SET_GPR_U32(ctx, 31, 0x127AC0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x127AB8u, 0x127AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AC0u;
}
