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

// Function: entry_00170344
// Address: 0x170344 - 0x170400
void entry_00170344_0x170344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170344_0x170344");
#endif

    switch (ctx->pc) {
        case 0x170384u: goto label_170384;
        default: break;
    }

    ctx->pc = 0x170344u;

    // 0x170344: 0x0  nop
    ctx->pc = 0x170344u;
    // NOP
    // 0x170348: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17034c: 0x28eb0010  slti        $t3, $a3, 0x10
    ctx->pc = 0x17034cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x170350: 0x1560ffd9  bnez        $t3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x170350u;
    {
        const bool branch_taken_0x170350 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x170354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170350u;
        // 0x170354: 0xe37004  sllv        $t6, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170350) {
            ctx->pc = 0x1702B8u;
            return;
        }
    }
    ctx->pc = 0x170358u;
    // 0x170358: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x170358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17035c: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x17035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x170360: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x170360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170364: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x170364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170368: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x17036c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17036cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x170370: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x170370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170374: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x170374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x170378: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x170378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17037c: 0xc05c100  jal         func_170400
    ctx->pc = 0x17037Cu;
    SET_GPR_U32(ctx, 31, 0x170384u);
    ctx->pc = 0x170380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17037Cu;
    // 0x170380: 0xa60a0000  sh          $t2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170400u, 0x17037Cu, 0x170384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170384u;
label_170384:
    // 0x170384: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x170384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x170388: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x170388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x17038c: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x17038cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170390: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x170390u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170394: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x170398: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x170398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17039c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x17039cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1703a0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1703a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1703a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1703a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1703a8: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x1703a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1703ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1703acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1703b0: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1703b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1703b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1703b8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1703b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1703bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1703bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1703c0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1703c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1703c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1703c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1703cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1703ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1703d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1703d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1703d4: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x1703d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1703d8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1703d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1703dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1703dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1703e0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1703e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703e4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1703e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1703e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1703e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1703ec: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1703ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1703f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1703f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1703f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1703F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F8u;
        // 0x1703fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170400u;
}
