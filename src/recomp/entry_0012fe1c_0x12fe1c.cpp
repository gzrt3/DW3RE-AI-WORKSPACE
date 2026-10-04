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

// Function: entry_0012fe1c
// Address: 0x12fe1c - 0x12fe3c
void entry_0012fe1c_0x12fe1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe1c_0x12fe1c");
#endif

    switch (ctx->pc) {
        case 0x12fe24u: goto label_12fe24;
        case 0x12fe34u: goto label_12fe34;
        default: break;
    }

    ctx->pc = 0x12fe1cu;

    // 0x12fe1c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE1Cu;
    SET_GPR_U32(ctx, 31, 0x12FE24u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE1Cu, 0x12FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE24u;
label_12fe24:
    // 0x12fe24: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12FE24u;
    {
        const bool branch_taken_0x12fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE24u;
        // 0x12fe28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe24) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE2Cu;
    // 0x12fe2c: 0xc05efcc  jal         func_17BF30
    ctx->pc = 0x12FE2Cu;
    SET_GPR_U32(ctx, 31, 0x12FE34u);
    ctx->pc = 0x17BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF30u, 0x12FE2Cu, 0x12FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE34u;
label_12fe34:
    // 0x12fe34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12FE34u;
    {
        const bool branch_taken_0x12fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe34) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE3Cu;
}
