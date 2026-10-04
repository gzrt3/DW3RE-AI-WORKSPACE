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

// Function: entry_0021ffc4
// Address: 0x21ffc4 - 0x21ffec
void entry_0021ffc4_0x21ffc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ffc4_0x21ffc4");
#endif

    switch (ctx->pc) {
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffe0u: goto label_21ffe0;
        default: break;
    }

    ctx->pc = 0x21ffc4u;

    // 0x21ffc4: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FFC4u;
    SET_GPR_U32(ctx, 31, 0x21FFCCu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FFC4u, 0x21FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFCCu;
label_21ffcc:
    // 0x21ffcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FFCCu;
    {
        const bool branch_taken_0x21ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFCCu;
        // 0x21ffd0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffcc) {
            ctx->pc = 0x21FFECu;
            return;
        }
    }
    ctx->pc = 0x21FFD4u;
    // 0x21ffd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21ffd8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FFD8u;
    SET_GPR_U32(ctx, 31, 0x21FFE0u);
    ctx->pc = 0x21FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD8u;
    // 0x21ffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFD8u, 0x21FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x1040012b  beqz        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x21FFE0u;
    {
        const bool branch_taken_0x21ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffe0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FFE8u;
    // 0x21ffe8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21ffecu;
}
