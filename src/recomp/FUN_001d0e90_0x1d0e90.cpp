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

// Function: FUN_001d0e90
// Address: 0x1d0e90 - 0x1d100c
void FUN_001d0e90_0x1d0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0e90_0x1d0e90");
#endif

    switch (ctx->pc) {
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fdcu: goto label_1d0fdc;
        default: break;
    }

    ctx->pc = 0x1d0e90u;

    // 0x1d0e90: 0x24022230  addiu       $v0, $zero, 0x2230
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8752));
    // 0x1d0e94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0e98: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d0e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0e9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0ea8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1d0eac: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x1d0eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0eb4: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1D0EB4u;
    SET_GPR_U32(ctx, 31, 0x1D0EBCu);
    ctx->pc = 0x1D0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB4u;
    // 0x1d0eb8: 0x24512200  addiu       $s1, $v0, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1D0EB4u, 0x1D0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EBCu;
label_1d0ebc:
    // 0x1d0ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0EC0u;
    {
        const bool branch_taken_0x1d0ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ec0) {
            ctx->pc = 0x1D0EE0u;
            goto label_1d0ee0;
        }
    }
    ctx->pc = 0x1D0EC8u;
    // 0x1d0ec8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d0ecc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d0ed0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1d0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x1d0ed4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1d0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x1d0ed8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1D0ED8u;
    {
        const bool branch_taken_0x1d0ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED8u;
        // 0x1d0edc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed8) {
            ctx->pc = 0x1D1008u;
            goto label_1d1008;
        }
    }
    ctx->pc = 0x1D0EE0u;
label_1d0ee0:
    // 0x1d0ee0: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1d0ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x1d0ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EE8u;
    {
        const bool branch_taken_0x1d0ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0ee8) {
            ctx->pc = 0x1D0EF8u;
            goto label_1d0ef8;
        }
    }
    ctx->pc = 0x1D0EF0u;
    // 0x1d0ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EF0u;
    {
        const bool branch_taken_0x1d0ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF0u;
        // 0x1d0ef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ef0) {
            ctx->pc = 0x1D0F00u;
            goto label_1d0f00;
        }
    }
    ctx->pc = 0x1D0EF8u;
label_1d0ef8:
    // 0x1d0ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0efc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1d0f00:
    // 0x1d0f00: 0x92020242  lbu         $v0, 0x242($s0)
    ctx->pc = 0x1d0f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
    // 0x1d0f04: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1d0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1d0f08: 0x92020241  lbu         $v0, 0x241($s0)
    ctx->pc = 0x1d0f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
    // 0x1d0f0c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1d0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1d0f10: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1d0f14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d0f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d0f18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F18u;
    {
        const bool branch_taken_0x1d0f18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f18) {
            ctx->pc = 0x1D0F28u;
            goto label_1d0f28;
        }
    }
    ctx->pc = 0x1D0F20u;
    // 0x1d0f20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F20u;
    {
        const bool branch_taken_0x1d0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F20u;
        // 0x1d0f24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f20) {
            ctx->pc = 0x1D0F30u;
            goto label_1d0f30;
        }
    }
    ctx->pc = 0x1D0F28u;
label_1d0f28:
    // 0x1d0f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d0f30:
    // 0x1d0f30: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x1d0f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x1d0f34: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0f38: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1d0f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0f3c: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x1d0f3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1d0f40: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1d0f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d0f44: 0x1280a  movz        $a1, $zero, $at
    ctx->pc = 0x1d0f44u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1d0f48: 0x92040233  lbu         $a0, 0x233($s0)
    ctx->pc = 0x1d0f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x1d0f4c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1d0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1d0f50: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F50u;
    {
        const bool branch_taken_0x1d0f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f50) {
            ctx->pc = 0x1D0F68u;
            goto label_1d0f68;
        }
    }
    ctx->pc = 0x1D0F58u;
    // 0x1d0f58: 0x92030239  lbu         $v1, 0x239($s0)
    ctx->pc = 0x1d0f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
    // 0x1d0f5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1d0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d0f60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0F60u;
    {
        const bool branch_taken_0x1d0f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f60) {
            ctx->pc = 0x1D0F84u;
            goto label_1d0f84;
        }
    }
    ctx->pc = 0x1D0F68u;
label_1d0f68:
    // 0x1d0f68: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1d0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x1d0f6c: 0x92020239  lbu         $v0, 0x239($s0)
    ctx->pc = 0x1d0f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
    // 0x1d0f70: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1d0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1d0f74: 0x8602021e  lh          $v0, 0x21E($s0)
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x1d0f78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d0f7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0F7Cu;
    {
        const bool branch_taken_0x1d0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F7Cu;
        // 0x1d0f80: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f7c) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F84u;
label_1d0f84:
    // 0x1d0f84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d0f88: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F90u;
    // 0x1d0f90: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d0f94: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d0f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0f9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1d0fa0:
    // 0x1d0fa0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d0fa4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0FA4u;
    {
        const bool branch_taken_0x1d0fa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d0fa4) {
            ctx->pc = 0x1D0FB4u;
            goto label_1d0fb4;
        }
    }
    ctx->pc = 0x1D0FACu;
    // 0x1d0fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d0fb0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1d0fb4:
    // 0x1d0fb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d0fb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d0fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d0fbc: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d0fbcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1d0fc0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1d0fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fc8: 0xc06ffcc  jal         func_1BFF30
    ctx->pc = 0x1D0FC8u;
    SET_GPR_U32(ctx, 31, 0x1D0FD0u);
    ctx->pc = 0x1D0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FC8u;
    // 0x1d0fcc: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFF30u, 0x1D0FC8u, 0x1D0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FD0u;
label_1d0fd0:
    // 0x1d0fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fd4: 0xc06ffac  jal         func_1BFEB0
    ctx->pc = 0x1D0FD4u;
    SET_GPR_U32(ctx, 31, 0x1D0FDCu);
    ctx->pc = 0x1D0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FD4u;
    // 0x1d0fd8: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEB0u, 0x1D0FD4u, 0x1D0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FDCu;
label_1d0fdc:
    // 0x1d0fdc: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1d0fe0: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1d0fe4: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1d0fe8: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1d0fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d0fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ff0: 0x0  nop
    ctx->pc = 0x1d0ff0u;
    // NOP
    // 0x1d0ff4: 0x2010  mfhi        $a0
    ctx->pc = 0x1d0ff4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1d0ff8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1d0ffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1000: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x1d1000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x1d1004: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d1004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d1008:
    // 0x1d1008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d100cu;
}
