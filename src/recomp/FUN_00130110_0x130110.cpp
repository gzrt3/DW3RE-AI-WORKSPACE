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

// Function: FUN_00130110
// Address: 0x130110 - 0x130138
void FUN_00130110_0x130110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130110_0x130110");
#endif

    switch (ctx->pc) {
        case 0x130120u: goto label_130120;
        case 0x130128u: goto label_130128;
        case 0x130134u: goto label_130134;
        default: break;
    }

    ctx->pc = 0x130110u;

    // 0x130110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130118: 0xc064684  jal         func_191A10
    ctx->pc = 0x130118u;
    SET_GPR_U32(ctx, 31, 0x130120u);
    ctx->pc = 0x13011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130118u;
    // 0x13011c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A10u, 0x130118u, 0x130120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130120u;
label_130120:
    // 0x130120: 0xc07e7cc  jal         func_1F9F30
    ctx->pc = 0x130120u;
    SET_GPR_U32(ctx, 31, 0x130128u);
    ctx->pc = 0x130124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130120u;
    // 0x130124: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F30u, 0x130120u, 0x130128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130128u;
label_130128:
    // 0x130128: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x130128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13012c: 0xc07e694  jal         func_1F9A50
    ctx->pc = 0x13012Cu;
    SET_GPR_U32(ctx, 31, 0x130134u);
    ctx->pc = 0x130130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13012Cu;
    // 0x130130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9A50u, 0x13012Cu, 0x130134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130134u;
label_130134:
    // 0x130134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130138u;
}
