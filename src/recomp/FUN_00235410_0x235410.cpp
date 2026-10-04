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

// Function: FUN_00235410
// Address: 0x235410 - 0x2354d8
void FUN_00235410_0x235410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235410_0x235410");
#endif

    switch (ctx->pc) {
        case 0x235458u: goto label_235458;
        case 0x235468u: goto label_235468;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354b4u: goto label_2354b4;
        default: break;
    }

    ctx->pc = 0x235410u;

    // 0x235410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23541c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x235420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x235424: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23542c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235434: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x235434u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x235438: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23543c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x23543cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x235440: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235444: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x235444u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x235448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23544c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x235450: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235450u;
    SET_GPR_U32(ctx, 31, 0x235458u);
    ctx->pc = 0x235454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235450u;
    // 0x235454: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235450u, 0x235458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235458u;
label_235458:
    // 0x235458: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x235458u;
    {
        const bool branch_taken_0x235458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235458u;
        // 0x23545c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235458) {
            ctx->pc = 0x2354B8u;
            goto label_2354b8;
        }
    }
    ctx->pc = 0x235460u;
    // 0x235460: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235460u;
    SET_GPR_U32(ctx, 31, 0x235468u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235460u, 0x235468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235468u;
label_235468:
    // 0x235468: 0x1219c2  srl         $v1, $s2, 7
    ctx->pc = 0x235468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
    // 0x23546c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23546cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235470: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235474: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235478: 0x3249007f  andi        $t1, $s2, 0x7F
    ctx->pc = 0x235478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
    // 0x23547c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235480: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x235480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x235484: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235484u;
    {
        const bool branch_taken_0x235484 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235484u;
        // 0x235488: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235484) {
            ctx->pc = 0x2354ACu;
            goto label_2354ac;
        }
    }
    ctx->pc = 0x23548Cu;
    // 0x23548c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x23548cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x235490: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x235494: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x235494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x235498: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x23549c: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x23549cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    // 0x2354a0: 0xc08d192  jal         func_234648
    ctx->pc = 0x2354A0u;
    SET_GPR_U32(ctx, 31, 0x2354A8u);
    ctx->pc = 0x2354A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354A0u;
    // 0x2354a4: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2354A0u, 0x2354A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354A8u;
label_2354a8:
    // 0x2354a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2354a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2354ac:
    // 0x2354ac: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2354ACu;
    SET_GPR_U32(ctx, 31, 0x2354B4u);
    ctx->pc = 0x2354B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354ACu;
    // 0x2354b0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2354ACu, 0x2354B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354B4u;
label_2354b4:
    // 0x2354b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2354b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2354b8:
    // 0x2354b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2354bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2354bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2354c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2354c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2354c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2354c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2354c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2354cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2354ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2354d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2354d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2354d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2354d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x2354d8u;
}
