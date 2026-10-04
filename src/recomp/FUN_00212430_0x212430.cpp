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

// Function: FUN_00212430
// Address: 0x212430 - 0x21265c
void FUN_00212430_0x212430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212430_0x212430");
#endif

    switch (ctx->pc) {
        case 0x212464u: goto label_212464;
        case 0x2124b0u: goto label_2124b0;
        case 0x2124f0u: goto label_2124f0;
        case 0x212564u: goto label_212564;
        case 0x21257cu: goto label_21257c;
        case 0x2125bcu: goto label_2125bc;
        case 0x212614u: goto label_212614;
        default: break;
    }

    ctx->pc = 0x212430u;

    // 0x212430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212434: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x212434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x212438: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x212438u;
    {
        const bool branch_taken_0x212438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212438u;
        // 0x21243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212438) {
            ctx->pc = 0x2124F8u;
            goto label_2124f8;
        }
    }
    ctx->pc = 0x212440u;
    // 0x212440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212444: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x212444u;
    {
        const bool branch_taken_0x212444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212444) {
            ctx->pc = 0x212488u;
            goto label_212488;
        }
    }
    ctx->pc = 0x21244Cu;
    // 0x21244c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x212450: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x212450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x212454: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x212454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
    // 0x212458: 0x24a5f270  addiu       $a1, $a1, -0xD90
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
    // 0x21245c: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x21245Cu;
    SET_GPR_U32(ctx, 31, 0x212464u);
    ctx->pc = 0x212460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21245Cu;
    // 0x212460: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x21245Cu, 0x212464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212464u;
label_212464:
    // 0x212464: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212468: 0x9023e930  lbu         $v1, -0x16D0($at)
    ctx->pc = 0x212468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2AE930u));
    // 0x21246c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212470: 0x9022e9c0  lbu         $v0, -0x1640($at)
    ctx->pc = 0x212470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x2AE9C0u));
    // 0x212474: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212478: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x212478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x29CAECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CAECu, _value); } while (0);
    // 0x21247c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212480: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x212480u;
    {
        const bool branch_taken_0x212480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212480u;
        // 0x212484: 0xac22caf0  sw          $v0, -0x3510($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212480) {
            ctx->pc = 0x2124D0u;
            goto label_2124d0;
        }
    }
    ctx->pc = 0x212488u;
label_212488:
    // 0x212488: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21248c: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x21248cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212490: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x212494: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x212498: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x212498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
    // 0x21249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2124a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2124a4: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
    // 0x2124a8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2124A8u;
    SET_GPR_U32(ctx, 31, 0x2124B0u);
    ctx->pc = 0x2124ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124A8u;
    // 0x2124ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2124A8u, 0x2124B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124b4: 0x90237702  lbu         $v1, 0x7702($at)
    ctx->pc = 0x2124b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x587702u));
    // 0x2124b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124bc: 0x90227703  lbu         $v0, 0x7703($at)
    ctx->pc = 0x2124bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x587703u));
    // 0x2124c0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2124c4: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x2124c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x29CAECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CAECu, _value); } while (0);
    // 0x2124c8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2124cc: 0xac22caf0  sw          $v0, -0x3510($at)
    ctx->pc = 0x2124ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x29CAF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CAF0u, _value); } while (0);
label_2124d0:
    // 0x2124d0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124d4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2124d8: 0x90247560  lbu         $a0, 0x7560($at)
    ctx->pc = 0x2124d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x587560u));
    // 0x2124dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2124dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2124e4: 0x90267701  lbu         $a2, 0x7701($at)
    ctx->pc = 0x2124e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x587701u));
    // 0x2124e8: 0xc056690  jal         func_159A40
    ctx->pc = 0x2124E8u;
    SET_GPR_U32(ctx, 31, 0x2124F0u);
    ctx->pc = 0x2124ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124E8u;
    // 0x2124ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x2124E8u, 0x2124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124F0u;
label_2124f0:
    // 0x2124f0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2124F0u;
    {
        const bool branch_taken_0x2124f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2124f0) {
            ctx->pc = 0x212650u;
            goto label_212650;
        }
    }
    ctx->pc = 0x2124F8u;
