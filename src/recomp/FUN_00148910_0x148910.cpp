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

// Function: FUN_00148910
// Address: 0x148910 - 0x148ba8
void FUN_00148910_0x148910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148910_0x148910");
#endif

    switch (ctx->pc) {
        case 0x1489c4u: goto label_1489c4;
        case 0x1489e8u: goto label_1489e8;
        case 0x1489f8u: goto label_1489f8;
        case 0x148a1cu: goto label_148a1c;
        case 0x148a2cu: goto label_148a2c;
        case 0x148a7cu: goto label_148a7c;
        case 0x148b00u: goto label_148b00;
        case 0x148b10u: goto label_148b10;
        case 0x148b94u: goto label_148b94;
        case 0x148ba4u: goto label_148ba4;
        default: break;
    }

    ctx->pc = 0x148910u;

    // 0x148910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14891c: 0x90830036  lbu         $v1, 0x36($a0)
    ctx->pc = 0x14891cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x148920: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x148920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x148924: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
    ctx->pc = 0x148924u;
    {
        const bool branch_taken_0x148924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148924u;
        // 0x148928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148924) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x14892Cu;
    // 0x14892c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x14892cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x148930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148934: 0x24a55910  addiu       $a1, $a1, 0x5910
    ctx->pc = 0x148934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22800));
    // 0x148938: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x148938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14893c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148940: 0x600008  jr          $v1
    ctx->pc = 0x148940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148948u: goto label_148948;
            case 0x1489F0u: goto label_1489f0;
            case 0x148A24u: goto label_148a24;
            case 0x148A84u: goto label_148a84;
            case 0x148B18u: goto label_148b18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148940u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148948u;
label_148948:
    // 0x148948: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14894c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x148950: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x148950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x148954: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148954u;
    {
        const bool branch_taken_0x148954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148954u;
        // 0x148958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148954) {
            ctx->pc = 0x148984u;
            goto label_148984;
        }
    }
    ctx->pc = 0x14895Cu;
    // 0x14895c: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x14895cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x148960: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x148960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x148964: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148964u;
    {
        const bool branch_taken_0x148964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148964u;
        // 0x148968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148964) {
            ctx->pc = 0x1489BCu;
            goto label_1489bc;
        }
    }
    ctx->pc = 0x14896Cu;
    // 0x14896c: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x14896cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x148970: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x148970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x148974: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x148974u;
    {
        const bool branch_taken_0x148974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148974) {
            ctx->pc = 0x1489B8u;
            goto label_1489b8;
        }
    }
    ctx->pc = 0x14897Cu;
    // 0x14897c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14897Cu;
    {
        const bool branch_taken_0x14897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14897Cu;
        // 0x148980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14897c) {
            ctx->pc = 0x1489B8u;
            goto label_1489b8;
        }
    }
    ctx->pc = 0x148984u;
label_148984:
    // 0x148984: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x148984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148988: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x148988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14898c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14898cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148990: 0x0  nop
    ctx->pc = 0x148990u;
    // NOP
    // 0x148994: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x148994u;
    {
        const bool branch_taken_0x148994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148994) {
            ctx->pc = 0x1489B8u;
            goto label_1489b8;
        }
    }
    ctx->pc = 0x14899Cu;
    // 0x14899c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x14899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1489a0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1489a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1489a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1489a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1489a8: 0x0  nop
    ctx->pc = 0x1489a8u;
    // NOP
    // 0x1489ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1489ACu;
    {
        const bool branch_taken_0x1489ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1489ac) {
            ctx->pc = 0x1489B8u;
            goto label_1489b8;
        }
    }
    ctx->pc = 0x1489B4u;
    // 0x1489b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1489b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1489b8:
    // 0x1489b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1489b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1489bc:
    // 0x1489bc: 0xc052644  jal         func_149910
    ctx->pc = 0x1489BCu;
    SET_GPR_U32(ctx, 31, 0x1489C4u);
    ctx->pc = 0x1489C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489BCu;
    // 0x1489c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149910u, 0x1489BCu, 0x1489C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489C4u;
