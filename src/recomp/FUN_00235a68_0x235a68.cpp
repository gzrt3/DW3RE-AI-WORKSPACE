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

// Function: FUN_00235a68
// Address: 0x235a68 - 0x235b34
void FUN_00235a68_0x235a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235a68_0x235a68");
#endif

    switch (ctx->pc) {
        case 0x235aa8u: goto label_235aa8;
        case 0x235ab8u: goto label_235ab8;
        case 0x235ae8u: goto label_235ae8;
        case 0x235b08u: goto label_235b08;
        case 0x235b14u: goto label_235b14;
        default: break;
    }

    ctx->pc = 0x235a68u;

    // 0x235a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a74: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x235a78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235a7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235a88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235a8c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x235a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235a94: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x235a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235a9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235aa0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235AA0u;
    SET_GPR_U32(ctx, 31, 0x235AA8u);
    ctx->pc = 0x235AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AA0u;
    // 0x235aa4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235AA0u, 0x235AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AA8u;
label_235aa8:
    // 0x235aa8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x235AA8u;
    {
        const bool branch_taken_0x235aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AA8u;
        // 0x235aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aa8) {
            ctx->pc = 0x235B18u;
            goto label_235b18;
        }
    }
    ctx->pc = 0x235AB0u;
    // 0x235ab0: 0xc08d650  jal         func_235940
    ctx->pc = 0x235AB0u;
    SET_GPR_U32(ctx, 31, 0x235AB8u);
    ctx->pc = 0x235940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235940u, 0x235AB0u, 0x235AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x235abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ac0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235ac4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235acc: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x235ACCu;
    {
        const bool branch_taken_0x235acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x2445040c  addiu       $a1, $v0, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235acc) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235AD4u;
    // 0x235ad4: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x235ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
    // 0x235ad8: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x235adc: 0xac540404  sw          $s4, 0x404($v0)
    ctx->pc = 0x235adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 20));
    // 0x235ae0: 0xc08dc08  jal         func_237020
    ctx->pc = 0x235AE0u;
    SET_GPR_U32(ctx, 31, 0x235AE8u);
    ctx->pc = 0x235AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AE0u;
    // 0x235ae4: 0xac550408  sw          $s5, 0x408($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237020u, 0x235AE0u, 0x235AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AE8u;
label_235ae8:
    // 0x235ae8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x235aec: 0x2652824  and         $a1, $s3, $a1
    ctx->pc = 0x235aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x235af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235af4: 0x34a50031  ori         $a1, $a1, 0x31
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
    // 0x235af8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235AF8u;
    {
        const bool branch_taken_0x235af8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235af8) {
            ctx->pc = 0x235B0Cu;
            goto label_235b0c;
        }
    }
    ctx->pc = 0x235B00u;
    // 0x235b00: 0xc08d666  jal         func_235998
    ctx->pc = 0x235B00u;
    SET_GPR_U32(ctx, 31, 0x235B08u);
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x235B00u, 0x235B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B08u;
label_235b08:
    // 0x235b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235b0c:
    // 0x235b0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235B0Cu;
    SET_GPR_U32(ctx, 31, 0x235B14u);
    ctx->pc = 0x235B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B0Cu;
    // 0x235b10: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235B0Cu, 0x235B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B14u;
label_235b14:
    // 0x235b14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235b18:
    // 0x235b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235b2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x235b34u;
}
