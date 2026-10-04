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

// Function: FUN_001f8080
// Address: 0x1f8080 - 0x1f81cc
void FUN_001f8080_0x1f8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8080_0x1f8080");
#endif

    switch (ctx->pc) {
        case 0x1f809cu: goto label_1f809c;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81c8u: goto label_1f81c8;
        default: break;
    }

    ctx->pc = 0x1f8080u;

    // 0x1f8080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f808c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8094: 0xc0590dc  jal         func_164370
    ctx->pc = 0x1F8094u;
    SET_GPR_U32(ctx, 31, 0x1F809Cu);
    ctx->pc = 0x1F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8094u;
    // 0x1f8098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8094u, 0x1F809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F809Cu;
label_1f809c:
    // 0x1f809c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F809Cu;
    {
        const bool branch_taken_0x1f809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F809Cu;
        // 0x1f80a0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f809c) {
            ctx->pc = 0x1F81C8u;
            goto label_1f81c8;
        }
    }
    ctx->pc = 0x1F80A4u;
    // 0x1f80a4: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x1f80a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f80a8: 0x246381e0  addiu       $v1, $v1, -0x7E20
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935008));
    // 0x1f80ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f80b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1f80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1f80b4: 0x115880  sll         $t3, $s1, 2
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f80b8: 0x90460010  lbu         $a2, 0x10($v0)
    ctx->pc = 0x1f80b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f80bc: 0x27838238  addiu       $v1, $gp, -0x7DC8
    ctx->pc = 0x1f80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
    // 0x1f80c0: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
    // 0x1f80c4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f80c8: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f80cc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1f80d0: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1f80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
    // 0x1f80d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f80d8: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f80dc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1f80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1f80e0: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
    // 0x1f80e4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1f80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1f80e8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f80ec: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
    // 0x1f80f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1f80f4: 0x4b3821  addu        $a3, $v0, $t3
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f80f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f80f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f80fc: 0x27828260  addiu       $v0, $gp, -0x7DA0
    ctx->pc = 0x1f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
    // 0x1f8100: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f8100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1f8104: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f8108: 0x27828268  addiu       $v0, $gp, -0x7D98
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
    // 0x1f810c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f810cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1f8110: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f8114: 0x27828270  addiu       $v0, $gp, -0x7D90
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
    // 0x1f8118: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f8118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f811c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f8120: 0xc0552d8  jal         func_154B60
    ctx->pc = 0x1F8120u;
    SET_GPR_U32(ctx, 31, 0x1F8128u);
    ctx->pc = 0x1F8124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8120u;
    // 0x1f8124: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8120u, 0x1F8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8128u;
label_1f8128:
    // 0x1f8128: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F8128u;
    {
        const bool branch_taken_0x1f8128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8128) {
            ctx->pc = 0x1F81ACu;
            goto label_1f81ac;
        }
    }
    ctx->pc = 0x1F8130u;
    // 0x1f8130: 0xc0590dc  jal         func_164370
    ctx->pc = 0x1F8130u;
    SET_GPR_U32(ctx, 31, 0x1F8138u);
    ctx->pc = 0x1F8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8130u;
    // 0x1f8134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8130u, 0x1F8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8138u;
label_1f8138:
    // 0x1f8138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f813c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F813Cu;
    {
        const bool branch_taken_0x1f813c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f813c) {
            ctx->pc = 0x1F81A8u;
            goto label_1f81a8;
        }
    }
    ctx->pc = 0x1F8144u;
    // 0x1f8144: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x1f8148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f814c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1f8150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8154: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1f8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1f8158: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f815c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1f8160: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1f8160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x1f8164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f816c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f8170: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1f8174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f8174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f8178: 0xc0718c4  jal         func_1C6310
    ctx->pc = 0x1F8178u;
    SET_GPR_U32(ctx, 31, 0x1F8180u);
    ctx->pc = 0x1F817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8178u;
    // 0x1f817c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6310u, 0x1F8178u, 0x1F8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8180u;
label_1f8180:
    // 0x1f8180: 0xa20002e1  sb          $zero, 0x2E1($s0)
    ctx->pc = 0x1f8180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8188: 0xa20202e4  sb          $v0, 0x2E4($s0)
    ctx->pc = 0x1f8188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f818c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1f8190: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1f8194: 0x2463ca30  addiu       $v1, $v1, -0x35D0
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953520));
    // 0x1f8198: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1f8198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x1f819c: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
    // 0x1f81a0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1f81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x1f81a4: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x1f81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_1f81a8:
    // 0x1f81a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f81ac:
    // 0x1f81ac: 0xc04f198  jal         func_13C660
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x1F81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81ACu;
    // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81b8: 0xc04f198  jal         func_13C660
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x1F81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81B8u;
    // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81B8u, 0x1F81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0xc04f208  jal         func_13C820
    ctx->pc = 0x1F81C0u;
    SET_GPR_U32(ctx, 31, 0x1F81C8u);
    ctx->pc = 0x1F81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81C0u;
    // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x1F81C0u, 0x1F81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C8u;
label_1f81c8:
    // 0x1f81c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1f81ccu;
}
