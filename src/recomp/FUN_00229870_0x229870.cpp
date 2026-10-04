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

// Function: FUN_00229870
// Address: 0x229870 - 0x229bc0
void FUN_00229870_0x229870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00229870_0x229870");
#endif

    switch (ctx->pc) {
        case 0x22988cu: goto label_22988c;
        case 0x2298a0u: goto label_2298a0;
        case 0x2298d0u: goto label_2298d0;
        case 0x2298e4u: goto label_2298e4;
        case 0x229900u: goto label_229900;
        case 0x229920u: goto label_229920;
        case 0x229970u: goto label_229970;
        case 0x229984u: goto label_229984;
        case 0x229990u: goto label_229990;
        case 0x22999cu: goto label_22999c;
        case 0x2299c8u: goto label_2299c8;
        case 0x2299d4u: goto label_2299d4;
        case 0x229a54u: goto label_229a54;
        case 0x229a60u: goto label_229a60;
        case 0x229a6cu: goto label_229a6c;
        case 0x229aacu: goto label_229aac;
        case 0x229ad4u: goto label_229ad4;
        case 0x229ae8u: goto label_229ae8;
        case 0x229af8u: goto label_229af8;
        case 0x229b08u: goto label_229b08;
        case 0x229b74u: goto label_229b74;
        case 0x229b80u: goto label_229b80;
        default: break;
    }

    ctx->pc = 0x229870u;

    // 0x229870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x229874: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22987c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229884: 0xc090e38  jal         func_2438E0
    ctx->pc = 0x229884u;
    SET_GPR_U32(ctx, 31, 0x22988Cu);
    ctx->pc = 0x229888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229884u;
    // 0x229888: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438E0u, 0x229884u, 0x22988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22988Cu;
label_22988c:
    // 0x22988c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x22988cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229890: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229890u;
    {
        const bool branch_taken_0x229890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229890u;
        // 0x229894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229890) {
            ctx->pc = 0x2298C8u;
            goto label_2298c8;
        }
    }
    ctx->pc = 0x229898u;
    // 0x229898: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229898u;
    SET_GPR_U32(ctx, 31, 0x2298A0u);
    ctx->pc = 0x22989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229898u;
    // 0x22989c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229898u, 0x2298A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298A0u;
label_2298a0:
    // 0x2298a0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2298a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2298a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A4u;
        // 0x2298a8: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2298C4u;
            goto label_2298c4;
        }
    }
    ctx->pc = 0x2298ACu;
    // 0x2298ac: 0xac20a27c  sw          $zero, -0x5D84($at)
    ctx->pc = 0x2298acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 0));
    // 0x2298b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2298b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2298b4: 0xac20a278  sw          $zero, -0x5D88($at)
    ctx->pc = 0x2298b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x58A278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A278u, _value); } while (0);
    // 0x2298b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2298bc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2298BCu;
    {
        const bool branch_taken_0x2298bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298BCu;
        // 0x2298c0: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298bc) {
            ctx->pc = 0x229B00u;
            goto label_229b00;
        }
    }
    ctx->pc = 0x2298C4u;
label_2298c4:
    // 0x2298c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2298c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2298c8:
    // 0x2298c8: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298C8u;
    SET_GPR_U32(ctx, 31, 0x2298D0u);
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298C8u, 0x2298D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298D0u;
label_2298d0:
    // 0x2298d0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2298D0u;
    {
        const bool branch_taken_0x2298d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298d0) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x2298D8u;
    // 0x2298d8: 0x8c30a278  lw          $s0, -0x5D88($at)
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943352)));
    // 0x2298dc: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298DCu;
    SET_GPR_U32(ctx, 31, 0x2298E4u);
    ctx->pc = 0x2298E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298DCu;
    // 0x2298e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298DCu, 0x2298E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298E4u;
label_2298e4:
    // 0x2298e4: 0x1202007e  beq         $s0, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2298E4u;
    {
        const bool branch_taken_0x2298e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2298e4) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x2298ECu;
    // 0x2298ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2298f0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2298F0u;
    {
        const bool branch_taken_0x2298f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f0) {
            ctx->pc = 0x229918u;
            goto label_229918;
        }
    }
    ctx->pc = 0x2298F8u;
    // 0x2298f8: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x2298F8u;
    SET_GPR_U32(ctx, 31, 0x229900u);
    ctx->pc = 0x2298FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298F8u;
    // 0x2298fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x2298F8u, 0x229900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229900u;
label_229900:
    // 0x229900: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229904: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x229908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22990c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x229910u;
    {
        const bool branch_taken_0x229910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229910u;
        // 0x229914: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229910) {
            ctx->pc = 0x229940u;
            goto label_229940;
        }
    }
    ctx->pc = 0x229918u;
label_229918:
    // 0x229918: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229918u;
    SET_GPR_U32(ctx, 31, 0x229920u);
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229918u, 0x229920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229920u;
label_229920:
    // 0x229920: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229924: 0x8c24a278  lw          $a0, -0x5D88($at)
    ctx->pc = 0x229924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x58A278u));
    // 0x229928: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22992c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229930: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
    // 0x229934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229938: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22993c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x22993cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
