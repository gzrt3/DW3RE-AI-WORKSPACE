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

// Function: entry_001ee200
// Address: 0x1ee200 - 0x1ee230
void entry_001ee200_0x1ee200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee200_0x1ee200");
#endif

    switch (ctx->pc) {
        case 0x1ee208u: goto label_1ee208;
        default: break;
    }

    ctx->pc = 0x1ee200u;

    // 0x1ee200: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE200u;
    SET_GPR_U32(ctx, 31, 0x1EE208u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE200u, 0x1EE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE208u;
label_1ee208:
    // 0x1ee208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee20c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE240u;
            return;
        }
    }
    ctx->pc = 0x1EE214u;
    // 0x1ee214: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE214u;
    {
        const bool branch_taken_0x1ee214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee214) {
            ctx->pc = 0x1EE250u;
            return;
        }
    }
    ctx->pc = 0x1EE21Cu;
    // 0x1ee21c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ee220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE220u;
    {
        const bool branch_taken_0x1ee220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee220) {
            ctx->pc = 0x1EE230u;
            return;
        }
    }
    ctx->pc = 0x1EE228u;
    // 0x1ee228: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE228u;
    {
        const bool branch_taken_0x1ee228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee228) {
            ctx->pc = 0x1EE250u;
            return;
        }
    }
    ctx->pc = 0x1EE230u;
}
