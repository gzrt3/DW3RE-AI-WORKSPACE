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

// Function: FUN_001127b0
// Address: 0x1127b0 - 0x112804
void FUN_001127b0_0x1127b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001127b0_0x1127b0");
#endif

    switch (ctx->pc) {
        case 0x1127c0u: goto label_1127c0;
        case 0x1127ccu: goto label_1127cc;
        case 0x1127d8u: goto label_1127d8;
        case 0x112800u: goto label_112800;
        default: break;
    }

    ctx->pc = 0x1127b0u;

    // 0x1127b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1127b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1127b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1127b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1127b8: 0xc041738  jal         func_105CE0
    ctx->pc = 0x1127B8u;
    SET_GPR_U32(ctx, 31, 0x1127C0u);
    ctx->pc = 0x1127BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127B8u;
    // 0x1127bc: 0x2404021c  addiu       $a0, $zero, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1127B8u, 0x1127C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127C0u;
label_1127c0:
    // 0x1127c0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1127c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1127c4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1127C4u;
    SET_GPR_U32(ctx, 31, 0x1127CCu);
    ctx->pc = 0x1127C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127C4u;
    // 0x1127c8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1127C4u, 0x1127CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127CCu;
label_1127cc:
    // 0x1127cc: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x1127ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1127d0: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x1127D0u;
    SET_GPR_U32(ctx, 31, 0x1127D8u);
    ctx->pc = 0x1127D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127D0u;
    // 0x1127d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1127D0u, 0x1127D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127D8u;
label_1127d8:
    // 0x1127d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1127d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1127dc: 0xac223ab4  sw          $v0, 0x3AB4($at)
    ctx->pc = 0x1127dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x303AB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x303AB4u, _value); } while (0);
    // 0x1127e0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1127e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1127e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1127e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1127e8: 0xa4223ab0  sh          $v0, 0x3AB0($at)
    ctx->pc = 0x1127e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x303AB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x303AB0u, _value); } while (0);
    // 0x1127ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1127ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1127f0: 0xac203abc  sw          $zero, 0x3ABC($at)
    ctx->pc = 0x1127f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x303ABCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x303ABCu, _value); } while (0);
    // 0x1127f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1127f8: 0xc0544e8  jal         func_1513A0
    ctx->pc = 0x1127F8u;
    SET_GPR_U32(ctx, 31, 0x112800u);
    ctx->pc = 0x1127FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127F8u;
    // 0x1127fc: 0xac203ab8  sw          $zero, 0x3AB8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 15032), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1513A0u, 0x1127F8u, 0x112800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112800u;
label_112800:
    // 0x112800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x112804u;
}
