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

// Function: entry_001cae40
// Address: 0x1cae40 - 0x1cae90
void entry_001cae40_0x1cae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cae40_0x1cae40");
#endif

    switch (ctx->pc) {
        case 0x1cae70u: goto label_1cae70;
        default: break;
    }

    ctx->pc = 0x1cae40u;

    // 0x1cae40: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1cae40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1cae44: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3651EEu));
    // 0x1cae48: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1cae48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cae4c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAE4Cu;
    {
        const bool branch_taken_0x1cae4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae4c) {
            ctx->pc = 0x1CAE90u;
            return;
        }
    }
    ctx->pc = 0x1CAE54u;
    // 0x1cae54: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1cae54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cae58: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cae5c: 0x92060035  lbu         $a2, 0x35($s0)
    ctx->pc = 0x1cae5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1cae60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae68: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CAE68u;
    SET_GPR_U32(ctx, 31, 0x1CAE70u);
    ctx->pc = 0x1CAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE68u;
    // 0x1cae6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAE68u, 0x1CAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE70u;
label_1cae70:
    // 0x1cae70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cae74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cae74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae84: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cae84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1cae88: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CAE88u;
    SET_GPR_U32(ctx, 31, 0x1CAE90u);
    ctx->pc = 0x1CAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE88u;
    // 0x1cae8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAE88u, 0x1CAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE90u;
}
