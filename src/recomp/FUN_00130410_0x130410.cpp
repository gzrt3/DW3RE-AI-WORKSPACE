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

// Function: FUN_00130410
// Address: 0x130410 - 0x130458
void FUN_00130410_0x130410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130410_0x130410");
#endif

    switch (ctx->pc) {
        case 0x130448u: goto label_130448;
        default: break;
    }

    ctx->pc = 0x130410u;

    // 0x130410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130414: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13041c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13041cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130420: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x130420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x130424: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x130424u;
    {
        const bool branch_taken_0x130424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130424) {
            ctx->pc = 0x130454u;
            goto label_130454;
        }
    }
    ctx->pc = 0x13042Cu;
    // 0x13042c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x13042cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x130430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130434: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x130434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x130438: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13043c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130440: 0xc04e188  jal         func_138620
    ctx->pc = 0x130440u;
    SET_GPR_U32(ctx, 31, 0x130448u);
    ctx->pc = 0x130444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130440u;
    // 0x130444: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x130440u, 0x130448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130448u;
label_130448:
    // 0x130448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13044c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13044cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130450: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x130450u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
label_130454:
    // 0x130454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130458u;
}
