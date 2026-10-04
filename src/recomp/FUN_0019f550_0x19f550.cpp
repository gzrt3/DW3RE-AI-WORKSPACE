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

// Function: FUN_0019f550
// Address: 0x19f550 - 0x19f620
void FUN_0019f550_0x19f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f550_0x19f550");
#endif

    switch (ctx->pc) {
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5c8u: goto label_19f5c8;
        default: break;
    }

    ctx->pc = 0x19f550u;

    // 0x19f550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f554: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f55c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f564: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f568: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x19f56c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F56Cu;
    {
        const bool branch_taken_0x19f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F56Cu;
        // 0x19f570: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f56c) {
            ctx->pc = 0x19F584u;
            goto label_19f584;
        }
    }
    ctx->pc = 0x19F574u;
    // 0x19f574: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x19f578: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19f57c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x19F57Cu;
    {
        const bool branch_taken_0x19f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f57c) {
            ctx->pc = 0x19F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F57Cu;
            // 0x19f580: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F638u;
            return;
        }
    }
    ctx->pc = 0x19F584u;
label_19f584:
    // 0x19f584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f588: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f58c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f590: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f594u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f598: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f59c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19f5a0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19F5A0u;
    {
        const bool branch_taken_0x19f5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5A0u;
        // 0x19f5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5a0) {
            ctx->pc = 0x19F5F8u;
            goto label_19f5f8;
        }
    }
    ctx->pc = 0x19F5A8u;
    // 0x19f5a8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x19f5ac: 0x0  nop
    ctx->pc = 0x19f5acu;
    // NOP
label_19f5b0:
    // 0x19f5b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f5b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F5B8u;
    {
        const bool branch_taken_0x19f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5b8) {
            ctx->pc = 0x19F5CCu;
            goto label_19f5cc;
        }
    }
    ctx->pc = 0x19F5C0u;
    // 0x19f5c0: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F5C0u;
    SET_GPR_U32(ctx, 31, 0x19F5C8u);
    ctx->pc = 0x19F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5C0u;
    // 0x19f5c4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F5C0u, 0x19F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5C8u;
label_19f5c8:
    // 0x19f5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f5cc:
    // 0x19f5cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f5d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f5d4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f5d8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f5dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f5e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f5e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f5e8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f5b0;
        }
    }
    ctx->pc = 0x19F5F0u;
    // 0x19f5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F5F0u;
    {
        const bool branch_taken_0x19f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F0u;
        // 0x19f5f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f0) {
            ctx->pc = 0x19F604u;
            goto label_19f604;
        }
    }
    ctx->pc = 0x19F5F8u;
label_19f5f8:
    // 0x19f5f8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x19f5fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f600: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19f604:
    // 0x19f604: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f608: 0x26255910  addiu       $a1, $s1, 0x5910
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22800));
    // 0x19f60c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19f610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f614: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f618: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F618u;
    SET_GPR_U32(ctx, 31, 0x19F620u);
    ctx->pc = 0x19F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F618u;
    // 0x19f61c: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F618u, 0x19F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F620u;
}
