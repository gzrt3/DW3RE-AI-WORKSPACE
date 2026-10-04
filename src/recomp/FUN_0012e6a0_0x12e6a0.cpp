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

// Function: FUN_0012e6a0
// Address: 0x12e6a0 - 0x12e7c4
void FUN_0012e6a0_0x12e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e6a0_0x12e6a0");
#endif

    switch (ctx->pc) {
        case 0x12e720u: goto label_12e720;
        default: break;
    }

    ctx->pc = 0x12e6a0u;

    // 0x12e6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e6a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6b0: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12e6b4: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x12e6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12e6b8: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x12E6B8u;
    {
        const bool branch_taken_0x12e6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6B8u;
        // 0x12e6bc: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6b8) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E6C0u;
    // 0x12e6c0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x12e6c4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x12e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e6c8: 0x24a552f4  addiu       $a1, $a1, 0x52F4
    ctx->pc = 0x12e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21236));
    // 0x12e6cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e6d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e6d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e6d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12e6dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12e6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e6e0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x12E6E0u;
    {
        const bool branch_taken_0x12e6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e6e0) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E6E8u;
    // 0x12e6e8: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12e6ec: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x12e6ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12e6f0: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x12E6F0u;
    {
        const bool branch_taken_0x12e6f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F0u;
        // 0x12e6f4: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6f0) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E6F8u;
    // 0x12e6f8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e6fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e700: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12e700u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e704: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e708: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12e70c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12e70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e710: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E710u;
    {
        const bool branch_taken_0x12e710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e710) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E718u;
    // 0x12e718: 0xc0590dc  jal         func_164370
    ctx->pc = 0x12E718u;
    SET_GPR_U32(ctx, 31, 0x12E720u);
    ctx->pc = 0x12E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E718u;
    // 0x12e71c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x12E718u, 0x12E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E720u;
label_12e720:
    // 0x12e720: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12E720u;
    {
        const bool branch_taken_0x12e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e720) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E728u;
    // 0x12e728: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e72c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x12e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x12e730: 0x24a55060  addiu       $a1, $a1, 0x5060
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20576));
    // 0x12e734: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x12e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12e738: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x12e738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e73c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e740: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e744: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e748: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12e74c: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x12e750: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x12e750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12e754: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12e758: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e75c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e760: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12e760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e764: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e768: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12e768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12e76c: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x12e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x12e770: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x12e774: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x12e774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x12e778: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x12e778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x12e77c: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x12e77cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x12e780: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12e784: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x12e784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x12e788: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x12e788u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e78c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x12e78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x12e790: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x12e794: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x12E794u;
    {
        const bool branch_taken_0x12e794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E794u;
        // 0x12e798: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e794) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E79Cu;
    // 0x12e79c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e7a0: 0x248455b0  addiu       $a0, $a0, 0x55B0
    ctx->pc = 0x12e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21936));
    // 0x12e7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e7a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e7ac: 0x600008  jr          $v1
    ctx->pc = 0x12E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E7B4u: goto label_12e7b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E7ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12E7B4u;
label_12e7b4:
    // 0x12e7b4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12e7b8: 0x2463e7d0  addiu       $v1, $v1, -0x1830
    ctx->pc = 0x12e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x12e7bc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x12e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_12e7c0:
    // 0x12e7c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12e7c4u;
}