label_229940:
    // 0x229940: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229944: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A270u));
    // 0x229948: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x22994c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22994Cu;
    {
        const bool branch_taken_0x22994c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22994c) {
            ctx->pc = 0x22995Cu;
            goto label_22995c;
        }
    }
    ctx->pc = 0x229954u;
    // 0x229954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229954u;
    {
        const bool branch_taken_0x229954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229954) {
            ctx->pc = 0x229960u;
            goto label_229960;
        }
    }
    ctx->pc = 0x22995Cu;
label_22995c:
    // 0x22995c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x22995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_229960:
    // 0x229960: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229968: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229968u;
    SET_GPR_U32(ctx, 31, 0x229970u);
    ctx->pc = 0x22996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229968u;
    // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229968u, 0x229970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229970u;
label_229970:
    // 0x229970: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x229974: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x229974) {
            ctx->pc = 0x229A30u;
            goto label_229a30;
        }
    }
    ctx->pc = 0x22997Cu;
    // 0x22997c: 0xc08a004  jal         func_228010
    ctx->pc = 0x22997Cu;
    SET_GPR_U32(ctx, 31, 0x229984u);
    ctx->pc = 0x229980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22997Cu;
    // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x22997Cu, 0x229984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229984u;
label_229984:
    // 0x229984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229988: 0xc08a004  jal         func_228010
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229988u, 0x229990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229994: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299E0u;
            goto label_2299e0;
        }
    }
    ctx->pc = 0x22999Cu;
label_22999c:
    // 0x22999c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2299a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2299a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2299A4u;
    {
        const bool branch_taken_0x2299a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299a4) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x2299ACu;
    // 0x2299ac: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2299b0: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2299b4: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2299b8: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x2299b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2299bc: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2299c0: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x2299C0u;
    SET_GPR_U32(ctx, 31, 0x2299C8u);
    ctx->pc = 0x2299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C0u;
    // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2299C0u, 0x2299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C8u;
label_2299c8:
    // 0x2299c8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2299cc: 0xc08a004  jal         func_228010
    ctx->pc = 0x2299CCu;
    SET_GPR_U32(ctx, 31, 0x2299D4u);
    ctx->pc = 0x2299D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299CCu;
    // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x2299CCu, 0x2299D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299D4u;
label_2299d4:
    // 0x2299d4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2299d8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x22999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22999c;
        }
    }
    ctx->pc = 0x2299E0u;
label_2299e0:
    // 0x2299e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2299e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299e8: 0xac22a274  sw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A274u, _value); } while (0);
    // 0x2299ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299f0: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x2299f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x2299f8: 0x8c22a274  lw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A274u));
    // 0x2299fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229a00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a04: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
    // 0x229a08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a0c: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58A270u));
    // 0x229a10: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x229a14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229A24u;
            goto label_229a24;
        }
    }
    ctx->pc = 0x229A1Cu;
    // 0x229a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229A1Cu;
    {
        const bool branch_taken_0x229a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a1c) {
            ctx->pc = 0x229A28u;
            goto label_229a28;
        }
    }
    ctx->pc = 0x229A24u;
label_229a24:
    // 0x229a24: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x229a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_229a28:
    // 0x229a28: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a2c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A270u, _value); } while (0);
label_229a30:
    // 0x229a30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229a34: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A270u));
    // 0x229a38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x229a3c: 0x8c22cc38  lw          $v0, -0x33C8($at)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29CC38u));
    // 0x229a40: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x229a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229a44: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x229A44u;
    {
        const bool branch_taken_0x229a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A44u;
        // 0x229a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a44) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x229A4Cu;
    // 0x229a4c: 0xc08a004  jal         func_228010
    ctx->pc = 0x229A4Cu;
    SET_GPR_U32(ctx, 31, 0x229A54u);
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229A4Cu, 0x229A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A54u;
label_229a54:
    // 0x229a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a58: 0xc08a004  jal         func_228010
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A58u;
    // 0x229a5c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229A58u, 0x229A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229a64: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x229A64u;
    {
        const bool branch_taken_0x229a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a64) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x229A6Cu;
label_229a6c:
    // 0x229a6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229a70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229a74: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x229A74u;
    {
        const bool branch_taken_0x229a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A74u;
        // 0x229a78: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a74) {
            ctx->pc = 0x229AC4u;
            goto label_229ac4;
        }
    }
    ctx->pc = 0x229A7Cu;
    // 0x229a7c: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x229a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229a84: 0x90420680  lbu         $v0, 0x680($v0)
    ctx->pc = 0x229a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1664)));
    // 0x229a88: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229A88u;
    {
        const bool branch_taken_0x229a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a88) {
            ctx->pc = 0x229AC4u;
            goto label_229ac4;
        }
    }
    ctx->pc = 0x229A90u;
    // 0x229a90: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x229a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x229a94: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229a98: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x229a9c: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x229a9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229aa0: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x229aa4: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x229AA4u;
    SET_GPR_U32(ctx, 31, 0x229AACu);
    ctx->pc = 0x229AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA4u;
    // 0x229aa8: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x229AA4u, 0x229AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229ab0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x229ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x229ab4: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x229ab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229ac0: 0xa0440680  sb          $a0, 0x680($v0)
    ctx->pc = 0x229ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1664), (uint8_t)GPR_U32(ctx, 4));
