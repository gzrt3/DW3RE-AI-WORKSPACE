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

// Function: entry_0018ec50
// Address: 0x18ec50 - 0x18ec94
void entry_0018ec50_0x18ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec50_0x18ec50");
#endif

    switch (ctx->pc) {
        case 0x18ec64u: goto label_18ec64;
        case 0x18ec88u: goto label_18ec88;
        default: break;
    }

    ctx->pc = 0x18ec50u;

    // 0x18ec50: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x18ec54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec58: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x18ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x18ec5c: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x18EC5Cu;
    SET_GPR_U32(ctx, 31, 0x18EC64u);
    ctx->pc = 0x18EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC5Cu;
    // 0x18ec60: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x18EC5Cu, 0x18EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC64u;
label_18ec64:
    // 0x18ec64: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x18ec68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x18ec6c: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x18ec70: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x18ec74: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ec78: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18ec78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec7c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18ec80: 0xc066f08  jal         func_19BC20
    ctx->pc = 0x18EC80u;
    SET_GPR_U32(ctx, 31, 0x18EC88u);
    ctx->pc = 0x18EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC80u;
    // 0x18ec84: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BC20u, 0x18EC80u, 0x18EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC88u;
label_18ec88:
    // 0x18ec88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec8c: 0xc0643e4  jal         func_190F90
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC8Cu;
    // 0x18ec90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F90u, 0x18EC8Cu, 0x18EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC94u;
}
