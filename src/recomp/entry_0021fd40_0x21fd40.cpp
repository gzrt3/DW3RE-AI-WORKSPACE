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

// Function: entry_0021fd40
// Address: 0x21fd40 - 0x21fd68
void entry_0021fd40_0x21fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd40_0x21fd40");
#endif

    switch (ctx->pc) {
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd5cu: goto label_21fd5c;
        default: break;
    }

    ctx->pc = 0x21fd40u;

    // 0x21fd40: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD40u;
    SET_GPR_U32(ctx, 31, 0x21FD48u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD40u, 0x21FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD48u;
label_21fd48:
    // 0x21fd48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD48u;
        // 0x21fd4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD68u;
            return;
        }
    }
    ctx->pc = 0x21FD50u;
    // 0x21fd50: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fd54: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FD54u;
    SET_GPR_U32(ctx, 31, 0x21FD5Cu);
    ctx->pc = 0x21FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD54u;
    // 0x21fd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD54u, 0x21FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD5Cu;
label_21fd5c:
    // 0x21fd5c: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x21FD5Cu;
    {
        const bool branch_taken_0x21fd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd5c) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FD64u;
    // 0x21fd64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fd68u;
}
