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

// Function: FUN_0023b718
// Address: 0x23b718 - 0x23b7dc
void FUN_0023b718_0x23b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b718_0x23b718");
#endif

    switch (ctx->pc) {
        case 0x23b73cu: goto label_23b73c;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b7ccu: goto label_23b7cc;
        default: break;
    }

    ctx->pc = 0x23b718u;

    // 0x23b718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b71c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23b720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b724: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b728: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23b72c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b730: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23b734: 0xc08ecfe  jal         func_23B3F8
    ctx->pc = 0x23B734u;
    SET_GPR_U32(ctx, 31, 0x23B73Cu);
    ctx->pc = 0x23B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B734u;
    // 0x23b738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3F8u, 0x23B734u, 0x23B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B73Cu;
label_23b73c:
    // 0x23b73c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23b740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b744: 0xc08ecfe  jal         func_23B3F8
    ctx->pc = 0x23B744u;
    SET_GPR_U32(ctx, 31, 0x23B74Cu);
    ctx->pc = 0x23B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B744u;
    // 0x23b748: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3F8u, 0x23B744u, 0x23B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B74Cu;
label_23b74c:
    // 0x23b74c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23b750: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b754: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x23b754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23b758: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x23b758u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x23b75c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b760: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x23b760u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x23b764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b768: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23b76c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x23b770: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b778: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x23b77c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23b77cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b780: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23b784: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23b788: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B788u;
    {
        const bool branch_taken_0x23b788 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B788u;
        // 0x23b78c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b788) {
            ctx->pc = 0x23B7A8u;
            goto label_23b7a8;
        }
    }
    ctx->pc = 0x23B790u;
    // 0x23b790: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23b794: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b798: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x23b798u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x23b79c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23B79Cu;
    {
        const bool branch_taken_0x23b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B79Cu;
        // 0x23b7a0: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b79c) {
            ctx->pc = 0x23B7BCu;
            goto label_23b7bc;
        }
    }
    ctx->pc = 0x23B7A4u;
    // 0x23b7a4: 0x0  nop
    ctx->pc = 0x23b7a4u;
    // NOP
label_23b7a8:
    // 0x23b7a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23b7ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b7b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b7b4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x23b7b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x23b7b8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x23b7b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_23b7bc:
    // 0x23b7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x23b7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c4: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x23B7C4u;
    SET_GPR_U32(ctx, 31, 0x23B7CCu);
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x23B7C4u, 0x23B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7CCu;
label_23b7cc:
    // 0x23b7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b7d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b7d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x23b7dcu;
}
