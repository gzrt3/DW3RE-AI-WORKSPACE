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

// Function: FUN_00125b10
// Address: 0x125b10 - 0x125b2c
void FUN_00125b10_0x125b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125b10_0x125b10");
#endif

    switch (ctx->pc) {
        case 0x125b24u: goto label_125b24;
        default: break;
    }

    ctx->pc = 0x125b10u;

    // 0x125b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125b1c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x125B1Cu;
    SET_GPR_U32(ctx, 31, 0x125B24u);
    ctx->pc = 0x125B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B1Cu;
    // 0x125b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x125B1Cu, 0x125B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B24u;
label_125b24:
    // 0x125b24: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x125B24u;
    SET_GPR_U32(ctx, 31, 0x125B2Cu);
    ctx->pc = 0x125B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B24u;
    // 0x125b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x125B24u, 0x125B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B2Cu;
}
