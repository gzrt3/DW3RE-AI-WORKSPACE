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

// Function: entry_001a6b90
// Address: 0x1a6b90 - 0x1a6c18
void entry_001a6b90_0x1a6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6b90_0x1a6b90");
#endif

    switch (ctx->pc) {
        case 0x1a6b98u: goto label_1a6b98;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bccu: goto label_1a6bcc;
        default: break;
    }

    ctx->pc = 0x1a6b90u;

label_1a6b90:
    // 0x1a6b90: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1A6B90u;
    SET_GPR_U32(ctx, 31, 0x1A6B98u);
    ctx->pc = 0x1A6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B90u;
    // 0x1a6b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1A6B90u, 0x1A6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B98u;
label_1a6b98:
    // 0x1a6b98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1a6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1a6b9c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1A6B9Cu;
    {
        const bool branch_taken_0x1a6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b9c) {
            ctx->pc = 0x1A6B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6b90;
        }
    }
    ctx->pc = 0x1A6BA4u;
    // 0x1a6ba4: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x1A6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA4u;
    // 0x1a6ba8: 0x26501818  addiu       $s0, $s2, 0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1A6BA4u, 0x1A6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a6bb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6bb4: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1A6BB4u;
    SET_GPR_U32(ctx, 31, 0x1A6BBCu);
    ctx->pc = 0x1A6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BB4u;
    // 0x1a6bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1A6BB4u, 0x1A6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BBCu;
label_1a6bbc:
    // 0x1a6bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bc4: 0xc069308  jal         func_1A4C20
    ctx->pc = 0x1A6BC4u;
    SET_GPR_U32(ctx, 31, 0x1A6BCCu);
    ctx->pc = 0x1A6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BC4u;
    // 0x1a6bc8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C20u, 0x1A6BC4u, 0x1A6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BCCu;
label_1a6bcc:
    // 0x1a6bcc: 0x26831800  addiu       $v1, $s4, 0x1800
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
    // 0x1a6bd0: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x1a6bd4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6bdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6be0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a6be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6be4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6be8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a6be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1a6bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6bf0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a6bf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c04: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1a6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1a6c08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c0c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a6c10: 0x8069b84  j           func_1A6E10
    ctx->pc = 0x1A6C10u;
    ctx->pc = 0x1A6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C10u;
    // 0x1a6c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    FUN_001a6e10_0x1a6e10(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6C18u;
}