label_2124f8:
    // 0x2124f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2124fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2124fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212500: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x212500u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF0u, _value); } while (0);
    // 0x212504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212508: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21250c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212510: 0xa0207561  sb          $zero, 0x7561($at)
    ctx->pc = 0x212510u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587561u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587561u, _value); } while (0);
    // 0x212514: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212518: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x212518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587564u, _value); } while (0);
    // 0x21251c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21251cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212520: 0x80254970  lb          $a1, 0x4970($at)
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x334970u));
    // 0x212524: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212528: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x212528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334999u));
    // 0x21252c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212530: 0x8023caec  lb          $v1, -0x3514($at)
    ctx->pc = 0x212530u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x29CAECu));
    // 0x212534: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x212538: 0x8022caf0  lb          $v0, -0x3510($at)
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x29CAF0u));
    // 0x21253c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212540: 0xa0257560  sb          $a1, 0x7560($at)
    ctx->pc = 0x212540u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587560u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587560u, _value); } while (0);
    // 0x212544: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212548: 0xa0247701  sb          $a0, 0x7701($at)
    ctx->pc = 0x212548u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x587701u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587701u, _value); } while (0);
    // 0x21254c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212550: 0xa0237702  sb          $v1, 0x7702($at)
    ctx->pc = 0x212550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587702u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587702u, _value); } while (0);
    // 0x212554: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212558: 0xa0227703  sb          $v0, 0x7703($at)
    ctx->pc = 0x212558u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x587703u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587703u, _value); } while (0);
    // 0x21255c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x212560: 0x24637560  addiu       $v1, $v1, 0x7560
    ctx->pc = 0x212560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30048));
label_212564:
    // 0x212564: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x212568: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21256c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21256cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x212570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212574: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x212574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x212578: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x212578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_21257c:
    // 0x21257c: 0x0  nop
    ctx->pc = 0x21257cu;
    // NOP
    // 0x212580: 0xa44821  addu        $t1, $a1, $a0
    ctx->pc = 0x212580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x212584: 0xa1200058  sb          $zero, 0x58($t1)
    ctx->pc = 0x212584u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x212588: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x212588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21258c: 0xa1200059  sb          $zero, 0x59($t1)
    ctx->pc = 0x21258cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x212590: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x212590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x212594: 0xa120005a  sb          $zero, 0x5A($t1)
    ctx->pc = 0x212594u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x212598: 0xa120005b  sb          $zero, 0x5B($t1)
    ctx->pc = 0x212598u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x21259c: 0xa120005c  sb          $zero, 0x5C($t1)
    ctx->pc = 0x21259cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a0: 0xa120005d  sb          $zero, 0x5D($t1)
    ctx->pc = 0x2125a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a4: 0xa120005e  sb          $zero, 0x5E($t1)
    ctx->pc = 0x2125a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2125A8u;
    {
        const bool branch_taken_0x2125a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0xa120005f  sb          $zero, 0x5F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a8) {
            ctx->pc = 0x21257Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21257c;
        }
    }
    ctx->pc = 0x2125B0u;
    // 0x2125b0: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x2125b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2125b4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2125B4u;
    {
        const bool branch_taken_0x2125b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2125b4) {
            ctx->pc = 0x2125DCu;
            goto label_2125dc;
        }
    }
    ctx->pc = 0x2125BCu;
label_2125bc:
    // 0x2125bc: 0x0  nop
    ctx->pc = 0x2125bcu;
    // NOP
    // 0x2125c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2125c4: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x2125c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2125c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2125cc: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2125ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2125d0: 0x0  nop
    ctx->pc = 0x2125d0u;
    // NOP
    // 0x2125d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2125D4u;
    {
        const bool branch_taken_0x2125d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2125d4) {
            ctx->pc = 0x2125BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125DCu;
label_2125dc:
    // 0x2125dc: 0x0  nop
    ctx->pc = 0x2125dcu;
    // NOP
    // 0x2125e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2125e4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2125e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2125e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2125ec: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2125ECu;
    {
        const bool branch_taken_0x2125ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125ECu;
        // 0x2125f0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125ec) {
            ctx->pc = 0x212564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212564;
        }
    }
    ctx->pc = 0x2125F4u;
    // 0x2125f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2125f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2125f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2125f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125fc: 0xfc2076f8  sd          $zero, 0x76F8($at)
    ctx->pc = 0x2125fcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5876F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5876F8u, _value); } while (0);
    // 0x212600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212604: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x212608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21260c: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x212610: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_212614:
    // 0x212614: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x212614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x212618: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x21261c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x212620: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x212624: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212624u;
    {
        const bool branch_taken_0x212624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212624) {
            ctx->pc = 0x212640u;
            goto label_212640;
        }
    }
    ctx->pc = 0x21262Cu;
    // 0x21262c: 0x1041814  dsllv       $v1, $a0, $t0
    ctx->pc = 0x21262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x212630: 0xdc2276f8  ld          $v0, 0x76F8($at)
    ctx->pc = 0x212630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 30456)));
    // 0x212634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x212638: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21263c: 0xfc2276f8  sd          $v0, 0x76F8($at)
    ctx->pc = 0x21263cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5876F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5876F8u, _value); } while (0);
label_212640:
    // 0x212640: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x212640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x212644: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x212644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x212648: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x212648u;
    {
        const bool branch_taken_0x212648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212648u;
        // 0x21264c: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212648) {
            ctx->pc = 0x212614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212614;
        }
    }
    ctx->pc = 0x212650u;
label_212650:
    // 0x212650: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212658: 0x90227561  lbu         $v0, 0x7561($at)
    ctx->pc = 0x212658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x587561u));
    ctx->pc = 0x21265cu;
}
