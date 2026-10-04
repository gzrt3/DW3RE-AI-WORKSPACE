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

// Function: FUN_002004c0
// Address: 0x2004c0 - 0x2007cc
void FUN_002004c0_0x2004c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002004c0_0x2004c0");
#endif

    switch (ctx->pc) {
        case 0x200530u: goto label_200530;
        case 0x200564u: goto label_200564;
        case 0x200768u: goto label_200768;
        default: break;
    }

    ctx->pc = 0x2004c0u;

    // 0x2004c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2004c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2004c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2004c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2004c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2004c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2004cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2004ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2004d0: 0xaf8290ec  sw          $v0, -0x6F14($gp)
    ctx->pc = 0x2004d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 2));
    // 0x2004d4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2004d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2004dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2004e0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2004e4: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x2004e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2004ec: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2004f0: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
    // 0x2004f4: 0x8ce63670  lw          $a2, 0x3670($a3)
    ctx->pc = 0x2004f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13936)));
    // 0x2004f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x2004fc: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x200500: 0x24f03620  addiu       $s0, $a3, 0x3620
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 13856));
    // 0x200504: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x200504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x200508: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20050c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200510: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x200514: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x200514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200518: 0xaf8390e4  sw          $v1, -0x6F1C($gp)
    ctx->pc = 0x200518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938852), GPR_U32(ctx, 3));
    // 0x20051c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200520: 0xaf8290e0  sw          $v0, -0x6F20($gp)
    ctx->pc = 0x200520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 2));
    // 0x200524: 0x90e2362e  lbu         $v0, 0x362E($a3)
    ctx->pc = 0x200524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13870)));
    // 0x200528: 0xc056fbc  jal         func_15BEF0
    ctx->pc = 0x200528u;
    SET_GPR_U32(ctx, 31, 0x200530u);
    ctx->pc = 0x20052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200528u;
    // 0x20052c: 0xaf8290dc  sw          $v0, -0x6F24($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BEF0u, 0x200528u, 0x200530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200530u;
label_200530:
    // 0x200530: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x200530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x200534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200538: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20053c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200540: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x200540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200548: 0xaf8290d8  sw          $v0, -0x6F28($gp)
    ctx->pc = 0x200548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938840), GPR_U32(ctx, 2));
    // 0x20054c: 0x240700ab  addiu       $a3, $zero, 0xAB
    ctx->pc = 0x20054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x200550: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x200554: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x200558: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20055c: 0xc08053c  jal         func_2014F0
    ctx->pc = 0x20055Cu;
    SET_GPR_U32(ctx, 31, 0x200564u);
    ctx->pc = 0x200560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20055Cu;
    // 0x200560: 0xaf8290d4  sw          $v0, -0x6F2C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2014F0u, 0x20055Cu, 0x200564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200564u;
