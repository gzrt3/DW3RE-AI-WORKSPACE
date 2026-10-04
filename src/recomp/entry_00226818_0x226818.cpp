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

// Function: entry_00226818
// Address: 0x226818 - 0x226a20
void entry_00226818_0x226818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226818_0x226818");
#endif

    switch (ctx->pc) {
        case 0x226824u: goto label_226824;
        default: break;
    }

    ctx->pc = 0x226818u;

    // 0x226818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22681c: 0xc05d970  jal         func_1765C0
    ctx->pc = 0x22681Cu;
    SET_GPR_U32(ctx, 31, 0x226824u);
    ctx->pc = 0x226820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22681Cu;
    // 0x226820: 0x24a55090  addiu       $a1, $a1, 0x5090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x22681Cu, 0x226824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226824u;
label_226824:
    // 0x226824: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22682c: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x22682cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3651EDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3651EDu, _value); } while (0);
    // 0x226830: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226834: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x226834u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x365092u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x365092u, _value); } while (0);
    // 0x226838: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22683c: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x22683cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x365090u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x365090u, _value); } while (0);
    // 0x226840: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226844: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x226844u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x365096u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x365096u, _value); } while (0);
    // 0x226848: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22684c: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x22684cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x365094u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x365094u, _value); } while (0);
    // 0x226850: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226854: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x226854u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36509Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x36509Au, _value); } while (0);
    // 0x226858: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22685c: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x22685cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x365098u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x365098u, _value); } while (0);
    // 0x226860: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226864: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x226864u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36509Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x36509Eu, _value); } while (0);
    // 0x226868: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22686c: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x22686cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36509Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x36509Cu, _value); } while (0);
    // 0x226870: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226874: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x226874u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650A2u, _value); } while (0);
    // 0x226878: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22687c: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x22687cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650A0u, _value); } while (0);
    // 0x226880: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226884: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x226884u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650A6u, _value); } while (0);
    // 0x226888: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22688c: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x22688cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650A4u, _value); } while (0);
    // 0x226890: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226894: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x226894u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650AAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650AAu, _value); } while (0);
    // 0x226898: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22689c: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x22689cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650A8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650A8u, _value); } while (0);
    // 0x2268a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2268a4: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x2268a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650AEu, _value); } while (0);
    // 0x2268a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2268ac: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x2268acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3650ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3650ACu, _value); } while (0);
    // 0x2268b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2268b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2268b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2268B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268B4u;
        // 0x2268b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2268BCu;
    // 0x2268bc: 0x0  nop
    ctx->pc = 0x2268bcu;
    // NOP
    // 0x2268c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2268c4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2268c8: 0x802651ed  lb          $a2, 0x51ED($at)
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x3651EDu));
    // 0x2268cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2268d0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2268d4: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x2268d8: 0x24635092  addiu       $v1, $v1, 0x5092
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20626));
    // 0x2268dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2268dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2268e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2268e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2268e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2268ec: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x2268ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2268f0: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2268f4: 0x802451ed  lb          $a0, 0x51ED($at)
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x3651EDu));
    // 0x2268f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2268fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x226904: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x226904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x226908: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3651EDu));
    // 0x22690c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x226910: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226914: 0x3e00008  jr          $ra
    ctx->pc = 0x226914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226914u;
        // 0x226918: 0xa02351ed  sb          $v1, 0x51ED($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22691Cu;
    // 0x22691c: 0x0  nop
    ctx->pc = 0x22691cu;
    // NOP
    // 0x226920: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226924: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x226924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226928: 0x802651ed  lb          $a2, 0x51ED($at)
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x3651EDu));
    // 0x22692c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226930: 0x3c0a002f  lui         $t2, 0x2F
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)47 << 16));
    // 0x226934: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x226934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x226938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22693c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x226940: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x226944: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x226944u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226948: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x226948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x22694c: 0x254a2574  addiu       $t2, $t2, 0x2574
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9588));
    // 0x226950: 0xb4200  sll         $t0, $t3, 8
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x226954: 0x24635092  addiu       $v1, $v1, 0x5092
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20626));
    // 0x226958: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22695c: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x22695cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x226960: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x226964: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226968: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x22696c: 0x24e72578  addiu       $a3, $a3, 0x2578
    ctx->pc = 0x22696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9592));
    // 0x226970: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x226970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x226974: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x226974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x226978: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22697c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x226980: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x226984: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x226984u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x226988: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x226988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x22698c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22698cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226990: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x226994: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x226994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226998: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226998u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x22699c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22699cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2269a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2269a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2269a4: 0x0  nop
    ctx->pc = 0x2269a4u;
    // NOP
    // 0x2269a8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x2269a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2269ac: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2269acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2269b0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2269b4: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2269b8: 0x802451ed  lb          $a0, 0x51ED($at)
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
    // 0x2269bc: 0xa84023  subu        $t0, $a1, $t0
    ctx->pc = 0x2269bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2269c0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2269c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2269c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2269cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2269d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2269d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2269d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2269d8: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2269dc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2269dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2269e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2269e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2269e4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2269e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2269e8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x2269ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2269ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2269f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2269f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2269f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2269f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2269f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2269f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2269fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2269fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x226a00: 0x0  nop
    ctx->pc = 0x226a00u;
    // NOP
    // 0x226a04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x226a04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x226a08: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
    // 0x226a0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x226a10: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226a14: 0x3e00008  jr          $ra
    ctx->pc = 0x226A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A14u;
        // 0x226a18: 0xa02351ed  sb          $v1, 0x51ED($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A1Cu;
    // 0x226a1c: 0x0  nop
    ctx->pc = 0x226a1cu;
    // NOP
    ctx->pc = 0x226a20u;
}
