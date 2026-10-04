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

// Function: FUN_00136480
// Address: 0x136480 - 0x1367b8
void FUN_00136480_0x136480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136480_0x136480");
#endif

    switch (ctx->pc) {
        case 0x136570u: goto label_136570;
        case 0x136614u: goto label_136614;
        case 0x136638u: goto label_136638;
        case 0x136640u: goto label_136640;
        case 0x13666cu: goto label_13666c;
        case 0x136690u: goto label_136690;
        case 0x136700u: goto label_136700;
        case 0x136714u: goto label_136714;
        case 0x136738u: goto label_136738;
        case 0x136764u: goto label_136764;
        case 0x136798u: goto label_136798;
        default: break;
    }

    ctx->pc = 0x136480u;

    // 0x136480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136484: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x136488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13648c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136494: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x136494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x136498: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136498u;
    {
        const bool branch_taken_0x136498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136498) {
            ctx->pc = 0x1364ACu;
            goto label_1364ac;
        }
    }
    ctx->pc = 0x1364A0u;
    // 0x1364a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1364a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1364a4: 0x148300c3  bne         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1364A4u;
    {
        const bool branch_taken_0x1364a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1364a4) {
            ctx->pc = 0x1367B4u;
            goto label_1367b4;
        }
    }
    ctx->pc = 0x1364ACu;
label_1364ac:
    // 0x1364ac: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364b0: 0xa420a3e4  sh          $zero, -0x5C1C($at)
    ctx->pc = 0x1364b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E4u, _value); } while (0);
    // 0x1364b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364b8: 0xa420a3e8  sh          $zero, -0x5C18($at)
    ctx->pc = 0x1364b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E8u, _value); } while (0);
    // 0x1364bc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364c0: 0xa020a3ea  sb          $zero, -0x5C16($at)
    ctx->pc = 0x1364c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x1364c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1364c8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1364c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1364cc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1364CCu;
    {
        const bool branch_taken_0x1364cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364cc) {
            ctx->pc = 0x13650Cu;
            goto label_13650c;
        }
    }
    ctx->pc = 0x1364D4u;
    // 0x1364d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364d8: 0x8c24a414  lw          $a0, -0x5BEC($at)
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A414u));
    // 0x1364dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1364dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1364e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1364e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1364e4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1364E4u;
    {
        const bool branch_taken_0x1364e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364e4) {
            ctx->pc = 0x136504u;
            goto label_136504;
        }
    }
    ctx->pc = 0x1364ECu;
    // 0x1364ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1364f0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1364f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1364f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1364F8u;
    {
        const bool branch_taken_0x1364f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364F8u;
        // 0x1364fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364f8) {
            ctx->pc = 0x136540u;
            goto label_136540;
        }
    }
    ctx->pc = 0x136500u;
    // 0x136500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136504:
    // 0x136504: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136504u;
    {
        const bool branch_taken_0x136504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136504) {
            ctx->pc = 0x136540u;
            goto label_136540;
        }
    }
    ctx->pc = 0x13650Cu;
label_13650c:
    // 0x13650c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136510: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x136514: 0x8c24a424  lw          $a0, -0x5BDC($at)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A424u));
    // 0x136518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x136518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13651c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13651cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136520: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x136520u;
    {
        const bool branch_taken_0x136520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136520u;
        // 0x136524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136520) {
            ctx->pc = 0x136540u;
            goto label_136540;
        }
    }
    ctx->pc = 0x136528u;
    // 0x136528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13652c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x13652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x136530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136534u;
    {
        const bool branch_taken_0x136534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136534u;
        // 0x136538: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136534) {
            ctx->pc = 0x136540u;
            goto label_136540;
        }
    }
    ctx->pc = 0x13653Cu;
    // 0x13653c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13653cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136540:
    // 0x136540: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136544: 0xac22a3cc  sw          $v0, -0x5C34($at)
    ctx->pc = 0x136544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3CCu, _value); } while (0);
    // 0x136548: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13654c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136550: 0xac20a3d0  sw          $zero, -0x5C30($at)
    ctx->pc = 0x136550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3D0u, _value); } while (0);
    // 0x136554: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136558: 0x9023a400  lbu         $v1, -0x5C00($at)
    ctx->pc = 0x136558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A400u));
    // 0x13655c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13655Cu;
    {
        const bool branch_taken_0x13655c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13655c) {
            ctx->pc = 0x136570u;
            goto label_136570;
        }
    }
    ctx->pc = 0x136564u;
    // 0x136564: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136568: 0xc04cfc4  jal         func_133F10
    ctx->pc = 0x136568u;
    SET_GPR_U32(ctx, 31, 0x136570u);
    ctx->pc = 0x13656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136568u;
    // 0x13656c: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F10u, 0x136568u, 0x136570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136570u;
