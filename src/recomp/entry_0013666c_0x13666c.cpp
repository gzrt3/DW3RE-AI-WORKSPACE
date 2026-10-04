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

// Function: entry_0013666c
// Address: 0x13666c - 0x1366b0
void entry_0013666c_0x13666c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013666c_0x13666c");
#endif

    switch (ctx->pc) {
        case 0x136690u: goto label_136690;
        default: break;
    }

    ctx->pc = 0x13666cu;

    // 0x13666c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x136670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136674: 0x9024a400  lbu         $a0, -0x5C00($at)
    ctx->pc = 0x136674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A400u));
    // 0x136678: 0x1483004e  bne         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136678u;
    {
        const bool branch_taken_0x136678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136678) {
            ctx->pc = 0x1367B4u;
            return;
        }
    }
    ctx->pc = 0x136680u;
    // 0x136680: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x136680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x136684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136688: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136688u;
    SET_GPR_U32(ctx, 31, 0x136690u);
    ctx->pc = 0x13668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136688u;
    // 0x13668c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136688u, 0x136690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136690u;
label_136690:
    // 0x136690: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x136690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x136694: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x136694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x136698: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x136698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x13669c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x13669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366a0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1366a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1366a4: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x1366a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x1366a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1366A8u;
    {
        const bool branch_taken_0x1366a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366A8u;
        // 0x1366ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366a8) {
            ctx->pc = 0x1367B8u;
            return;
        }
    }
    ctx->pc = 0x1366B0u;
}
