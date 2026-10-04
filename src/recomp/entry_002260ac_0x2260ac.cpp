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

// Function: entry_002260ac
// Address: 0x2260ac - 0x2260d4
void entry_002260ac_0x2260ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002260ac_0x2260ac");
#endif

    switch (ctx->pc) {
        case 0x2260b4u: goto label_2260b4;
        case 0x2260ccu: goto label_2260cc;
        default: break;
    }

    ctx->pc = 0x2260acu;

    // 0x2260ac: 0xc044894  jal         func_112250
    ctx->pc = 0x2260ACu;
    SET_GPR_U32(ctx, 31, 0x2260B4u);
    ctx->pc = 0x2260B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260ACu;
    // 0x2260b0: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2260ACu, 0x2260B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260B4u;
label_2260b4:
    // 0x2260b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2260B4u;
    {
        const bool branch_taken_0x2260b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B4u;
        // 0x2260b8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260b4) {
            ctx->pc = 0x2260D4u;
            return;
        }
    }
    ctx->pc = 0x2260BCu;
    // 0x2260bc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2260c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2260c4: 0xc05da58  jal         func_176960
    ctx->pc = 0x2260C4u;
    SET_GPR_U32(ctx, 31, 0x2260CCu);
    ctx->pc = 0x2260C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260C4u;
    // 0x2260c8: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x2260C4u, 0x2260CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260CCu;
label_2260cc:
    // 0x2260cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2260CCu;
    {
        const bool branch_taken_0x2260cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260cc) {
            ctx->pc = 0x226134u;
            return;
        }
    }
    ctx->pc = 0x2260D4u;
}
