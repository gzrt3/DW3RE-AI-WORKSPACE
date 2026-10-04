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

// Function: FUN_0019f658
// Address: 0x19f658 - 0x19f71c
void FUN_0019f658_0x19f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f658_0x19f658");
#endif

    switch (ctx->pc) {
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6b8u: goto label_19f6b8;
        default: break;
    }

    ctx->pc = 0x19f658u;

    // 0x19f658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f65c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f664: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f66c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x19f670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f674: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x19f674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x19f678: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f688u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f68c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f690: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19f690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x19f694: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F694u;
    {
        const bool branch_taken_0x19f694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F694u;
        // 0x19f698: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f694) {
            ctx->pc = 0x19F6E8u;
            goto label_19f6e8;
        }
    }
    ctx->pc = 0x19F69Cu;
    // 0x19f69c: 0x0  nop
    ctx->pc = 0x19f69cu;
    // NOP
label_19f6a0:
    // 0x19f6a0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6a4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f6a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F6A8u;
    {
        const bool branch_taken_0x19f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A8u;
        // 0x19f6ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6a8) {
            ctx->pc = 0x19F6BCu;
            goto label_19f6bc;
        }
    }
    ctx->pc = 0x19F6B0u;
    // 0x19f6b0: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F6B0u;
    SET_GPR_U32(ctx, 31, 0x19F6B8u);
    ctx->pc = 0x19F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6B0u;
    // 0x19f6b4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F6B0u, 0x19F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6B8u;
label_19f6b8:
    // 0x19f6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6bc:
    // 0x19f6bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f6c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f6c4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f6c8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f6cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f6d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f6d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f6d8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6D8u;
        // 0x19f6dc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6a0;
        }
    }
    ctx->pc = 0x19F6E0u;
    // 0x19f6e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F6E0u;
    {
        const bool branch_taken_0x19f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E0u;
        // 0x19f6e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6e0) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F6E8u;
label_19f6e8:
    // 0x19f6e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19f6ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f6f0:
    // 0x19f6f0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x19f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x19f6f4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x19f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x19f6f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19f6fc: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x19f700: 0x26425910  addiu       $v0, $s2, 0x5910
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22800));
    // 0x19f704: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19f708: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19f70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f710: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f714: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F714u;
    SET_GPR_U32(ctx, 31, 0x19F71Cu);
    ctx->pc = 0x19F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F714u;
    // 0x19f718: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F714u, 0x19F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F71Cu;
}
