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

// Function: entry_0013efc0
// Address: 0x13efc0 - 0x13f00c
void entry_0013efc0_0x13efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efc0_0x13efc0");
#endif

    switch (ctx->pc) {
        case 0x13eff8u: goto label_13eff8;
        default: break;
    }

    ctx->pc = 0x13efc0u;

    // 0x13efc0: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x13efc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x13efc4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EFC4u;
    {
        const bool branch_taken_0x13efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efc4) {
            ctx->pc = 0x13F00Cu;
            return;
        }
    }
    ctx->pc = 0x13EFCCu;
    // 0x13efcc: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13efd0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x13efd4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13EFD4u;
    {
        const bool branch_taken_0x13efd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFD4u;
        // 0x13efd8: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efd4) {
            ctx->pc = 0x13F00Cu;
            return;
        }
    }
    ctx->pc = 0x13EFDCu;
    // 0x13efdc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EFDCu;
    {
        const bool branch_taken_0x13efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13efdc) {
            ctx->pc = 0x13F00Cu;
            return;
        }
    }
    ctx->pc = 0x13EFE4u;
    // 0x13efe4: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x13efe8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EFE8u;
    {
        const bool branch_taken_0x13efe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFE8u;
        // 0x13efec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efe8) {
            ctx->pc = 0x13F00Cu;
            return;
        }
    }
    ctx->pc = 0x13EFF0u;
    // 0x13eff0: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x13EFF0u;
    SET_GPR_U32(ctx, 31, 0x13EFF8u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x13EFF0u, 0x13EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFF8u;
label_13eff8:
    // 0x13eff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13effc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13f000: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x13f000u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x13f004: 0xc05b2b8  jal         func_16CAE0
    ctx->pc = 0x13F004u;
    SET_GPR_U32(ctx, 31, 0x13F00Cu);
    ctx->pc = 0x13F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F004u;
    // 0x13f008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CAE0u, 0x13F004u, 0x13F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F00Cu;
}