label_136570:
    // 0x136570: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x136574: 0x8c22c998  lw          $v0, -0x3668($at)
    ctx->pc = 0x136574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C998u));
    // 0x136578: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x136578u;
    {
        const bool branch_taken_0x136578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136578) {
            ctx->pc = 0x1366B0u;
            goto label_1366b0;
        }
    }
    ctx->pc = 0x136580u;
    // 0x136580: 0x8f86863c  lw          $a2, -0x79C4($gp)
    ctx->pc = 0x136580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x136584: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x136584u;
    {
        const bool branch_taken_0x136584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x136584) {
            ctx->pc = 0x1365C8u;
            goto label_1365c8;
        }
    }
    ctx->pc = 0x13658Cu;
    // 0x13658c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136590: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x136590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x136594: 0x9025a400  lbu         $a1, -0x5C00($at)
    ctx->pc = 0x136594u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A400u));
    // 0x136598: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x136598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x13659c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365a4: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1365a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1365a8: 0x9023a402  lbu         $v1, -0x5BFE($at)
    ctx->pc = 0x1365a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A402u));
    // 0x1365ac: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1365acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1365b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1365b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1365b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1365b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1365b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1365bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1365bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1365c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1365C0u;
    {
        const bool branch_taken_0x1365c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1365c0) {
            ctx->pc = 0x13660Cu;
            goto label_13660c;
        }
    }
    ctx->pc = 0x1365C8u;
label_1365c8:
    // 0x1365c8: 0x14c00039  bnez        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x1365C8u;
    {
        const bool branch_taken_0x1365c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1365c8) {
            ctx->pc = 0x1366B0u;
            goto label_1366b0;
        }
    }
    ctx->pc = 0x1365D0u;
    // 0x1365d0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1365d8: 0x9025a400  lbu         $a1, -0x5C00($at)
    ctx->pc = 0x1365d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A400u));
    // 0x1365dc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1365dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1365e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1365e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365e8: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1365e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1365ec: 0x9023a402  lbu         $v1, -0x5BFE($at)
    ctx->pc = 0x1365ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A402u));
    // 0x1365f0: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1365f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1365f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1365f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1365f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1365fc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1365fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136600: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x136604: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x136604u;
    {
        const bool branch_taken_0x136604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136604) {
            ctx->pc = 0x1366B0u;
            goto label_1366b0;
        }
    }
    ctx->pc = 0x13660Cu;
label_13660c:
    // 0x13660c: 0xc04d51c  jal         func_135470
    ctx->pc = 0x13660Cu;
    SET_GPR_U32(ctx, 31, 0x136614u);
    ctx->pc = 0x135470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135470u, 0x13660Cu, 0x136614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136614u;
label_136614:
    // 0x136614: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x136618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13661c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13661cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136620: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136624: 0xa022a3ea  sb          $v0, -0x5C16($at)
    ctx->pc = 0x136624u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x136628: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x136628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13662c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136630: 0xc04d238  jal         func_1348E0
    ctx->pc = 0x136630u;
    SET_GPR_U32(ctx, 31, 0x136638u);
    ctx->pc = 0x136634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136630u;
    // 0x136634: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E0u, 0x136630u, 0x136638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136638u;
label_136638:
    // 0x136638: 0xc04d44c  jal         func_135130
    ctx->pc = 0x136638u;
    SET_GPR_U32(ctx, 31, 0x136640u);
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x136638u, 0x136640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136640u;
label_136640:
    // 0x136640: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136644: 0x90239fc0  lbu         $v1, -0x6040($at)
    ctx->pc = 0x136644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x136648: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13664c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136650: 0xa0239fc0  sb          $v1, -0x6040($at)
    ctx->pc = 0x136650u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x309FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x309FC0u, _value); } while (0);
    // 0x136654: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136658: 0x90239fc0  lbu         $v1, -0x6040($at)
    ctx->pc = 0x136658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x309FC0u));
    // 0x13665c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13665Cu;
    {
        const bool branch_taken_0x13665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13665c) {
            ctx->pc = 0x13666Cu;
            goto label_13666c;
        }
    }
    ctx->pc = 0x136664u;
    // 0x136664: 0xc04d8b8  jal         func_1362E0
    ctx->pc = 0x136664u;
    SET_GPR_U32(ctx, 31, 0x13666Cu);
    ctx->pc = 0x1362E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362E0u, 0x136664u, 0x13666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13666Cu;
label_13666c:
    // 0x13666c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x136670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136674: 0x9024a400  lbu         $a0, -0x5C00($at)
    ctx->pc = 0x136674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A400u));
    // 0x136678: 0x1483004e  bne         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136678u;
    {
        const bool branch_taken_0x136678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136678) {
            ctx->pc = 0x1367B4u;
            goto label_1367b4;
        }
    }
    ctx->pc = 0x136680u;
    // 0x136680: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x136680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x136684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136688: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136688u;
    SET_GPR_U32(ctx, 31, 0x136690u);
    ctx->pc = 0x13668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136688u;
    // 0x13668c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136688u, 0x136690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136690u;
