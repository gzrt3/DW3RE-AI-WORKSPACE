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

// Function: entry_00217478
// Address: 0x217478 - 0x2174b8
void entry_00217478_0x217478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217478_0x217478");
#endif

    switch (ctx->pc) {
        case 0x2174b4u: goto label_2174b4;
        default: break;
    }

    ctx->pc = 0x217478u;

    // 0x217478: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21747c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21747Cu;
    {
        const bool branch_taken_0x21747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21747c) {
            ctx->pc = 0x2174B8u;
            return;
        }
    }
    ctx->pc = 0x217484u;
    // 0x217484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x217488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21748c: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x21748cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217490: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x217490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x217494: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x217494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x217498: 0xe60d0010  swc1        $f13, 0x10($s0)
    ctx->pc = 0x217498u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x21749c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x21749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2174a0: 0xe60e0018  swc1        $f14, 0x18($s0)
    ctx->pc = 0x2174a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2174a4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2174a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2174a8: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
    // 0x2174ac: 0xc05eff8  jal         func_17BFE0
    ctx->pc = 0x2174ACu;
    SET_GPR_U32(ctx, 31, 0x2174B4u);
    ctx->pc = 0x2174B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174ACu;
    // 0x2174b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x2174ACu, 0x2174B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174B4u;
label_2174b4:
    // 0x2174b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2174b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x2174b8u;
}
