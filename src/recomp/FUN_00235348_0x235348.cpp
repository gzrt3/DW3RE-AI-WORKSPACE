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

// Function: FUN_00235348
// Address: 0x235348 - 0x235404
void FUN_00235348_0x235348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235348_0x235348");
#endif

    switch (ctx->pc) {
        case 0x235390u: goto label_235390;
        case 0x2353a0u: goto label_2353a0;
        case 0x2353d4u: goto label_2353d4;
        case 0x2353e0u: goto label_2353e0;
        default: break;
    }

    ctx->pc = 0x235348u;

    // 0x235348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23534c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235354: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x235358: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x23535c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23535cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235368: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23536c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x23536cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x235370: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235374: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x235374u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x235378: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23537c: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x23537cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x235380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235384: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x235384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x235388: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235388u;
    SET_GPR_U32(ctx, 31, 0x235390u);
    ctx->pc = 0x23538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235388u;
    // 0x23538c: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235388u, 0x235390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235390u;
label_235390:
    // 0x235390: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x235390u;
    {
        const bool branch_taken_0x235390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235390u;
        // 0x235394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235390) {
            ctx->pc = 0x2353E4u;
            goto label_2353e4;
        }
    }
    ctx->pc = 0x235398u;
    // 0x235398: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235398u;
    SET_GPR_U32(ctx, 31, 0x2353A0u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235398u, 0x2353A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353A0u;
label_2353a0:
    // 0x2353a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2353a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2353a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2353a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2353ac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2353acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x2353b0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2353b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2353b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2353B4u;
    {
        const bool branch_taken_0x2353b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2353B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353B4u;
        // 0x2353b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353b4) {
            ctx->pc = 0x2353D8u;
            goto label_2353d8;
        }
    }
    ctx->pc = 0x2353BCu;
    // 0x2353bc: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2353bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x2353c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2353c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x2353c4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2353c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x2353c8: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x2353c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x2353cc: 0xc08d192  jal         func_234648
    ctx->pc = 0x2353CCu;
    SET_GPR_U32(ctx, 31, 0x2353D4u);
    ctx->pc = 0x2353D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353CCu;
    // 0x2353d0: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2353CCu, 0x2353D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353D4u;
label_2353d4:
    // 0x2353d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2353d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2353d8:
    // 0x2353d8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2353D8u;
    SET_GPR_U32(ctx, 31, 0x2353E0u);
    ctx->pc = 0x2353DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353D8u;
    // 0x2353dc: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2353D8u, 0x2353E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353E0u;
label_2353e0:
    // 0x2353e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2353e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2353e4:
    // 0x2353e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2353e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2353e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2353e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2353ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2353f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2353f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2353f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2353f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2353f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2353fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2353fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235400: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x235404u;
}
