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

// Function: entry_0023b30c
// Address: 0x23b30c - 0x23b3f8
void entry_0023b30c_0x23b30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b30c_0x23b30c");
#endif

    ctx->pc = 0x23b30cu;

    // 0x23b30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b320: 0x3e00008  jr          $ra
    ctx->pc = 0x23B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B328u;
    // 0x23b328: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x23b32c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23b32cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x23b330: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23b330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23b334: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x23b338: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23b33c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x23b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x23b340: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B340u;
    {
        const bool branch_taken_0x23b340 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B340u;
        // 0x23b344: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b340) {
            ctx->pc = 0x23B368u;
            goto label_23b368;
        }
    }
    ctx->pc = 0x23B348u;
    // 0x23b348: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23b34c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b358: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x23b358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23b35c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x23b35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x23b360: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23B360u;
    {
        const bool branch_taken_0x23b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B360u;
        // 0x23b364: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b360) {
            ctx->pc = 0x23B3ECu;
            goto label_23b3ec;
        }
    }
    ctx->pc = 0x23B368u;
label_23b368:
    // 0x23b368: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x23b36c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x23b36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x23b370: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23B370u;
    {
        const bool branch_taken_0x23b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b370) {
            ctx->pc = 0x23B374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B370u;
            // 0x23b374: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B3A8u;
            goto label_23b3a8;
        }
    }
    ctx->pc = 0x23B378u;
    // 0x23b378: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x23b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x23b37c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23b380: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b384: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x23b388: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23b388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x23b38c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b390: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b398: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23b398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x23b39c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23B39Cu;
    {
        const bool branch_taken_0x23b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B39Cu;
        // 0x23b3a0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b39c) {
            ctx->pc = 0x23B3ECu;
            goto label_23b3ec;
        }
    }
    ctx->pc = 0x23B3A4u;
    // 0x23b3a4: 0x0  nop
    ctx->pc = 0x23b3a4u;
    // NOP
label_23b3a8:
    // 0x23b3a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23b3ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b3b0: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x23b3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x23b3b4: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x23b3b4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x23b3b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B3B8u;
    {
        const bool branch_taken_0x23b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3b8) {
            ctx->pc = 0x23B3D0u;
            goto label_23b3d0;
        }
    }
    ctx->pc = 0x23B3C0u;
    // 0x23b3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b3c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23B3C4u;
    {
        const bool branch_taken_0x23b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C4u;
        // 0x23b3c8: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3c4) {
            ctx->pc = 0x23B3D4u;
            goto label_23b3d4;
        }
    }
    ctx->pc = 0x23B3CCu;
    // 0x23b3cc: 0x0  nop
    ctx->pc = 0x23b3ccu;
    // NOP
label_23b3d0:
    // 0x23b3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b3d4:
    // 0x23b3d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b3d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b3dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b3e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b3e4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23b3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x23b3e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23b3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_23b3ec:
    // 0x23b3ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23b3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B3F8u;
}
