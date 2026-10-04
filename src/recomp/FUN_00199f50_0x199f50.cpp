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

// Function: FUN_00199f50
// Address: 0x199f50 - 0x199fe8
void FUN_00199f50_0x199f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199f50_0x199f50");
#endif

    switch (ctx->pc) {
        case 0x199f6cu: goto label_199f6c;
        case 0x199f80u: goto label_199f80;
        case 0x199f8cu: goto label_199f8c;
        case 0x199fa8u: goto label_199fa8;
        case 0x199fb4u: goto label_199fb4;
        case 0x199fc8u: goto label_199fc8;
        case 0x199fd4u: goto label_199fd4;
        default: break;
    }

    ctx->pc = 0x199f50u;

    // 0x199f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199f54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x199f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199f58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x199f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x199f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199f64: 0xc06614a  jal         func_198528
    ctx->pc = 0x199F64u;
    SET_GPR_U32(ctx, 31, 0x199F6Cu);
    ctx->pc = 0x199F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F64u;
    // 0x199f68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x199F64u, 0x199F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F6Cu;
label_199f6c:
    // 0x199f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f70: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x199F70u;
    {
        const bool branch_taken_0x199f70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F70u;
        // 0x199f74: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f70) {
            ctx->pc = 0x199F98u;
            goto label_199f98;
        }
    }
    ctx->pc = 0x199F78u;
    // 0x199f78: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x199F78u;
    SET_GPR_U32(ctx, 31, 0x199F80u);
    ctx->pc = 0x199F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F78u;
    // 0x199f7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x199F78u, 0x199F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F80u;
label_199f80:
    // 0x199f80: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199f84: 0xc069148  jal         func_1A4520
    ctx->pc = 0x199F84u;
    SET_GPR_U32(ctx, 31, 0x199F8Cu);
    ctx->pc = 0x199F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F84u;
    // 0x199f88: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4520u, 0x199F84u, 0x199F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F8Cu;
label_199f8c:
    // 0x199f8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x199f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x199f90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x199F90u;
    {
        const bool branch_taken_0x199f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F90u;
        // 0x199f94: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f90) {
            ctx->pc = 0x199FD4u;
            goto label_199fd4;
        }
    }
    ctx->pc = 0x199F98u;
label_199f98:
    // 0x199f98: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x199F98u;
    {
        const bool branch_taken_0x199f98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f98) {
            ctx->pc = 0x199F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F98u;
            // 0x199f9c: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199FB8u;
            goto label_199fb8;
        }
    }
    ctx->pc = 0x199FA0u;
    // 0x199fa0: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x199FA0u;
    SET_GPR_U32(ctx, 31, 0x199FA8u);
    ctx->pc = 0x199FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FA0u;
    // 0x199fa4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x199FA0u, 0x199FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FA8u;
label_199fa8:
    // 0x199fa8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x199fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199fac: 0xc069148  jal         func_1A4520
    ctx->pc = 0x199FACu;
    SET_GPR_U32(ctx, 31, 0x199FB4u);
    ctx->pc = 0x199FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FACu;
    // 0x199fb0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4520u, 0x199FACu, 0x199FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FB4u;
label_199fb4:
    // 0x199fb4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x199fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_199fb8:
    // 0x199fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199fc0: 0xc069140  jal         func_1A4500
    ctx->pc = 0x199FC0u;
    SET_GPR_U32(ctx, 31, 0x199FC8u);
    ctx->pc = 0x199FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FC0u;
    // 0x199fc4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4500u, 0x199FC0u, 0x199FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC8u;
label_199fc8:
    // 0x199fc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x199fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x199fcc: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x199FCCu;
    SET_GPR_U32(ctx, 31, 0x199FD4u);
    ctx->pc = 0x199FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FCCu;
    // 0x199fd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x199FCCu, 0x199FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FD4u;
label_199fd4:
    // 0x199fd4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x199fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199fdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x199fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199fe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x199fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x199fe8u;
}
