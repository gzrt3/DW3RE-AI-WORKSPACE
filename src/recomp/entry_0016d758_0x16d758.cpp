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

// Function: entry_0016d758
// Address: 0x16d758 - 0x16d794
void entry_0016d758_0x16d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d758_0x16d758");
#endif

    switch (ctx->pc) {
        case 0x16d774u: goto label_16d774;
        default: break;
    }

    ctx->pc = 0x16d758u;

    // 0x16d758: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d75c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d760: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16d760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x16d764: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D764u;
    {
        const bool branch_taken_0x16d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d764) {
            ctx->pc = 0x16D794u;
            return;
        }
    }
    ctx->pc = 0x16D76Cu;
    // 0x16d76c: 0xc08d8ee  jal         func_2363B8
    ctx->pc = 0x16D76Cu;
    SET_GPR_U32(ctx, 31, 0x16D774u);
    ctx->pc = 0x16D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D76Cu;
    // 0x16d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2363B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2363B8u, 0x16D76Cu, 0x16D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D774u;
label_16d774:
    // 0x16d774: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D774u;
    {
        const bool branch_taken_0x16d774 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d774) {
            ctx->pc = 0x16D794u;
            return;
        }
    }
    ctx->pc = 0x16D77Cu;
    // 0x16d77c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d780: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d784: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d78c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d790: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16d794u;
}
