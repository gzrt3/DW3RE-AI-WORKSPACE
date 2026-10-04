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

// Function: entry_0015180c
// Address: 0x15180c - 0x1518e0
void entry_0015180c_0x15180c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015180c_0x15180c");
#endif

    switch (ctx->pc) {
        case 0x15184cu: goto label_15184c;
        default: break;
    }

    ctx->pc = 0x15180cu;

    // 0x15180c: 0x0  nop
    ctx->pc = 0x15180cu;
    // NOP
    // 0x151810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151814: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x151818: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151818u;
    {
        const bool branch_taken_0x151818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151818u;
        // 0x15181c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151818) {
            ctx->pc = 0x1517C8u;
            return;
        }
    }
    ctx->pc = 0x151820u;
    // 0x151820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15182c: 0x3e00008  jr          $ra
    ctx->pc = 0x15182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15182Cu;
        // 0x151830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151834u;
    // 0x151834: 0x0  nop
    ctx->pc = 0x151834u;
    // NOP
    // 0x151838: 0x0  nop
    ctx->pc = 0x151838u;
    // NOP
    // 0x15183c: 0x0  nop
    ctx->pc = 0x15183cu;
    // NOP
    // 0x151840: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x151844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151848: 0x24a56c70  addiu       $a1, $a1, 0x6C70
    ctx->pc = 0x151848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
label_15184c:
    // 0x15184c: 0x8ca303c0  lw          $v1, 0x3C0($a1)
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 960)));
    // 0x151850: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151850u;
    {
        const bool branch_taken_0x151850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151850u;
        // 0x151854: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151850) {
            ctx->pc = 0x151868u;
            goto label_151868;
        }
    }
    ctx->pc = 0x151858u;
    // 0x151858: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x151858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15185c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x15185cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x151860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x151860u;
    {
        const bool branch_taken_0x151860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151860u;
        // 0x151864: 0xa4c00002  sh          $zero, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151860) {
            ctx->pc = 0x1518B8u;
            goto label_1518b8;
        }
    }
    ctx->pc = 0x151868u;
label_151868:
    // 0x151868: 0x8ca303c4  lw          $v1, 0x3C4($a1)
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
    // 0x15186c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15186Cu;
    {
        const bool branch_taken_0x15186c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15186c) {
            ctx->pc = 0x15188Cu;
            goto label_15188c;
        }
    }
    ctx->pc = 0x151874u;
    // 0x151874: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x151874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151878: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x151878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15187c: 0x8ca303c4  lw          $v1, 0x3C4($a1)
    ctx->pc = 0x15187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
    // 0x151880: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x151880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151884u;
    {
        const bool branch_taken_0x151884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151884u;
        // 0x151888: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151884) {
            ctx->pc = 0x1518A0u;
            goto label_1518a0;
        }
    }
    ctx->pc = 0x15188Cu;
label_15188c:
    // 0x15188c: 0x0  nop
    ctx->pc = 0x15188cu;
    // NOP
    // 0x151890: 0xc4a003b0  lwc1        $f0, 0x3B0($a1)
    ctx->pc = 0x151890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151894: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x151894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x151898: 0xc4a003b8  lwc1        $f0, 0x3B8($a1)
    ctx->pc = 0x151898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15189c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x15189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1518a0:
    // 0x1518a0: 0x84a303cc  lh          $v1, 0x3CC($a1)
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 972)));
    // 0x1518a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1518a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1518a8: 0x84a303c8  lh          $v1, 0x3C8($a1)
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 968)));
    // 0x1518ac: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1518acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1518b0: 0x84a303ca  lh          $v1, 0x3CA($a1)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 970)));
    // 0x1518b4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1518b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1518b8:
    // 0x1518b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1518bc: 0x28e30014  slti        $v1, $a3, 0x14
    ctx->pc = 0x1518bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1518c0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1518c4: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1518C4u;
    {
        const bool branch_taken_0x1518c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518C4u;
        // 0x1518c8: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518c4) {
            ctx->pc = 0x15184Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15184c;
        }
    }
    ctx->pc = 0x1518CCu;
    // 0x1518cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1518CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1518CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1518D4u;
    // 0x1518d4: 0x0  nop
    ctx->pc = 0x1518d4u;
    // NOP
    // 0x1518d8: 0x0  nop
    ctx->pc = 0x1518d8u;
    // NOP
    // 0x1518dc: 0x0  nop
    ctx->pc = 0x1518dcu;
    // NOP
    ctx->pc = 0x1518e0u;
}