label_1489c4:
    // 0x1489c4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1489C4u;
    {
        const bool branch_taken_0x1489c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489c4) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x1489CCu;
    // 0x1489cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1489ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1489d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1489d4: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1489d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1489d8: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1489D8u;
    {
        const bool branch_taken_0x1489d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489D8u;
        // 0x1489dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489d8) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x1489E0u;
    // 0x1489e0: 0xc0531a8  jal         func_14C6A0
    ctx->pc = 0x1489E0u;
    SET_GPR_U32(ctx, 31, 0x1489E8u);
    ctx->pc = 0x14C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6A0u, 0x1489E0u, 0x1489E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489E8u;
label_1489e8:
    // 0x1489e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1489E8u;
    {
        const bool branch_taken_0x1489e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489E8u;
        // 0x1489ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489e8) {
            ctx->pc = 0x148BA8u;
            return;
        }
    }
    ctx->pc = 0x1489F0u;
label_1489f0:
    // 0x1489f0: 0xc0524e0  jal         func_149380
    ctx->pc = 0x1489F0u;
    SET_GPR_U32(ctx, 31, 0x1489F8u);
    ctx->pc = 0x1489F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489F0u;
    // 0x1489f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149380u, 0x1489F0u, 0x1489F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489F8u;
label_1489f8:
    // 0x1489f8: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1489F8u;
    {
        const bool branch_taken_0x1489f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489f8) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148A00u;
    // 0x148a00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148a04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x148a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148a08: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x148a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x148a0c: 0x10830065  beq         $a0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x148A0Cu;
    {
        const bool branch_taken_0x148a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x148A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A0Cu;
        // 0x148a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a0c) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148A14u;
    // 0x148a14: 0xc0531a8  jal         func_14C6A0
    ctx->pc = 0x148A14u;
    SET_GPR_U32(ctx, 31, 0x148A1Cu);
    ctx->pc = 0x14C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6A0u, 0x148A14u, 0x148A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A1Cu;
label_148a1c:
    // 0x148a1c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x148A1Cu;
    {
        const bool branch_taken_0x148a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a1c) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148A24u;
label_148a24:
    // 0x148a24: 0xc05247c  jal         func_1491F0
    ctx->pc = 0x148A24u;
    SET_GPR_U32(ctx, 31, 0x148A2Cu);
    ctx->pc = 0x148A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A24u;
    // 0x148a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491F0u, 0x148A24u, 0x148A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A2Cu;
label_148a2c:
    // 0x148a2c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x148A2Cu;
    {
        const bool branch_taken_0x148a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a2c) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148A34u;
    // 0x148a34: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x148a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x148a38: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x148a3c: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x148a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x148a40: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x148a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x148a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a48: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x148a4c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x148a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x148a50: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x148a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x148a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148a58: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x148a5c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x148a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148a60: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x148a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x148a64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x148a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x148a68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x148a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x148a6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x148a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x148a70: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x148a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x148a74: 0xc0530a4  jal         func_14C290
    ctx->pc = 0x148A74u;
    SET_GPR_U32(ctx, 31, 0x148A7Cu);
    ctx->pc = 0x148A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A74u;
    // 0x148a78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C290u, 0x148A74u, 0x148A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A7Cu;
label_148a7c:
    // 0x148a7c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x148A7Cu;
    {
        const bool branch_taken_0x148a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a7c) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148A84u;
label_148a84:
    // 0x148a84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148a88: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x148a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x148a8c: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x148a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x148a90: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148A90u;
    {
        const bool branch_taken_0x148a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A90u;
        // 0x148a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a90) {
            ctx->pc = 0x148AC0u;
            goto label_148ac0;
        }
    }
    ctx->pc = 0x148A98u;
    // 0x148a98: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x148a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x148a9c: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x148a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x148aa0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148AA0u;
    {
        const bool branch_taken_0x148aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AA0u;
        // 0x148aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aa0) {
            ctx->pc = 0x148AF8u;
            goto label_148af8;
        }
    }
    ctx->pc = 0x148AA8u;
    // 0x148aa8: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x148aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x148aac: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x148aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x148ab0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x148AB0u;
    {
        const bool branch_taken_0x148ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148ab0) {
            ctx->pc = 0x148AF4u;
            goto label_148af4;
        }
    }
    ctx->pc = 0x148AB8u;
    // 0x148ab8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148AB8u;
    {
        const bool branch_taken_0x148ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AB8u;
        // 0x148abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ab8) {
            ctx->pc = 0x148AF4u;
            goto label_148af4;
        }
    }
    ctx->pc = 0x148AC0u;
