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

// Function: FUN_00236bc0
// Address: 0x236bc0 - 0x236c14
void FUN_00236bc0_0x236bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236bc0_0x236bc0");
#endif

    switch (ctx->pc) {
        case 0x236be0u: goto label_236be0;
        case 0x236be8u: goto label_236be8;
        case 0x236c08u: goto label_236c08;
        default: break;
    }

    ctx->pc = 0x236bc0u;

    // 0x236bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236bc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bcc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236bd8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236BD8u;
    SET_GPR_U32(ctx, 31, 0x236BE0u);
    ctx->pc = 0x236BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BD8u;
    // 0x236bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236BD8u, 0x236BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236BE0u;
    SET_GPR_U32(ctx, 31, 0x236BE8u);
    ctx->pc = 0x236BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BE0u;
    // 0x236be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236BE0u, 0x236BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BE8u;
label_236be8:
    // 0x236be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bf0: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x236bf4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236BF4u;
    {
        const bool branch_taken_0x236bf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BF4u;
        // 0x236bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bf4) {
            ctx->pc = 0x236C0Cu;
            goto label_236c0c;
        }
    }
    ctx->pc = 0x236BFCu;
    // 0x236bfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236c00: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236C00u;
    SET_GPR_U32(ctx, 31, 0x236C08u);
    ctx->pc = 0x236C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C00u;
    // 0x236c04: 0xac51b1c0  sw          $s1, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236C00u, 0x236C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C08u;
label_236c08:
    // 0x236c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236c0c:
    // 0x236c0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236C0Cu;
    SET_GPR_U32(ctx, 31, 0x236C14u);
    ctx->pc = 0x236C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C0Cu;
    // 0x236c10: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236C0Cu, 0x236C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C14u;
}
