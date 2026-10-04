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

// Function: entry_0021fc70
// Address: 0x21fc70 - 0x21fc98
void entry_0021fc70_0x21fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fc70_0x21fc70");
#endif

    switch (ctx->pc) {
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc8cu: goto label_21fc8c;
        default: break;
    }

    ctx->pc = 0x21fc70u;

    // 0x21fc70: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC70u;
    SET_GPR_U32(ctx, 31, 0x21FC78u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC70u, 0x21FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC78u;
label_21fc78:
    // 0x21fc78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FC78u;
    {
        const bool branch_taken_0x21fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC78u;
        // 0x21fc7c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc78) {
            ctx->pc = 0x21FC98u;
            return;
        }
    }
    ctx->pc = 0x21FC80u;
    // 0x21fc80: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fc84: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FC84u;
    SET_GPR_U32(ctx, 31, 0x21FC8Cu);
    ctx->pc = 0x21FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC84u;
    // 0x21fc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FC84u, 0x21FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC8Cu;
label_21fc8c:
    // 0x21fc8c: 0x10400200  beqz        $v0, . + 4 + (0x200 << 2)
    ctx->pc = 0x21FC8Cu;
    {
        const bool branch_taken_0x21fc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc8c) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FC94u;
    // 0x21fc94: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fc98u;
}