label_148ac0:
    // 0x148ac0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x148ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148ac4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x148ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ac8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x148ac8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148acc: 0x0  nop
    ctx->pc = 0x148accu;
    // NOP
    // 0x148ad0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x148AD0u;
    {
        const bool branch_taken_0x148ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ad0) {
            ctx->pc = 0x148AF4u;
            goto label_148af4;
        }
    }
    ctx->pc = 0x148AD8u;
    // 0x148ad8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x148ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148adc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x148adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ae0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x148ae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148ae4: 0x0  nop
    ctx->pc = 0x148ae4u;
    // NOP
    // 0x148ae8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x148AE8u;
    {
        const bool branch_taken_0x148ae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ae8) {
            ctx->pc = 0x148AF4u;
            goto label_148af4;
        }
    }
    ctx->pc = 0x148AF0u;
    // 0x148af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148af4:
    // 0x148af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148af8:
    // 0x148af8: 0xc052408  jal         func_149020
    ctx->pc = 0x148AF8u;
    SET_GPR_U32(ctx, 31, 0x148B00u);
    ctx->pc = 0x148AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148AF8u;
    // 0x148afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149020u, 0x148AF8u, 0x148B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B00u;
label_148b00:
    // 0x148b00: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x148B00u;
    {
        const bool branch_taken_0x148b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B00u;
        // 0x148b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b00) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148B08u;
    // 0x148b08: 0xc0531a8  jal         func_14C6A0
    ctx->pc = 0x148B08u;
    SET_GPR_U32(ctx, 31, 0x148B10u);
    ctx->pc = 0x14C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6A0u, 0x148B08u, 0x148B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B10u;
label_148b10:
    // 0x148b10: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x148B10u;
    {
        const bool branch_taken_0x148b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b10) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148B18u;
label_148b18:
    // 0x148b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148b1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x148b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x148b20: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x148b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x148b24: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148B24u;
    {
        const bool branch_taken_0x148b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B24u;
        // 0x148b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b24) {
            ctx->pc = 0x148B54u;
            goto label_148b54;
        }
    }
    ctx->pc = 0x148B2Cu;
    // 0x148b2c: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x148b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x148b30: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x148b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x148b34: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148B34u;
    {
        const bool branch_taken_0x148b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B34u;
        // 0x148b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b34) {
            ctx->pc = 0x148B8Cu;
            goto label_148b8c;
        }
    }
    ctx->pc = 0x148B3Cu;
    // 0x148b3c: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x148b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x148b40: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x148b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x148b44: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x148B44u;
    {
        const bool branch_taken_0x148b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148b44) {
            ctx->pc = 0x148B88u;
            goto label_148b88;
        }
    }
    ctx->pc = 0x148B4Cu;
    // 0x148b4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148B4Cu;
    {
        const bool branch_taken_0x148b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B4Cu;
        // 0x148b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b4c) {
            ctx->pc = 0x148B88u;
            goto label_148b88;
        }
    }
    ctx->pc = 0x148B54u;
label_148b54:
    // 0x148b54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x148b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148b58: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x148b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148b5c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x148b5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148b60: 0x0  nop
    ctx->pc = 0x148b60u;
    // NOP
    // 0x148b64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x148B64u;
    {
        const bool branch_taken_0x148b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148b64) {
            ctx->pc = 0x148B88u;
            goto label_148b88;
        }
    }
    ctx->pc = 0x148B6Cu;
    // 0x148b6c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x148b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148b70: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x148b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148b74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x148b74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148b78: 0x0  nop
    ctx->pc = 0x148b78u;
    // NOP
    // 0x148b7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x148B7Cu;
    {
        const bool branch_taken_0x148b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148b7c) {
            ctx->pc = 0x148B88u;
            goto label_148b88;
        }
    }
    ctx->pc = 0x148B84u;
    // 0x148b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148b88:
    // 0x148b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148b8c:
    // 0x148b8c: 0xc0523a4  jal         func_148E90
    ctx->pc = 0x148B8Cu;
    SET_GPR_U32(ctx, 31, 0x148B94u);
    ctx->pc = 0x148E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E90u, 0x148B8Cu, 0x148B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B94u;
label_148b94:
    // 0x148b94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B94u;
    {
        const bool branch_taken_0x148b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B94u;
        // 0x148b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b94) {
            ctx->pc = 0x148BA4u;
            goto label_148ba4;
        }
    }
    ctx->pc = 0x148B9Cu;
    // 0x148b9c: 0xc0531a8  jal         func_14C6A0
    ctx->pc = 0x148B9Cu;
    SET_GPR_U32(ctx, 31, 0x148BA4u);
    ctx->pc = 0x14C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6A0u, 0x148B9Cu, 0x148BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BA4u;
label_148ba4:
    // 0x148ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x148ba8u;
}
