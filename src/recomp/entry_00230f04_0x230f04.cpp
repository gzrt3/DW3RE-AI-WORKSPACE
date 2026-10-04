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

// Function: entry_00230f04
// Address: 0x230f04 - 0x230f58
void entry_00230f04_0x230f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230f04_0x230f04");
#endif

    switch (ctx->pc) {
        case 0x230f0cu: goto label_230f0c;
        case 0x230f18u: goto label_230f18;
        case 0x230f40u: goto label_230f40;
        case 0x230f50u: goto label_230f50;
        default: break;
    }

    ctx->pc = 0x230f04u;

    // 0x230f04: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x230F04u;
    SET_GPR_U32(ctx, 31, 0x230F0Cu);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x230F04u, 0x230F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f10: 0xc08c792  jal         func_231E48
    ctx->pc = 0x230F10u;
    SET_GPR_U32(ctx, 31, 0x230F18u);
    ctx->pc = 0x230F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F10u;
    // 0x230f14: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E48u, 0x230F10u, 0x230F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F18u;
label_230f18:
    // 0x230f18: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x230F18u;
    {
        const bool branch_taken_0x230f18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x230f18) {
            ctx->pc = 0x230F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F18u;
            // 0x230f1c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F58u;
            return;
        }
    }
    ctx->pc = 0x230F20u;
    // 0x230f20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f28: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x230f28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x230f2c: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x230f30: 0x8d088008  lw          $t0, -0x7FF8($t0)
    ctx->pc = 0x230f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934536)));
    // 0x230f34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f38: 0xc0686fa  jal         func_1A1BE8
    ctx->pc = 0x230F38u;
    SET_GPR_U32(ctx, 31, 0x230F40u);
    ctx->pc = 0x230F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F38u;
    // 0x230f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x230F38u, 0x230F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F40u;
label_230f40:
    // 0x230f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f44: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x230f48: 0xc08c7aa  jal         func_231EA8
    ctx->pc = 0x230F48u;
    SET_GPR_U32(ctx, 31, 0x230F50u);
    ctx->pc = 0x230F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F48u;
    // 0x230f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231EA8u, 0x230F48u, 0x230F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F50u;
label_230f50:
    // 0x230f50: 0x2a560005  slti        $s6, $s2, 0x5
    ctx->pc = 0x230f50u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x230f54: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x230f58u;
}
