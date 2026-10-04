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

// Function: FUN_00130460
// Address: 0x130460 - 0x130498
void FUN_00130460_0x130460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130460_0x130460");
#endif

    switch (ctx->pc) {
        case 0x130494u: goto label_130494;
        default: break;
    }

    ctx->pc = 0x130460u;

    // 0x130460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130464: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13046c: 0x8c25a3e0  lw          $a1, -0x5C20($at)
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130470: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x130470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x130474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130474u;
    {
        const bool branch_taken_0x130474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130474) {
            ctx->pc = 0x130494u;
            goto label_130494;
        }
    }
    ctx->pc = 0x13047Cu;
    // 0x13047c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x130480: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130484: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x130484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x130488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13048c: 0xc0706f4  jal         func_1C1BD0
    ctx->pc = 0x13048Cu;
    SET_GPR_U32(ctx, 31, 0x130494u);
    ctx->pc = 0x130490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13048Cu;
    // 0x130490: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BD0u, 0x13048Cu, 0x130494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130494u;
label_130494:
    // 0x130494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130498u;
}
