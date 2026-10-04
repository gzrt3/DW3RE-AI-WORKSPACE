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

// Function: FUN_00174040
// Address: 0x174040 - 0x1740cc
void FUN_00174040_0x174040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174040_0x174040");
#endif

    switch (ctx->pc) {
        case 0x174068u: goto label_174068;
        case 0x174070u: goto label_174070;
        case 0x174078u: goto label_174078;
        case 0x174088u: goto label_174088;
        case 0x1740acu: goto label_1740ac;
        case 0x1740c8u: goto label_1740c8;
        default: break;
    }

    ctx->pc = 0x174040u;

    // 0x174040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17404c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174050: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x174054: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x174054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
    // 0x174058: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174058u;
    {
        const bool branch_taken_0x174058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174058) {
            ctx->pc = 0x174080u;
            goto label_174080;
        }
    }
    ctx->pc = 0x174060u;
    // 0x174060: 0xc05d33c  jal         func_174CF0
    ctx->pc = 0x174060u;
    SET_GPR_U32(ctx, 31, 0x174068u);
    ctx->pc = 0x174CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CF0u, 0x174060u, 0x174068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174068u;
label_174068:
    // 0x174068: 0xc088318  jal         func_220C60
    ctx->pc = 0x174068u;
    SET_GPR_U32(ctx, 31, 0x174070u);
    ctx->pc = 0x220C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220C60u, 0x174068u, 0x174070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174070u;
label_174070:
    // 0x174070: 0xc05d038  jal         func_1740E0
    ctx->pc = 0x174070u;
    SET_GPR_U32(ctx, 31, 0x174078u);
    ctx->pc = 0x1740E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1740E0u, 0x174070u, 0x174078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174078u;
label_174078:
    // 0x174078: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x174078u;
    {
        const bool branch_taken_0x174078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174078) {
            ctx->pc = 0x1740C0u;
            goto label_1740c0;
        }
    }
    ctx->pc = 0x174080u;
label_174080:
    // 0x174080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174088:
    // 0x174088: 0x0  nop
    ctx->pc = 0x174088u;
    // NOP
    // 0x17408c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174090: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x174094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174098: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x174098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
    // 0x17409c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17409Cu;
    {
        const bool branch_taken_0x17409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17409Cu;
        // 0x1740a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17409c) {
            ctx->pc = 0x1740ACu;
            goto label_1740ac;
        }
    }
    ctx->pc = 0x1740A4u;
    // 0x1740a4: 0xc057f18  jal         func_15FC60
    ctx->pc = 0x1740A4u;
    SET_GPR_U32(ctx, 31, 0x1740ACu);
    ctx->pc = 0x1740A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740A4u;
    // 0x1740a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC60u, 0x1740A4u, 0x1740ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740ACu;
label_1740ac:
    // 0x1740ac: 0x0  nop
    ctx->pc = 0x1740acu;
    // NOP
    // 0x1740b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1740b4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1740b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1740b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1740B8u;
    {
        const bool branch_taken_0x1740b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740B8u;
        // 0x1740bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740b8) {
            ctx->pc = 0x174088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174088;
        }
    }
    ctx->pc = 0x1740C0u;
label_1740c0:
    // 0x1740c0: 0xc05d234  jal         func_1748D0
    ctx->pc = 0x1740C0u;
    SET_GPR_U32(ctx, 31, 0x1740C8u);
    ctx->pc = 0x1748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1748D0u, 0x1740C0u, 0x1740C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740C8u;
label_1740c8:
    // 0x1740c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1740c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1740ccu;
}
