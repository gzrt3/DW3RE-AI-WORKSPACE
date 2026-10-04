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

// Function: entry_0016d818
// Address: 0x16d818 - 0x16d85c
void entry_0016d818_0x16d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d818_0x16d818");
#endif

    switch (ctx->pc) {
        case 0x16d83cu: goto label_16d83c;
        default: break;
    }

    ctx->pc = 0x16d818u;

    // 0x16d818: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d81c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d820: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x16d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x16d824: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16D824u;
    {
        const bool branch_taken_0x16d824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d824) {
            ctx->pc = 0x16D85Cu;
            return;
        }
    }
    ctx->pc = 0x16D82Cu;
    // 0x16d82c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d830: 0x8c251eb8  lw          $a1, 0x1EB8($at)
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281EB8u));
    // 0x16d834: 0xc08d930  jal         func_2364C0
    ctx->pc = 0x16D834u;
    SET_GPR_U32(ctx, 31, 0x16D83Cu);
    ctx->pc = 0x16D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D834u;
    // 0x16d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364C0u, 0x16D834u, 0x16D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D83Cu;
label_16d83c:
    // 0x16d83c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D83Cu;
    {
        const bool branch_taken_0x16d83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d83c) {
            ctx->pc = 0x16D85Cu;
            return;
        }
    }
    ctx->pc = 0x16D844u;
    // 0x16d844: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d848: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d84c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d850: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d854: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d858: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16d85cu;
}
