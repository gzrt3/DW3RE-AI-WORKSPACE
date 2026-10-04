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

// Function: FUN_00236138
// Address: 0x236138 - 0x236204
void FUN_00236138_0x236138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236138_0x236138");
#endif

    switch (ctx->pc) {
        case 0x236188u: goto label_236188;
        case 0x236198u: goto label_236198;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361dcu: goto label_2361dc;
        default: break;
    }

    ctx->pc = 0x236138u;

    // 0x236138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23613c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236144: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236148: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x236148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x23614c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23615c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23615cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x236164: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x236164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236168: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23616c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x23616cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236170: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x236170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x236174: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x236174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23617c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x236180: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236180u;
    SET_GPR_U32(ctx, 31, 0x236188u);
    ctx->pc = 0x236184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236180u;
    // 0x236184: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236180u, 0x236188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236188u;
label_236188:
    // 0x236188: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x236188u;
    {
        const bool branch_taken_0x236188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236188u;
        // 0x23618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236188) {
            ctx->pc = 0x2361E0u;
            goto label_2361e0;
        }
    }
    ctx->pc = 0x236190u;
    // 0x236190: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236190u;
    SET_GPR_U32(ctx, 31, 0x236198u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236190u, 0x236198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236198u;
label_236198:
    // 0x236198: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x236198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x23619c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23619cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361a0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2361a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2361a4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x2361a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x2361a8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2361a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2361ac: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2361ACu;
    {
        const bool branch_taken_0x2361ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361ACu;
        // 0x2361b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361ac) {
            ctx->pc = 0x2361D4u;
            goto label_2361d4;
        }
    }
    ctx->pc = 0x2361B4u;
    // 0x2361b4: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x2361b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x2361b8: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2361b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x2361bc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2361bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x2361c0: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x2361c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x2361c4: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x2361c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    // 0x2361c8: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2361C8u;
    SET_GPR_U32(ctx, 31, 0x2361D0u);
    ctx->pc = 0x2361CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361C8u;
    // 0x2361cc: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2361C8u, 0x2361D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361D0u;
label_2361d0:
    // 0x2361d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2361d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2361d4:
    // 0x2361d4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2361D4u;
    SET_GPR_U32(ctx, 31, 0x2361DCu);
    ctx->pc = 0x2361D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361D4u;
    // 0x2361d8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2361D4u, 0x2361DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361DCu;
label_2361dc:
    // 0x2361dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2361dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2361e0:
    // 0x2361e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2361e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2361e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2361e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2361e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2361e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2361ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2361ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2361f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2361f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2361f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2361f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2361f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2361fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2361fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x236200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x236200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x236204u;
}
