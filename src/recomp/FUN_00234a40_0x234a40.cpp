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

// Function: FUN_00234a40
// Address: 0x234a40 - 0x234b0c
void FUN_00234a40_0x234a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234a40_0x234a40");
#endif

    switch (ctx->pc) {
        case 0x234a90u: goto label_234a90;
        case 0x234aa0u: goto label_234aa0;
        case 0x234ad8u: goto label_234ad8;
        case 0x234ae4u: goto label_234ae4;
        default: break;
    }

    ctx->pc = 0x234a40u;

    // 0x234a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234a48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a4c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234a50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x234a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x234a54: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x234a54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234a60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234a64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x234a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x234a6c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x234a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234a74: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x234a74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234a7c: 0x313600ff  andi        $s6, $t1, 0xFF
    ctx->pc = 0x234a7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x234a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234a84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234a88: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234A88u;
    SET_GPR_U32(ctx, 31, 0x234A90u);
    ctx->pc = 0x234A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A88u;
    // 0x234a8c: 0x315200ff  andi        $s2, $t2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234A88u, 0x234A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A90u;
label_234a90:
    // 0x234a90: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234A90u;
    {
        const bool branch_taken_0x234a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a90) {
            ctx->pc = 0x234AE8u;
            goto label_234ae8;
        }
    }
    ctx->pc = 0x234A98u;
    // 0x234a98: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234A98u;
    SET_GPR_U32(ctx, 31, 0x234AA0u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234A98u, 0x234AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AA0u;
label_234aa0:
    // 0x234aa0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x234aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234aa8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234aac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x234ab0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x234ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x234ab4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x234AB4u;
    {
        const bool branch_taken_0x234ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB4u;
        // 0x234ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab4) {
            ctx->pc = 0x234ADCu;
            goto label_234adc;
        }
    }
    ctx->pc = 0x234ABCu;
    // 0x234abc: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x234abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x234ac0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x234ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x234ac4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x234ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x234ac8: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x234ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x234acc: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x234accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    // 0x234ad0: 0xc08d192  jal         func_234648
    ctx->pc = 0x234AD0u;
    SET_GPR_U32(ctx, 31, 0x234AD8u);
    ctx->pc = 0x234AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AD0u;
    // 0x234ad4: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234AD0u, 0x234AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AD8u;
label_234ad8:
    // 0x234ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234adc:
    // 0x234adc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234ADCu;
    SET_GPR_U32(ctx, 31, 0x234AE4u);
    ctx->pc = 0x234AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ADCu;
    // 0x234ae0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234ADCu, 0x234AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AE4u;
label_234ae4:
    // 0x234ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ae8:
    // 0x234ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234af8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234afc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x234afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x234b00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x234b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234b04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x234b04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234b08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x234b0cu;
}
