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

// Function: FUN_002348c8
// Address: 0x2348c8 - 0x23491c
void FUN_002348c8_0x2348c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002348c8_0x2348c8");
#endif

    switch (ctx->pc) {
        case 0x2348e8u: goto label_2348e8;
        case 0x2348f8u: goto label_2348f8;
        case 0x234910u: goto label_234910;
        default: break;
    }

    ctx->pc = 0x2348c8u;

    // 0x2348c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2348cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2348ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2348d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2348d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348d4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x2348d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2348d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2348e0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2348E0u;
    SET_GPR_U32(ctx, 31, 0x2348E8u);
    ctx->pc = 0x2348E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348E0u;
    // 0x2348e4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2348E0u, 0x2348E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348E8u;
label_2348e8:
    // 0x2348e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2348E8u;
    {
        const bool branch_taken_0x2348e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E8u;
        // 0x2348ec: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348e8) {
            ctx->pc = 0x234914u;
            goto label_234914;
        }
    }
    ctx->pc = 0x2348F0u;
    // 0x2348f0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x2348F0u;
    SET_GPR_U32(ctx, 31, 0x2348F8u);
    ctx->pc = 0x2348F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348F0u;
    // 0x2348f4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x2348F0u, 0x2348F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348F8u;
label_2348f8:
    // 0x2348f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2348f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348fc: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2348FCu;
    {
        const bool branch_taken_0x2348fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348FCu;
        // 0x234900: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348fc) {
            ctx->pc = 0x234908u;
            goto label_234908;
        }
    }
    ctx->pc = 0x234904u;
    // 0x234904: 0x8c50af00  lw          $s0, -0x5100($v0)
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946560)));
label_234908:
    // 0x234908: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234908u;
    SET_GPR_U32(ctx, 31, 0x234910u);
    ctx->pc = 0x23490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234908u;
    // 0x23490c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234908u, 0x234910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234910u;
label_234910:
    // 0x234910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234914:
    // 0x234914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234918: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23491cu;
}
