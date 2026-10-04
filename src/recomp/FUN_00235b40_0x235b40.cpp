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

// Function: FUN_00235b40
// Address: 0x235b40 - 0x235c0c
void FUN_00235b40_0x235b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235b40_0x235b40");
#endif

    switch (ctx->pc) {
        case 0x235b80u: goto label_235b80;
        case 0x235b90u: goto label_235b90;
        case 0x235bc0u: goto label_235bc0;
        case 0x235be0u: goto label_235be0;
        case 0x235becu: goto label_235bec;
        default: break;
    }

    ctx->pc = 0x235b40u;

    // 0x235b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b4c: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x235b50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235b54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235b60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235b64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x235b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235b6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x235b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235b78: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235B78u;
    SET_GPR_U32(ctx, 31, 0x235B80u);
    ctx->pc = 0x235B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B78u;
    // 0x235b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235B78u, 0x235B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B80u;
label_235b80:
    // 0x235b80: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x235B80u;
    {
        const bool branch_taken_0x235b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b80) {
            ctx->pc = 0x235BF0u;
            goto label_235bf0;
        }
    }
    ctx->pc = 0x235B88u;
    // 0x235b88: 0xc08d650  jal         func_235940
    ctx->pc = 0x235B88u;
    SET_GPR_U32(ctx, 31, 0x235B90u);
    ctx->pc = 0x235940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235940u, 0x235B88u, 0x235B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B90u;
label_235b90:
    // 0x235b90: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x235b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235b9c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ba4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x235BA4u;
    {
        const bool branch_taken_0x235ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA4u;
        // 0x235ba8: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba4) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BACu;
    // 0x235bac: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
    // 0x235bb0: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x235bb4: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
    // 0x235bb8: 0xc08dc08  jal         func_237020
    ctx->pc = 0x235BB8u;
    SET_GPR_U32(ctx, 31, 0x235BC0u);
    ctx->pc = 0x235BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BB8u;
    // 0x235bbc: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237020u, 0x235BB8u, 0x235BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BC0u;
label_235bc0:
    // 0x235bc0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x235bc4: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x235bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bcc: 0x34a50032  ori         $a1, $a1, 0x32
    ctx->pc = 0x235bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50);
    // 0x235bd0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235BE4u;
            goto label_235be4;
        }
    }
    ctx->pc = 0x235BD8u;
    // 0x235bd8: 0xc08d666  jal         func_235998
    ctx->pc = 0x235BD8u;
    SET_GPR_U32(ctx, 31, 0x235BE0u);
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x235BD8u, 0x235BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BE0u;
label_235be0:
    // 0x235be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235be4:
    // 0x235be4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235BE4u;
    SET_GPR_U32(ctx, 31, 0x235BECu);
    ctx->pc = 0x235BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BE4u;
    // 0x235be8: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235BE4u, 0x235BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BECu;
label_235bec:
    // 0x235bec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235bf0:
    // 0x235bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235bfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235c00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235c04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x235c0cu;
}
