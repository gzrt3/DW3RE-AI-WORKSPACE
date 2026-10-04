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

// Function: FUN_0012eae0
// Address: 0x12eae0 - 0x12ebd0
void FUN_0012eae0_0x12eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012eae0_0x12eae0");
#endif

    switch (ctx->pc) {
        case 0x12eb30u: goto label_12eb30;
        default: break;
    }

    ctx->pc = 0x12eae0u;

    // 0x12eae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12eae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12eae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12eaec: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12eaf0: 0x28a1001e  slti        $at, $a1, 0x1E
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12eaf4: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x12EAF4u;
    {
        const bool branch_taken_0x12eaf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAF4u;
        // 0x12eaf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaf4) {
            ctx->pc = 0x12EBCCu;
            goto label_12ebcc;
        }
    }
    ctx->pc = 0x12EAFCu;
    // 0x12eafc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x12eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12eb00: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x12eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x12eb04: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x12eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12eb08: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x12eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x12eb0c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x12eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12eb10: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12eb14: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x12eb18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12eb1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12eb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12eb20: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x12EB20u;
    {
        const bool branch_taken_0x12eb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB20u;
        // 0x12eb24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb20) {
            ctx->pc = 0x12EBCCu;
            goto label_12ebcc;
        }
    }
    ctx->pc = 0x12EB28u;
    // 0x12eb28: 0xc0590dc  jal         func_164370
    ctx->pc = 0x12EB28u;
    SET_GPR_U32(ctx, 31, 0x12EB30u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x12EB28u, 0x12EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB30u;
label_12eb30:
    // 0x12eb30: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x12EB30u;
    {
        const bool branch_taken_0x12eb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb30) {
            ctx->pc = 0x12EBCCu;
            goto label_12ebcc;
        }
    }
    ctx->pc = 0x12EB38u;
    // 0x12eb38: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12eb3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x12eb40: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
    // 0x12eb44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb48: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x12eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12eb4c: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12eb50: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x12eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12eb54: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x12eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12eb58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x12eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x12eb5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12eb60: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x12eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
    // 0x12eb64: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x12eb68: 0xa4440016  sh          $a0, 0x16($v0)
    ctx->pc = 0x12eb68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x12eb6c: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12eb70: 0xa4440018  sh          $a0, 0x18($v0)
    ctx->pc = 0x12eb70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x12eb74: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12eb78: 0xa4440014  sh          $a0, 0x14($v0)
    ctx->pc = 0x12eb78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x12eb7c: 0x8604000c  lh          $a0, 0xC($s0)
    ctx->pc = 0x12eb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12eb80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12eb80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12eb84: 0x0  nop
    ctx->pc = 0x12eb84u;
    // NOP
    // 0x12eb88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12eb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12eb8c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x12eb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x12eb90: 0x8604000e  lh          $a0, 0xE($s0)
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12eb94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12eb94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12eb98: 0x0  nop
    ctx->pc = 0x12eb98u;
    // NOP
    // 0x12eb9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12eb9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12eba0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x12eba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x12eba4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x12eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x12eba8: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x12eba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x12ebac: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EBACu;
    {
        const bool branch_taken_0x12ebac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ebac) {
            ctx->pc = 0x12EBCCu;
            goto label_12ebcc;
        }
    }
    ctx->pc = 0x12EBB4u;
    // 0x12ebb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EBB4u;
    {
        const bool branch_taken_0x12ebb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBB4u;
        // 0x12ebb8: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebb4) {
            ctx->pc = 0x12EBC4u;
            goto label_12ebc4;
        }
    }
    ctx->pc = 0x12EBBCu;
    // 0x12ebbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EBBCu;
    {
        const bool branch_taken_0x12ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBBCu;
        // 0x12ebc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebbc) {
            ctx->pc = 0x12EBD0u;
            return;
        }
    }
    ctx->pc = 0x12EBC4u;
label_12ebc4:
    // 0x12ebc4: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x12ebc8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x12ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_12ebcc:
    // 0x12ebcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ebccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12ebd0u;
}
