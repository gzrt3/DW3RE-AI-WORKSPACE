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

// Function: entry_00187914
// Address: 0x187914 - 0x18792c
void entry_00187914_0x187914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187914_0x187914");
#endif

    ctx->pc = 0x187914u;

    // 0x187914: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x187914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x187918: 0x3063000a  andi        $v1, $v1, 0xA
    ctx->pc = 0x187918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10);
    // 0x18791c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18791Cu;
    {
        const bool branch_taken_0x18791c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18791c) {
            ctx->pc = 0x18792Cu;
            return;
        }
    }
    ctx->pc = 0x187924u;
    // 0x187924: 0xc061f98  jal         func_187E60
    ctx->pc = 0x187924u;
    SET_GPR_U32(ctx, 31, 0x18792Cu);
    ctx->pc = 0x187928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187924u;
    // 0x187928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187E60u, 0x187924u, 0x18792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18792Cu;
}
