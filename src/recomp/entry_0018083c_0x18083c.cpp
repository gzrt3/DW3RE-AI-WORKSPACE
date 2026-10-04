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

// Function: entry_0018083c
// Address: 0x18083c - 0x1808f0
void entry_0018083c_0x18083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018083c_0x18083c");
#endif

    switch (ctx->pc) {
        case 0x18085cu: goto label_18085c;
        case 0x180864u: goto label_180864;
        case 0x18086cu: goto label_18086c;
        case 0x180874u: goto label_180874;
        default: break;
    }

    ctx->pc = 0x18083cu;

    // 0x18083c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x180840: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x180840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x180844: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x180848: 0xac223ffc  sw          $v0, 0x3FFC($at)
    ctx->pc = 0x180848u;
    runtime->Store32(rdram, ctx, 0x70003FFCu, GPR_U32(ctx, 2));
    // 0x18084c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x180850: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x180854: 0xc06e09c  jal         func_1B8270
    ctx->pc = 0x180854u;
    SET_GPR_U32(ctx, 31, 0x18085Cu);
    ctx->pc = 0x180858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180854u;
    // 0x180858: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8270u, 0x180854u, 0x18085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18085Cu;
label_18085c:
    // 0x18085c: 0xc06e090  jal         func_1B8240
    ctx->pc = 0x18085Cu;
    SET_GPR_U32(ctx, 31, 0x180864u);
    ctx->pc = 0x1B8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8240u, 0x18085Cu, 0x180864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180864u;
label_180864:
    // 0x180864: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x180864u;
    SET_GPR_U32(ctx, 31, 0x18086Cu);
    ctx->pc = 0x170700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170700u, 0x180864u, 0x18086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18086Cu;
label_18086c:
    // 0x18086c: 0xc05bfe4  jal         func_16FF90
    ctx->pc = 0x18086Cu;
    SET_GPR_U32(ctx, 31, 0x180874u);
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x18086Cu, 0x180874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180874u;
label_180874:
    // 0x180874: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x180878: 0x94274530  lhu         $a3, 0x4530($at)
    ctx->pc = 0x180878u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x364530u));
    // 0x18087c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x180880: 0x94264552  lhu         $a2, 0x4552($at)
    ctx->pc = 0x180880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x364552u));
    // 0x180884: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x180888: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x18088c: 0x94254532  lhu         $a1, 0x4532($at)
    ctx->pc = 0x18088cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17714)));
    // 0x180890: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x180890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x180894: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x180894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x180898: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x18089c: 0xff8687d0  sd          $a2, -0x7830($gp)
    ctx->pc = 0x18089cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 6));
    // 0x1808a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1808a4: 0x94244554  lhu         $a0, 0x4554($at)
    ctx->pc = 0x1808a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x364554u));
    // 0x1808a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1808ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1808b0: 0x94234534  lhu         $v1, 0x4534($at)
    ctx->pc = 0x1808b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17716)));
    // 0x1808b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1808b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1808bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1808c0: 0xff8487c8  sd          $a0, -0x7838($gp)
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 4));
    // 0x1808c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1808c8: 0x94224556  lhu         $v0, 0x4556($at)
    ctx->pc = 0x1808c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x364556u));
    // 0x1808cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1808d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1808d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1808d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1808d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1808d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1808d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1808dc: 0xff8287c0  sd          $v0, -0x7840($gp)
    ctx->pc = 0x1808dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 2));
    // 0x1808e0: 0x8f828800  lw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
    // 0x1808e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1808e8: 0xaf828800  sw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 2));
    // 0x1808ec: 0x8f8287d8  lw          $v0, -0x7828($gp)
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
    ctx->pc = 0x1808f0u;
}
