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

// Function: FUN_001a0638
// Address: 0x1a0638 - 0x1a06d0
void FUN_001a0638_0x1a0638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0638_0x1a0638");
#endif

    switch (ctx->pc) {
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06c0u: goto label_1a06c0;
        default: break;
    }

    ctx->pc = 0x1a0638u;

    // 0x1a0638: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a063c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1a063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1a0640: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1a0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1a0644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0648: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1a0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1a064c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1a0650: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0650u;
    {
        const bool branch_taken_0x1a0650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0650) {
            ctx->pc = 0x1A067Cu;
            goto label_1a067c;
        }
    }
    ctx->pc = 0x1A0658u;
    // 0x1a0658: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1a065c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a0660: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a0660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0664: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A0694u;
            goto label_1a0694;
        }
    }
    ctx->pc = 0x1A066Cu;
    // 0x1a066c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0670: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a0670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0674u;
    {
        const bool branch_taken_0x1a0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0674u;
        // 0x1a0678: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0674) {
            ctx->pc = 0x1A0694u;
            goto label_1a0694;
        }
    }
    ctx->pc = 0x1A067Cu;
label_1a067c:
    // 0x1a067c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a0680: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a0684: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1a0688: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a068c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0690: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1a0690u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a0694:
    // 0x1a0694: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A06C4u;
            goto label_1a06c4;
        }
    }
    ctx->pc = 0x1A069Cu;
    // 0x1a069c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a06a0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a06a4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a06a8: 0x24a5a240  addiu       $a1, $a1, -0x5DC0
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943296));
    // 0x1a06ac: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1A06ACu;
    SET_GPR_U32(ctx, 31, 0x1A06B4u);
    ctx->pc = 0x1A06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06ACu;
    // 0x1a06b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1A06ACu, 0x1A06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06B4u;
label_1a06b4:
    // 0x1a06b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06b8: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A06B8u;
    SET_GPR_U32(ctx, 31, 0x1A06C0u);
    ctx->pc = 0x1A06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06B8u;
    // 0x1a06bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A06B8u, 0x1A06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a06c4:
    // 0x1a06c4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1a06c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a06c8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1a06c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a06cc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1a06ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->pc = 0x1a06d0u;
}
