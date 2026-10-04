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

// Function: FUN_0023a460
// Address: 0x23a460 - 0x23a4ec
void FUN_0023a460_0x23a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a460_0x23a460");
#endif

    switch (ctx->pc) {
        case 0x23a478u: goto label_23a478;
        case 0x23a4c8u: goto label_23a4c8;
        default: break;
    }

    ctx->pc = 0x23a460u;

    // 0x23a460: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23a460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a464: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A464u;
    {
        const bool branch_taken_0x23a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A464u;
        // 0x23a468: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a464) {
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A46Cu;
    // 0x23a46c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a470: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23A470u;
    {
        const bool branch_taken_0x23a470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a470) {
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A478u;
label_23a478:
    // 0x23a478: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x23a478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a47c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a480: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a484: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x23a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x23a488: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x23a488u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23a48c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a490: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x23a490u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x23a494: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x23a494u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x23a498: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x23a498u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x23a49c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A49Cu;
    {
        const bool branch_taken_0x23a49c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a49c) {
            ctx->pc = 0x23A4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A49Cu;
            // 0x23a4a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A4A4u;
    // 0x23a4a4: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x23A4A4u;
    {
        const bool branch_taken_0x23a4a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A4u;
        // 0x23a4a8: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4a4) {
            ctx->pc = 0x23A478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a478;
        }
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23a4b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a4b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23a4b8: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23A4B8u;
    {
        const bool branch_taken_0x23a4b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a4b8) {
            ctx->pc = 0x23A4ECu;
            return;
        }
    }
    ctx->pc = 0x23A4C0u;
    // 0x23a4c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x23a4c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x23a4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_23a4c8:
    // 0x23a4c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23a4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a4cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a4d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A4D0u;
    {
        const bool branch_taken_0x23a4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D0u;
        // 0x23a4d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d0) {
            ctx->pc = 0x23A4E0u;
            goto label_23a4e0;
        }
    }
    ctx->pc = 0x23A4D8u;
    // 0x23a4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D8u;
        // 0x23a4dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4E0u;
label_23a4e0:
    // 0x23a4e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a4e4: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4c8;
        }
    }
    ctx->pc = 0x23A4ECu;
}
