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

// Function: entry_00151168
// Address: 0x151168 - 0x151194
void entry_00151168_0x151168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151168_0x151168");
#endif

    switch (ctx->pc) {
        case 0x151170u: goto label_151170;
        default: break;
    }

    ctx->pc = 0x151168u;

label_151168:
    // 0x151168: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x151168u;
    SET_GPR_U32(ctx, 31, 0x151170u);
    ctx->pc = 0x15116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151168u;
    // 0x15116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x151168u, 0x151170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151170u;
label_151170:
    // 0x151170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151174: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x151178: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x151178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
    // 0x151180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151180) {
            ctx->pc = 0x151168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151168;
        }
    }
    ctx->pc = 0x151188u;
    // 0x151188: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x151188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x15118c: 0xc044a54  jal         func_112950
    ctx->pc = 0x15118Cu;
    SET_GPR_U32(ctx, 31, 0x151194u);
    ctx->pc = 0x151190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15118Cu;
    // 0x151190: 0x248467b0  addiu       $a0, $a0, 0x67B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112950u, 0x15118Cu, 0x151194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151194u;
}