label_136690:
    // 0x136690: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x136690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136694: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x136694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x136698: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x136698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x13669c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x13669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366a0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1366a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1366a4: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x1366a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x1366a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1366A8u;
    {
        const bool branch_taken_0x1366a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366A8u;
        // 0x1366ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366a8) {
            ctx->pc = 0x1367B8u;
            return;
        }
    }
    ctx->pc = 0x1366B0u;
label_1366b0:
    // 0x1366b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1366b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1366b8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1366B8u;
    {
        const bool branch_taken_0x1366b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1366b8) {
            ctx->pc = 0x13677Cu;
            goto label_13677c;
        }
    }
    ctx->pc = 0x1366C0u;
    // 0x1366c0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366c4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1366c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1366c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1366C8u;
    {
        const bool branch_taken_0x1366c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1366c8) {
            ctx->pc = 0x1366DCu;
            goto label_1366dc;
        }
    }
    ctx->pc = 0x1366D0u;
    // 0x1366d0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1366d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1366d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1366d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1366d8: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x1366d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
label_1366dc:
    // 0x1366dc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1366e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1366e8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1366ec: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1366ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1366f0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1366f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1366f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1366f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1366f8: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x1366F8u;
    SET_GPR_U32(ctx, 31, 0x136700u);
    ctx->pc = 0x1366FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366F8u;
    // 0x1366fc: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1366F8u, 0x136700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136700u;
label_136700:
    // 0x136700: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136704: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x136708: 0x8c24a3cc  lw          $a0, -0x5C34($at)
    ctx->pc = 0x136708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x13670c: 0xc04d00c  jal         func_134030
    ctx->pc = 0x13670Cu;
    SET_GPR_U32(ctx, 31, 0x136714u);
    ctx->pc = 0x136710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13670Cu;
    // 0x136710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134030u, 0x13670Cu, 0x136714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136714u;
label_136714:
    // 0x136714: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x136714u;
    {
        const bool branch_taken_0x136714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136714) {
            ctx->pc = 0x136788u;
            goto label_136788;
        }
    }
    ctx->pc = 0x13671Cu;
    // 0x13671c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x136720: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x136720u;
    {
        const bool branch_taken_0x136720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136720u;
        // 0x136724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136720) {
            ctx->pc = 0x136758u;
            goto label_136758;
        }
    }
    ctx->pc = 0x136728u;
    // 0x136728: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x136728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13672c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136730: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136730u;
    SET_GPR_U32(ctx, 31, 0x136738u);
    ctx->pc = 0x136734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136730u;
    // 0x136734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136730u, 0x136738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136738u;
label_136738:
    // 0x136738: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13673c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x13673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x136740: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x136740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136748: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13674c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13674Cu;
    {
        const bool branch_taken_0x13674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13674Cu;
        // 0x136750: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13674c) {
            ctx->pc = 0x136788u;
            goto label_136788;
        }
    }
    ctx->pc = 0x136754u;
    // 0x136754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136758:
    // 0x136758: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13675c: 0xc04e188  jal         func_138620
    ctx->pc = 0x13675Cu;
    SET_GPR_U32(ctx, 31, 0x136764u);
    ctx->pc = 0x136760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13675Cu;
    // 0x136760: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x13675Cu, 0x136764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136764u;
label_136764:
    // 0x136764: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136768: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13676c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x13676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x136770: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136774u;
    {
        const bool branch_taken_0x136774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136774u;
        // 0x136778: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136774) {
            ctx->pc = 0x136788u;
            goto label_136788;
        }
    }
    ctx->pc = 0x13677Cu;
label_13677c:
    // 0x13677c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136780: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x136780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x136784: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x136784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
label_136788:
    // 0x136788: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13678c: 0x8c30a3cc  lw          $s0, -0x5C34($at)
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x136790: 0xc0590dc  jal         func_164370
    ctx->pc = 0x136790u;
    SET_GPR_U32(ctx, 31, 0x136798u);
    ctx->pc = 0x136794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136790u;
    // 0x136794: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x136790u, 0x136798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136798u;
label_136798:
    // 0x136798: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136798u;
    {
        const bool branch_taken_0x136798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136798) {
            ctx->pc = 0x1367B4u;
            goto label_1367b4;
        }
    }
    ctx->pc = 0x1367A0u;
    // 0x1367a0: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x1367a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
    // 0x1367a4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1367a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1367a8: 0x24637dd0  addiu       $v1, $v1, 0x7DD0
    ctx->pc = 0x1367a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
    // 0x1367ac: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x1367acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1367b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1367b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1367b4:
    // 0x1367b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1367b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1367b8u;
}
