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

// Function: entry_0021fea8
// Address: 0x21fea8 - 0x21fed0
void entry_0021fea8_0x21fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fea8_0x21fea8");
#endif

    switch (ctx->pc) {
        case 0x21feb0u: goto label_21feb0;
        case 0x21fec4u: goto label_21fec4;
        default: break;
    }

    ctx->pc = 0x21fea8u;

    // 0x21fea8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FEA8u;
    SET_GPR_U32(ctx, 31, 0x21FEB0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FEA8u, 0x21FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEB0u;
label_21feb0:
    // 0x21feb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEB0u;
    {
        const bool branch_taken_0x21feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEB0u;
        // 0x21feb4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feb0) {
            ctx->pc = 0x21FED0u;
            return;
        }
    }
    ctx->pc = 0x21FEB8u;
    // 0x21feb8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21febc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FEBCu;
    SET_GPR_U32(ctx, 31, 0x21FEC4u);
    ctx->pc = 0x21FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEBCu;
    // 0x21fec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEBCu, 0x21FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEC4u;
label_21fec4:
    // 0x21fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FEE8u;
            return;
        }
    }
    ctx->pc = 0x21FECCu;
    // 0x21fecc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x21fed0u;
}
