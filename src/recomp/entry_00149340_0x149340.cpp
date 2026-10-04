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

// Function: entry_00149340
// Address: 0x149340 - 0x14935c
void entry_00149340_0x149340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149340_0x149340");
#endif

    switch (ctx->pc) {
        case 0x14934cu: goto label_14934c;
        default: break;
    }

    ctx->pc = 0x149340u;

    // 0x149340: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x149340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x149344: 0xc05257c  jal         func_1495F0
    ctx->pc = 0x149344u;
    SET_GPR_U32(ctx, 31, 0x14934Cu);
    ctx->pc = 0x149348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149344u;
    // 0x149348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x149344u, 0x14934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14934Cu;
label_14934c:
    // 0x14934c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14934Cu;
    {
        const bool branch_taken_0x14934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14934c) {
            ctx->pc = 0x14935Cu;
            return;
        }
    }
    ctx->pc = 0x149354u;
    // 0x149354: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149354u;
    {
        const bool branch_taken_0x149354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149354u;
        // 0x149358: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149354) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x14935Cu;
}
