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

// Function: entry_0021edd4
// Address: 0x21edd4 - 0x21edf8
void entry_0021edd4_0x21edd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021edd4_0x21edd4");
#endif

    switch (ctx->pc) {
        case 0x21edf0u: goto label_21edf0;
        default: break;
    }

    ctx->pc = 0x21edd4u;

    // 0x21edd4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21edd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21eddc: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x21ede0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDE0u;
    {
        const bool branch_taken_0x21ede0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE0u;
        // 0x21ede4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede0) {
            ctx->pc = 0x21EDF8u;
            return;
        }
    }
    ctx->pc = 0x21EDE8u;
    // 0x21ede8: 0xc087e84  jal         func_21FA10
    ctx->pc = 0x21EDE8u;
    SET_GPR_U32(ctx, 31, 0x21EDF0u);
    ctx->pc = 0x21EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDE8u;
    // 0x21edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA10u, 0x21EDE8u, 0x21EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDF0u;
label_21edf0:
    // 0x21edf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21EDF0u;
    {
        const bool branch_taken_0x21edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF0u;
        // 0x21edf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf0) {
            ctx->pc = 0x21EE28u;
            return;
        }
    }
    ctx->pc = 0x21EDF8u;
}
