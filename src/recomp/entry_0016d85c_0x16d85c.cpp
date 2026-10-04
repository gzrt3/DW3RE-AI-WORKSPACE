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

// Function: entry_0016d85c
// Address: 0x16d85c - 0x16d898
void entry_0016d85c_0x16d85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d85c_0x16d85c");
#endif

    switch (ctx->pc) {
        case 0x16d878u: goto label_16d878;
        default: break;
    }

    ctx->pc = 0x16d85cu;

    // 0x16d85c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d860: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d864: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16d864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x16d868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D868u;
    {
        const bool branch_taken_0x16d868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d868) {
            ctx->pc = 0x16D898u;
            return;
        }
    }
    ctx->pc = 0x16D870u;
    // 0x16d870: 0xc08d99a  jal         func_236668
    ctx->pc = 0x16D870u;
    SET_GPR_U32(ctx, 31, 0x16D878u);
    ctx->pc = 0x16D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D870u;
    // 0x16d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236668u, 0x16D870u, 0x16D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D878u;
label_16d878:
    // 0x16d878: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D878u;
    {
        const bool branch_taken_0x16d878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d878) {
            ctx->pc = 0x16D898u;
            return;
        }
    }
    ctx->pc = 0x16D880u;
    // 0x16d880: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d884: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x16d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16d888: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d88c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d890: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d894: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16d898u;
}
