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

// Function: entry_0021fd08
// Address: 0x21fd08 - 0x21fd30
void entry_0021fd08_0x21fd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd08_0x21fd08");
#endif

    switch (ctx->pc) {
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd24u: goto label_21fd24;
        default: break;
    }

    ctx->pc = 0x21fd08u;

    // 0x21fd08: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD08u;
    SET_GPR_U32(ctx, 31, 0x21FD10u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD08u, 0x21FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD10u;
label_21fd10:
    // 0x21fd10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FD10u;
    {
        const bool branch_taken_0x21fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD10u;
        // 0x21fd14: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd10) {
            ctx->pc = 0x21FD30u;
            return;
        }
    }
    ctx->pc = 0x21FD18u;
    // 0x21fd18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fd1c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FD1Cu;
    SET_GPR_U32(ctx, 31, 0x21FD24u);
    ctx->pc = 0x21FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD1Cu;
    // 0x21fd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD1Cu, 0x21FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FD24u;
    {
        const bool branch_taken_0x21fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD24u;
        // 0x21fd28: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd24) {
            ctx->pc = 0x21FD40u;
            return;
        }
    }
    ctx->pc = 0x21FD2Cu;
    // 0x21fd2c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fd30u;
}
