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

// Function: entry_001341c0
// Address: 0x1341c0 - 0x134224
void entry_001341c0_0x1341c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001341c0_0x1341c0");
#endif

    switch (ctx->pc) {
        case 0x1341ccu: goto label_1341cc;
        case 0x1341d8u: goto label_1341d8;
        case 0x1341e0u: goto label_1341e0;
        case 0x1341e8u: goto label_1341e8;
        case 0x134210u: goto label_134210;
        default: break;
    }

    ctx->pc = 0x1341c0u;

    // 0x1341c0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1341c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1341c4: 0xc04c38c  jal         func_130E30
    ctx->pc = 0x1341C4u;
    SET_GPR_U32(ctx, 31, 0x1341CCu);
    ctx->pc = 0x1341C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341C4u;
    // 0x1341c8: 0x2484a038  addiu       $a0, $a0, -0x5FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E30u, 0x1341C4u, 0x1341CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341CCu;
label_1341cc:
    // 0x1341cc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1341d0: 0xc04d094  jal         func_134250
    ctx->pc = 0x1341D0u;
    SET_GPR_U32(ctx, 31, 0x1341D8u);
    ctx->pc = 0x1341D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341D0u;
    // 0x1341d4: 0x2484a044  addiu       $a0, $a0, -0x5FBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134250u, 0x1341D0u, 0x1341D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341D8u;
label_1341d8:
    // 0x1341d8: 0xc08bb48  jal         func_22ED20
    ctx->pc = 0x1341D8u;
    SET_GPR_U32(ctx, 31, 0x1341E0u);
    ctx->pc = 0x22ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED20u, 0x1341D8u, 0x1341E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341E0u;
label_1341e0:
    // 0x1341e0: 0xc08b944  jal         func_22E510
    ctx->pc = 0x1341E0u;
    SET_GPR_U32(ctx, 31, 0x1341E8u);
    ctx->pc = 0x22E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E510u, 0x1341E0u, 0x1341E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341E8u;
label_1341e8:
    // 0x1341e8: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x1341ec: 0x2610a3c4  addiu       $s0, $s0, -0x5C3C
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943684));
    // 0x1341f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1341f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3C4u));
    // 0x1341f4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1341F4u;
    {
        const bool branch_taken_0x1341f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341f4) {
            ctx->pc = 0x134224u;
            return;
        }
    }
    ctx->pc = 0x1341FCu;
    // 0x1341fc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134208: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x134208u;
    SET_GPR_U32(ctx, 31, 0x134210u);
    ctx->pc = 0x13420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134208u;
    // 0x13420c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x134208u, 0x134210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134210u;
label_134210:
    // 0x134210: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13421c: 0xc07f188  jal         func_1FC620
    ctx->pc = 0x13421Cu;
    SET_GPR_U32(ctx, 31, 0x134224u);
    ctx->pc = 0x134220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13421Cu;
    // 0x134220: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC620u, 0x13421Cu, 0x134224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134224u;
}