label_229ac4:
    // 0x229ac4: 0x0  nop
    ctx->pc = 0x229ac4u;
    // NOP
    // 0x229ac8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229acc: 0xc08a004  jal         func_228010
    ctx->pc = 0x229ACCu;
    SET_GPR_U32(ctx, 31, 0x229AD4u);
    ctx->pc = 0x229AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ACCu;
    // 0x229ad0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x229ACCu, 0x229AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AD4u;
label_229ad4:
    // 0x229ad4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x229ad8: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
    ctx->pc = 0x229AD8u;
    {
        const bool branch_taken_0x229ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ad8) {
            ctx->pc = 0x229A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229a6c;
        }
    }
    ctx->pc = 0x229AE0u;
label_229ae0:
    // 0x229ae0: 0xc090e38  jal         func_2438E0
    ctx->pc = 0x229AE0u;
    SET_GPR_U32(ctx, 31, 0x229AE8u);
    ctx->pc = 0x229AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AE0u;
    // 0x229ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438E0u, 0x229AE0u, 0x229AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AE8u;
label_229ae8:
    // 0x229ae8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229af0: 0xc090df4  jal         func_2437D0
    ctx->pc = 0x229AF0u;
    SET_GPR_U32(ctx, 31, 0x229AF8u);
    ctx->pc = 0x229AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF0u;
    // 0x229af4: 0xac22a27c  sw          $v0, -0x5D84($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2437D0u, 0x229AF0u, 0x229AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AF8u;
label_229af8:
    // 0x229af8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229afc: 0xac22a278  sw          $v0, -0x5D88($at)
    ctx->pc = 0x229afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x58A278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A278u, _value); } while (0);
label_229b00:
    // 0x229b00: 0xc08a93c  jal         func_22A4F0
    ctx->pc = 0x229B00u;
    SET_GPR_U32(ctx, 31, 0x229B08u);
    ctx->pc = 0x22A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A4F0u, 0x229B00u, 0x229B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B08u;
label_229b08:
    // 0x229b08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b0c: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x229b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A280u));
    // 0x229b10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x229B10u;
    {
        const bool branch_taken_0x229b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229b10) {
            ctx->pc = 0x229B50u;
            goto label_229b50;
        }
    }
    ctx->pc = 0x229B18u;
    // 0x229b18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x229b1c: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334968u));
    // 0x229b20: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x229b24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b28: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x229b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A280u, _value); } while (0);
    // 0x229b2c: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x229b30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b34: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x229b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A284u, _value); } while (0);
    // 0x229b38: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x229b3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b40: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x229b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A288u, _value); } while (0);
    // 0x229b44: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x229b48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b4c: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x229b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A28Cu, _value); } while (0);
label_229b50:
    // 0x229b50: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b54: 0x8c23a290  lw          $v1, -0x5D70($at)
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A290u));
    // 0x229b58: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x229B58u;
    {
        const bool branch_taken_0x229b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B58u;
        // 0x229b5c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b58) {
            ctx->pc = 0x229BBCu;
            goto label_229bbc;
        }
    }
    ctx->pc = 0x229B60u;
    // 0x229b60: 0x3c0240b5  lui         $v0, 0x40B5
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16565 << 16));
    // 0x229b64: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x229b68: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x229b6c: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x229B6Cu;
    SET_GPR_U32(ctx, 31, 0x229B74u);
    ctx->pc = 0x229B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B6Cu;
    // 0x229b70: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x229B6Cu, 0x229B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B74u;
label_229b74:
    // 0x229b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b78: 0xc04003c  jal         func_1000F0
    ctx->pc = 0x229B78u;
    SET_GPR_U32(ctx, 31, 0x229B80u);
    ctx->pc = 0x229B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B78u;
    // 0x229b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000F0u, 0x229B78u, 0x229B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229B80u;
    {
        const bool branch_taken_0x229b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b80) {
            ctx->pc = 0x229BBCu;
            goto label_229bbc;
        }
    }
    ctx->pc = 0x229B88u;
    // 0x229b88: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
    // 0x229b8c: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x229b90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b94: 0xac23a290  sw          $v1, -0x5D70($at)
    ctx->pc = 0x229b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A290u, _value); } while (0);
    // 0x229b98: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x229b9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229ba0: 0xac23a294  sw          $v1, -0x5D6C($at)
    ctx->pc = 0x229ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A294u, _value); } while (0);
    // 0x229ba4: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x229ba8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229bac: 0xac23a298  sw          $v1, -0x5D68($at)
    ctx->pc = 0x229bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A298u, _value); } while (0);
    // 0x229bb0: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x229bb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229bb8: 0xac23a29c  sw          $v1, -0x5D64($at)
    ctx->pc = 0x229bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A29Cu, _value); } while (0);
label_229bbc:
    // 0x229bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x229bc0u;
}
