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

// Function: entry_00214a44
// Address: 0x214a44 - 0x214a88
void entry_00214a44_0x214a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214a44_0x214a44");
#endif

    switch (ctx->pc) {
        case 0x214a5cu: goto label_214a5c;
        case 0x214a80u: goto label_214a80;
        default: break;
    }

    ctx->pc = 0x214a44u;

    // 0x214a44: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x214a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x214a48: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x214a4c: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x214a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
    // 0x214a50: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x214a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x214a54: 0xc05e234  jal         func_1788D0
    ctx->pc = 0x214A54u;
    SET_GPR_U32(ctx, 31, 0x214A5Cu);
    ctx->pc = 0x214A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A54u;
    // 0x214a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x214A54u, 0x214A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A5Cu;
label_214a5c:
    // 0x214a5c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x214a60: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214a60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214a64: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x214a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x214a68: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x214a6c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a70: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x214a74: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214a78: 0xc05e060  jal         func_178180
    ctx->pc = 0x214A78u;
    SET_GPR_U32(ctx, 31, 0x214A80u);
    ctx->pc = 0x214A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A78u;
    // 0x214a7c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214A78u, 0x214A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A80u;
label_214a80:
    // 0x214a80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214a88u;
}
