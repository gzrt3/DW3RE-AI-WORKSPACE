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

// Function: entry_002038c8
// Address: 0x2038c8 - 0x20394c
void entry_002038c8_0x2038c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002038c8_0x2038c8");
#endif

    switch (ctx->pc) {
        case 0x2038d4u: goto label_2038d4;
        case 0x203914u: goto label_203914;
        case 0x203938u: goto label_203938;
        case 0x203940u: goto label_203940;
        default: break;
    }

    ctx->pc = 0x2038c8u;

    // 0x2038c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2038cc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2038CCu;
    SET_GPR_U32(ctx, 31, 0x2038D4u);
    ctx->pc = 0x2038D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038CCu;
    // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2038CCu, 0x2038D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038D4u;
label_2038d4:
    // 0x2038d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2038d8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2038dc: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x2038e0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2038e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2038e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2038e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2038ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2038f0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2038f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2038f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2038fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x203900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203904: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x203908: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x20390c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x20390Cu;
    SET_GPR_U32(ctx, 31, 0x203914u);
    ctx->pc = 0x203910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20390Cu;
    // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x20390Cu, 0x203914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203914u;
label_203914:
    // 0x203914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203918: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203920: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x203924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x203928: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20392c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20392cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203930: 0xc08104c  jal         func_204130
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 31, 0x203938u);
    ctx->pc = 0x203934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203930u;
    // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203930u, 0x203938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203938u;
    SET_GPR_U32(ctx, 31, 0x203940u);
    ctx->pc = 0x20393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203938u;
    // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203938u, 0x203940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203944: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x203944u;
    {
        const bool branch_taken_0x203944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203944) {
            ctx->pc = 0x2039E8u;
            return;
        }
    }
    ctx->pc = 0x20394Cu;
}
