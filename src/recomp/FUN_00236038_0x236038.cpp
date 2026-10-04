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

// Function: FUN_00236038
// Address: 0x236038 - 0x2360d4
void FUN_00236038_0x236038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236038_0x236038");
#endif

    switch (ctx->pc) {
        case 0x236070u: goto label_236070;
        case 0x236080u: goto label_236080;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b8u: goto label_2360b8;
        default: break;
    }

    ctx->pc = 0x236038u;

    // 0x236038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23603c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236044: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236048: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23604c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23604cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23605c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23605cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236064: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x236064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x236068: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236068u;
    SET_GPR_U32(ctx, 31, 0x236070u);
    ctx->pc = 0x23606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236068u;
    // 0x23606c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236068u, 0x236070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236070u;
label_236070:
    // 0x236070: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x236070u;
    {
        const bool branch_taken_0x236070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236070) {
            ctx->pc = 0x2360BCu;
            goto label_2360bc;
        }
    }
    ctx->pc = 0x236078u;
    // 0x236078: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236078u;
    SET_GPR_U32(ctx, 31, 0x236080u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236078u, 0x236080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236080u;
label_236080:
    // 0x236080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236088: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x23608c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236090: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x236094: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236094u;
    {
        const bool branch_taken_0x236094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236094u;
        // 0x236098: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236094) {
            ctx->pc = 0x2360B0u;
            goto label_2360b0;
        }
    }
    ctx->pc = 0x23609Cu;
    // 0x23609c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x23609cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x2360a0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2360a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2360a4: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2360A4u;
    SET_GPR_U32(ctx, 31, 0x2360ACu);
    ctx->pc = 0x2360A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360A4u;
    // 0x2360a8: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2360A4u, 0x2360ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360ACu;
label_2360ac:
    // 0x2360ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2360acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2360b0:
    // 0x2360b0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2360B0u;
    SET_GPR_U32(ctx, 31, 0x2360B8u);
    ctx->pc = 0x2360B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360B0u;
    // 0x2360b4: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2360B0u, 0x2360B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2360b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2360bc:
    // 0x2360bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2360bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2360c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2360c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2360c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2360c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2360c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2360c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2360cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2360ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2360d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2360d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x2360d4u;
}