label_200564:
    // 0x200564: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200568: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20056c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200570: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x200574: 0xac232760  sw          $v1, 0x2760($at)
    ctx->pc = 0x200574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552760u, _value); } while (0);
    // 0x200578: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20057c: 0x8c232760  lw          $v1, 0x2760($at)
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x552760u));
    // 0x200580: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x200580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x200584: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x200584u;
    {
        const bool branch_taken_0x200584 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x200584) {
            ctx->pc = 0x200590u;
            goto label_200590;
        }
    }
    ctx->pc = 0x20058Cu;
    // 0x20058c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_200590:
    // 0x200590: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200594: 0xac232760  sw          $v1, 0x2760($at)
    ctx->pc = 0x200594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552760u, _value); } while (0);
    // 0x200598: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20059c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2005a0: 0x8c272760  lw          $a3, 0x2760($at)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x552760u));
    // 0x2005a4: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x2005a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2005a8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2005ac: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2005b0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005b4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2005b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2005bc: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2005bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2005c0: 0x0  nop
    ctx->pc = 0x2005c0u;
    // NOP
    // 0x2005c4: 0x0  nop
    ctx->pc = 0x2005c4u;
    // NOP
    // 0x2005c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2005cc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2005d0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x2005d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2005d8: 0xac242760  sw          $a0, 0x2760($at)
    ctx->pc = 0x2005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 4));
    // 0x2005dc: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2005e0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2005e8: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x2005e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552764u, _value); } while (0);
    // 0x2005ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005f0: 0x8c232764  lw          $v1, 0x2764($at)
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x552764u));
    // 0x2005f4: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x2005f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x2005f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F8u;
        // 0x2005fc: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x200604u;
            goto label_200604;
        }
    }
    ctx->pc = 0x200600u;
    // 0x200600: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200604:
    // 0x200604: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200608: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x200608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552764u, _value); } while (0);
    // 0x20060c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200610: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x200610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x200614: 0x8c262764  lw          $a2, 0x2764($at)
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x552764u));
    // 0x200618: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x20061c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200620: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x200624: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200628: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20062c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20062cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x200630: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x200630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x200634: 0x0  nop
    ctx->pc = 0x200634u;
    // NOP
    // 0x200638: 0x0  nop
    ctx->pc = 0x200638u;
    // NOP
    // 0x20063c: 0x2010  mfhi        $a0
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200640: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x200640u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x200644: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x200648: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20064c: 0xac242764  sw          $a0, 0x2764($at)
    ctx->pc = 0x20064cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 4));
    // 0x200650: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x200650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200654: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200658: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20065c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20065cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552768u, _value); } while (0);
    // 0x200660: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200664: 0x8c232768  lw          $v1, 0x2768($at)
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x552768u));
    // 0x200668: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x20066c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20066Cu;
    {
        const bool branch_taken_0x20066c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20066c) {
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x200674u;
    // 0x200674: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_200678:
    // 0x200678: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20067c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20067cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552768u, _value); } while (0);
    // 0x200680: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200684: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x200688: 0x8c272768  lw          $a3, 0x2768($at)
    ctx->pc = 0x200688u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x552768u));
    // 0x20068c: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x20068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x200690: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x200694: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200698: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20069c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2006a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2006a4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2006a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2006a8: 0x0  nop
    ctx->pc = 0x2006a8u;
    // NOP
    // 0x2006ac: 0x0  nop
    ctx->pc = 0x2006acu;
    // NOP
    // 0x2006b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2006b4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2006b8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2006bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2006c0: 0xac242768  sw          $a0, 0x2768($at)
    ctx->pc = 0x2006c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 4));
    // 0x2006c4: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x2006c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2006c8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2006d0: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x55276Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x55276Cu, _value); } while (0);
    // 0x2006d4: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006d8: 0x8c23276c  lw          $v1, 0x276C($at)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x55276Cu));
    // 0x2006dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x2006e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2006E0u;
    {
        const bool branch_taken_0x2006e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E0u;
        // 0x2006e4: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006e0) {
            ctx->pc = 0x2006ECu;
            goto label_2006ec;
        }
    }
    ctx->pc = 0x2006E8u;
    // 0x2006e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2006ec:
    // 0x2006ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2006f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006f4: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x55276Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x55276Cu, _value); } while (0);
    // 0x2006f8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006fc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x200700: 0x8c27276c  lw          $a3, 0x276C($at)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x55276Cu));
    // 0x200704: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x200704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x200708: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20070c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200710: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200714: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x200714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x200718: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20071c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x20071cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x200720: 0x0  nop
    ctx->pc = 0x200720u;
    // NOP
    // 0x200724: 0x0  nop
    ctx->pc = 0x200724u;
    // NOP
    // 0x200728: 0x2810  mfhi        $a1
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x20072c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x200730: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x200734: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x200738: 0xac25276c  sw          $a1, 0x276C($at)
    ctx->pc = 0x200738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 5));
    // 0x20073c: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x20073cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x200740: 0xaf8590d0  sw          $a1, -0x6F30($gp)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 5));
    // 0x200744: 0xaf8090cc  sw          $zero, -0x6F34($gp)
    ctx->pc = 0x200744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 0));
    // 0x200748: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
    // 0x20074c: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x200750: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x200754: 0x25292740  addiu       $t1, $t1, 0x2740
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10048));
    // 0x200758: 0x2508a230  addiu       $t0, $t0, -0x5DD0
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943280));
    // 0x20075c: 0x24c62720  addiu       $a2, $a2, 0x2720
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10016));
    // 0x200760: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x200764: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_200768:
    // 0x200768: 0x90a7005e  lbu         $a3, 0x5E($a1)
    ctx->pc = 0x200768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x20076c: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x20076Cu;
    {
        const bool branch_taken_0x20076c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20076c) {
            ctx->pc = 0x2007A0u;
            goto label_2007a0;
        }
    }
    ctx->pc = 0x200774u;
    // 0x200774: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x200778: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x20077c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200780: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x200784: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200788: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x20078c: 0x90e70008  lbu         $a3, 0x8($a3)
    ctx->pc = 0x20078cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200790: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x200790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x200794: 0x8f8590cc  lw          $a1, -0x6F34($gp)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938828)));
    // 0x200798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20079c: 0xaf8590cc  sw          $a1, -0x6F34($gp)
    ctx->pc = 0x20079cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 5));
label_2007a0:
    // 0x2007a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2007a4: 0x28650005  slti        $a1, $v1, 0x5
    ctx->pc = 0x2007a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2007a8: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2007A8u;
    {
        const bool branch_taken_0x2007a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a8) {
            ctx->pc = 0x200768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200768;
        }
    }
    ctx->pc = 0x2007B0u;
    // 0x2007b0: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x2007b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x2007b4: 0xaf8390c8  sw          $v1, -0x6F38($gp)
    ctx->pc = 0x2007b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 3));
    // 0x2007b8: 0x92030069  lbu         $v1, 0x69($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x2007bc: 0xaf8390c4  sw          $v1, -0x6F3C($gp)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 3));
    // 0x2007c0: 0x9203006b  lbu         $v1, 0x6B($s0)
    ctx->pc = 0x2007c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x2007c4: 0xaf8390c0  sw          $v1, -0x6F40($gp)
    ctx->pc = 0x2007c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938816), GPR_U32(ctx, 3));
    // 0x2007c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2007ccu;
}
