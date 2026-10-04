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

// Function: entry_002397d8
// Address: 0x2397d8 - 0x239928
void entry_002397d8_0x2397d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002397d8_0x2397d8");
#endif

    switch (ctx->pc) {
        case 0x2397ecu: goto label_2397ec;
        case 0x239804u: goto label_239804;
        case 0x239814u: goto label_239814;
        case 0x239888u: goto label_239888;
        case 0x2398fcu: goto label_2398fc;
        case 0x239904u: goto label_239904;
        default: break;
    }

    ctx->pc = 0x2397d8u;

    // 0x2397d8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2397dc: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2397e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2397e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397e4: 0xc08e708  jal         func_239C20
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x2397E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397E4u;
    // 0x2397e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x2397E4u, 0x2397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397f0: 0x52200046  beql        $s1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x2397F0u;
    {
        const bool branch_taken_0x2397f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397f0) {
            ctx->pc = 0x2397F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2397F0u;
            // 0x2397f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23990Cu;
            goto label_23990c;
        }
    }
    ctx->pc = 0x2397F8u;
    // 0x2397f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2397f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397fc: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x2397FCu;
    SET_GPR_U32(ctx, 31, 0x239804u);
    ctx->pc = 0x239800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397FCu;
    // 0x239800: 0x2632fff8  addiu       $s2, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x2397FCu, 0x239804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239804u;
label_239804:
    // 0x239804: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x239804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x239808: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x23980c: 0xc06d9fe  jal         func_1B67F8
    ctx->pc = 0x23980Cu;
    SET_GPR_U32(ctx, 31, 0x239814u);
    ctx->pc = 0x239810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23980Cu;
    // 0x239810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67F8u, 0x23980Cu, 0x239814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239814u;
label_239814:
    // 0x239814: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x239814u;
    {
        const bool branch_taken_0x239814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239814u;
        // 0x239818: 0x2303821  addu        $a3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239814) {
            ctx->pc = 0x239888u;
            goto label_239888;
        }
    }
    ctx->pc = 0x23981Cu;
    // 0x23981c: 0x101023  negu        $v0, $s0
    ctx->pc = 0x23981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x239820: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x239824: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x239828: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x239828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x23982c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239830: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x239830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x239834: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x239834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x239838: 0xf21023  subu        $v0, $a3, $s2
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x23983c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239840: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x239840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239844: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x239844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239848: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x239848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23984c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x23984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x239850: 0xf24023  subu        $t0, $a3, $s2
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x239854: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x239854u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x239858: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x239858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x23985c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x23985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x239860: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x239860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x239864: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x239868: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23986c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x23986cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x239870: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x239874: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x239874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x239878: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x239878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x23987c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23987cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x239880: 0xc08e2c0  jal         func_238B00
    ctx->pc = 0x239880u;
    SET_GPR_U32(ctx, 31, 0x239888u);
    ctx->pc = 0x239884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239880u;
    // 0x239884: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B00u, 0x239880u, 0x239888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239888u;
label_239888:
    // 0x239888: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x239888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23988c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x23988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239894: 0x53202b  sltu        $a0, $v0, $s3
    ctx->pc = 0x239894u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x239898: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x239898u;
    {
        const bool branch_taken_0x239898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239898) {
            ctx->pc = 0x23989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239898u;
            // 0x23989c: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2398B8u;
            goto label_2398b8;
        }
    }
    ctx->pc = 0x2398A0u;
    // 0x2398a0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2398a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2398a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2398ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2398ACu;
    {
        const bool branch_taken_0x2398ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398ACu;
        // 0x2398b0: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398ac) {
            ctx->pc = 0x2398C0u;
            goto label_2398c0;
        }
    }
    ctx->pc = 0x2398B4u;
    // 0x2398b4: 0x0  nop
    ctx->pc = 0x2398b4u;
    // NOP
label_2398b8:
    // 0x2398b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2398bc: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x2398bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
label_2398c0:
    // 0x2398c0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2398c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2398C4u;
    {
        const bool branch_taken_0x2398c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2398C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C4u;
        // 0x2398c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398c4) {
            ctx->pc = 0x2398FCu;
            goto label_2398fc;
        }
    }
    ctx->pc = 0x2398CCu;
    // 0x2398cc: 0x2533021  addu        $a2, $s2, $s3
    ctx->pc = 0x2398ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2398d0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2398d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2398d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2398d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2398dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2398dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2398e0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x2398e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2398e4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2398e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2398e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2398e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2398ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2398ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2398f0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x2398f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x2398f4: 0xc08e2c0  jal         func_238B00
    ctx->pc = 0x2398F4u;
    SET_GPR_U32(ctx, 31, 0x2398FCu);
    ctx->pc = 0x2398F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F4u;
    // 0x2398f8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B00u, 0x2398F4u, 0x2398FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398FCu;
label_2398fc:
    // 0x2398fc: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x2398FCu;
    SET_GPR_U32(ctx, 31, 0x239904u);
    ctx->pc = 0x239900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398FCu;
    // 0x239900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x2398FCu, 0x239904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239904u;
label_239904:
    // 0x239904: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x239908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23990c:
    // 0x23990c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23990cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239914: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239918: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x239918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23991c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239920: 0x3e00008  jr          $ra
    ctx->pc = 0x239920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239920u;
        // 0x239924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239928u;
}
