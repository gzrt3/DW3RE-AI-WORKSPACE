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

// Function: FUN_00167830
// Address: 0x167830 - 0x16799c
void FUN_00167830_0x167830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167830_0x167830");
#endif

    switch (ctx->pc) {
        case 0x167848u: goto label_167848;
        case 0x1678ecu: goto label_1678ec;
        case 0x167914u: goto label_167914;
        case 0x16795cu: goto label_16795c;
        case 0x167984u: goto label_167984;
        default: break;
    }

    ctx->pc = 0x167830u;

    // 0x167830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16783c: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x167840: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x167840u;
    {
        const bool branch_taken_0x167840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167840) {
            ctx->pc = 0x167994u;
            goto label_167994;
        }
    }
    ctx->pc = 0x167848u;
label_167848:
    // 0x167848: 0x9205004c  lbu         $a1, 0x4C($s0)
    ctx->pc = 0x167848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16784c: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x167850: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x167850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x167854: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x167854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x167858: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16785c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x16785Cu;
    {
        const bool branch_taken_0x16785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16785c) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167864u;
    // 0x167864: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167868: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x16786c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16786Cu;
    {
        const bool branch_taken_0x16786c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16786Cu;
        // 0x167870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16786c) {
            ctx->pc = 0x16787Cu;
            goto label_16787c;
        }
    }
    ctx->pc = 0x167874u;
    // 0x167874: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x167874u;
    {
        const bool branch_taken_0x167874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x167874) {
            ctx->pc = 0x1678ACu;
            goto label_1678ac;
        }
    }
    ctx->pc = 0x16787Cu;
label_16787c:
    // 0x16787c: 0x0  nop
    ctx->pc = 0x16787cu;
    // NOP
    // 0x167880: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167884: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167884u;
    {
        const bool branch_taken_0x167884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167884u;
        // 0x167888: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167884) {
            ctx->pc = 0x167894u;
            goto label_167894;
        }
    }
    ctx->pc = 0x16788Cu;
    // 0x16788c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16788Cu;
    {
        const bool branch_taken_0x16788c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16788c) {
            ctx->pc = 0x1678ACu;
            goto label_1678ac;
        }
    }
    ctx->pc = 0x167894u;
label_167894:
    // 0x167894: 0x0  nop
    ctx->pc = 0x167894u;
    // NOP
    // 0x167898: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x167898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x16789c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16789Cu;
    {
        const bool branch_taken_0x16789c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16789c) {
            ctx->pc = 0x16791Cu;
            goto label_16791c;
        }
    }
    ctx->pc = 0x1678A4u;
    // 0x1678a4: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1678A4u;
    {
        const bool branch_taken_0x1678a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1678a4) {
            ctx->pc = 0x16791Cu;
            goto label_16791c;
        }
    }
    ctx->pc = 0x1678ACu;
label_1678ac:
    // 0x1678ac: 0x0  nop
    ctx->pc = 0x1678acu;
    // NOP
    // 0x1678b0: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x1678b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1678b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1678b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1678b8: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1678B8u;
    {
        const bool branch_taken_0x1678b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1678b8) {
            ctx->pc = 0x1678F4u;
            goto label_1678f4;
        }
    }
    ctx->pc = 0x1678C0u;
    // 0x1678c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1678C0u;
    {
        const bool branch_taken_0x1678c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c0) {
            ctx->pc = 0x1678D0u;
            goto label_1678d0;
        }
    }
    ctx->pc = 0x1678C8u;
    // 0x1678c8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1678C8u;
    {
        const bool branch_taken_0x1678c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c8) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x1678D0u;
label_1678d0:
    // 0x1678d0: 0x3c02bc0d  lui         $v0, 0xBC0D
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48141 << 16));
    // 0x1678d4: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
    // 0x1678d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1678d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1678dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1678e0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1678e4: 0xc059b50  jal         func_166D40
    ctx->pc = 0x1678E4u;
    SET_GPR_U32(ctx, 31, 0x1678ECu);
    ctx->pc = 0x1678E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678E4u;
    // 0x1678e8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x1678E4u, 0x1678ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1678ECu;
    {
        const bool branch_taken_0x1678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678ec) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x1678F4u;
label_1678f4:
    // 0x1678f4: 0x0  nop
    ctx->pc = 0x1678f4u;
    // NOP
    // 0x1678f8: 0x3c023c0d  lui         $v0, 0x3C0D
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15373 << 16));
    // 0x1678fc: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
    // 0x167900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167908: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16790c: 0xc059b50  jal         func_166D40
    ctx->pc = 0x16790Cu;
    SET_GPR_U32(ctx, 31, 0x167914u);
    ctx->pc = 0x167910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16790Cu;
    // 0x167910: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x16790Cu, 0x167914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167914u;
label_167914:
    // 0x167914: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x167914u;
    {
        const bool branch_taken_0x167914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167914u;
        // 0x167918: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167914) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x16791Cu;
label_16791c:
    // 0x16791c: 0x0  nop
    ctx->pc = 0x16791cu;
    // NOP
    // 0x167920: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x167924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167928: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x167928u;
    {
        const bool branch_taken_0x167928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x167928) {
            ctx->pc = 0x167964u;
            goto label_167964;
        }
    }
    ctx->pc = 0x167930u;
    // 0x167930: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167940u;
            goto label_167940;
        }
    }
    ctx->pc = 0x167938u;
    // 0x167938: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167938) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167940u;
label_167940:
    // 0x167940: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x167944: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16794c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16794cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167950: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x167954: 0xc059b50  jal         func_166D40
    ctx->pc = 0x167954u;
    SET_GPR_U32(ctx, 31, 0x16795Cu);
    ctx->pc = 0x167958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167954u;
    // 0x167958: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x167954u, 0x16795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16795Cu;
label_16795c:
    // 0x16795c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16795Cu;
    {
        const bool branch_taken_0x16795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16795c) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167964u;
label_167964:
    // 0x167964: 0x0  nop
    ctx->pc = 0x167964u;
    // NOP
    // 0x167968: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x167968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
    // 0x16796c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167978: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16797c: 0xc059b50  jal         func_166D40
    ctx->pc = 0x16797Cu;
    SET_GPR_U32(ctx, 31, 0x167984u);
    ctx->pc = 0x167980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16797Cu;
    // 0x167980: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x16797Cu, 0x167984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167984u;
label_167984:
    // 0x167984: 0x0  nop
    ctx->pc = 0x167984u;
    // NOP
    // 0x167988: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16798c: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x16798Cu;
    {
        const bool branch_taken_0x16798c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16798c) {
            ctx->pc = 0x167848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167848;
        }
    }
    ctx->pc = 0x167994u;
label_167994:
    // 0x167994: 0x0  nop
    ctx->pc = 0x167994u;
    // NOP
    // 0x167998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16799cu;
}
