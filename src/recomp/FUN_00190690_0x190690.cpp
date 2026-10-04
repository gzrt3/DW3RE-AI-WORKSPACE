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

// Function: FUN_00190690
// Address: 0x190690 - 0x190828
void FUN_00190690_0x190690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190690_0x190690");
#endif

    switch (ctx->pc) {
        case 0x19070cu: goto label_19070c;
        case 0x190718u: goto label_190718;
        case 0x190724u: goto label_190724;
        case 0x190730u: goto label_190730;
        case 0x19073cu: goto label_19073c;
        case 0x190748u: goto label_190748;
        case 0x190754u: goto label_190754;
        case 0x190760u: goto label_190760;
        case 0x19076cu: goto label_19076c;
        default: break;
    }

    ctx->pc = 0x190690u;

    // 0x190690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190694: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x190698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19069c: 0x278381e8  addiu       $v1, $gp, -0x7E18
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
    // 0x1906a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1906a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1906a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1906a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1906a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1906ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1906b0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1906B0u;
    {
        const bool branch_taken_0x1906b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906b0) {
            ctx->pc = 0x190824u;
            goto label_190824;
        }
    }
    ctx->pc = 0x1906B8u;
    // 0x1906b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1906bc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1906c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1906c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1906c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1906c8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1906cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1906d0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1906d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1906d8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1906d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1906dc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1906e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1906e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906e8: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x1906ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1906f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1906f4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1906f8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1906fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x190700: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190704: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190704u;
    SET_GPR_U32(ctx, 31, 0x19070Cu);
    ctx->pc = 0x190708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190704u;
    // 0x190708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190704u, 0x19070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19070Cu;
label_19070c:
    // 0x19070c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190710: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 31, 0x190718u);
    ctx->pc = 0x190714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190710u;
    // 0x190714: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190710u, 0x190718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190718u;
label_190718:
    // 0x190718: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19071c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x19071Cu;
    SET_GPR_U32(ctx, 31, 0x190724u);
    ctx->pc = 0x190720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19071Cu;
    // 0x190720: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x19071Cu, 0x190724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190724u;
label_190724:
    // 0x190724: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190728: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190728u;
    SET_GPR_U32(ctx, 31, 0x190730u);
    ctx->pc = 0x19072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190728u;
    // 0x19072c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190728u, 0x190730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x190734: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190734u;
    SET_GPR_U32(ctx, 31, 0x19073Cu);
    ctx->pc = 0x190738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190734u;
    // 0x190738: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190734u, 0x19073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19073Cu;
label_19073c:
    // 0x19073c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x190740: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190740u;
    SET_GPR_U32(ctx, 31, 0x190748u);
    ctx->pc = 0x190744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190740u;
    // 0x190744: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190740u, 0x190748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190748u;
label_190748:
    // 0x190748: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x19074c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x19074Cu;
    SET_GPR_U32(ctx, 31, 0x190754u);
    ctx->pc = 0x190750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19074Cu;
    // 0x190750: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x19074Cu, 0x190754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190754u;
label_190754:
    // 0x190754: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x190758: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190758u;
    SET_GPR_U32(ctx, 31, 0x190760u);
    ctx->pc = 0x19075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190758u;
    // 0x19075c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190758u, 0x190760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190760u;
label_190760:
    // 0x190760: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x190764: 0xc066e26  jal         func_19B898
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 31, 0x19076Cu);
    ctx->pc = 0x190768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190764u;
    // 0x190768: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x190764u, 0x19076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x19076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190770: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x190770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x190774: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x190774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190778: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x190778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x19077c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x19077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190780: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x190780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x190784: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x190784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190788: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x190788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x19078c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x190790: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x190790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x190794: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x190798: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x190798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x19079c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x19079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x1907a0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x1907a4: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x1907a8: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1907a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1907ac: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1907b0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1907b4: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x1907b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907b8: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1907b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1907bc: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x1907bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907c0: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x1907c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x1907c4: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x1907c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907c8: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1907c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1907cc: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x1907ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907d0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1907d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1907d4: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x1907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907d8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1907d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1907dc: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x1907dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907e0: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1907e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1907e4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1907e8: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x1907ec: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1907ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1907f0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1907f4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1907f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1907f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1907fc: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1907fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x190800: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x190804: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x190804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x190808: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x190808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x19080c: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x19080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x190810: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x190810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x190814: 0x962300e4  lhu         $v1, 0xE4($s1)
    ctx->pc = 0x190814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x190818: 0xa60300e4  sh          $v1, 0xE4($s0)
    ctx->pc = 0x190818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 3));
    // 0x19081c: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x19081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x190820: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_190824:
    // 0x190824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x190828u;
}
