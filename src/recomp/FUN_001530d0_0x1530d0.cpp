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

// Function: FUN_001530d0
// Address: 0x1530d0 - 0x153120
void FUN_001530d0_0x1530d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001530d0_0x1530d0");
#endif

    switch (ctx->pc) {
        case 0x1530f4u: goto label_1530f4;
        case 0x153114u: goto label_153114;
        default: break;
    }

    ctx->pc = 0x1530d0u;

    // 0x1530d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1530d4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1530d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1530d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1530dc: 0x248459e0  addiu       $a0, $a0, 0x59E0
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23008));
    // 0x1530e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1530e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1530e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1530e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530e8: 0xaf8085d4  sw          $zero, -0x7A2C($gp)
    ctx->pc = 0x1530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936020), GPR_U32(ctx, 0));
    // 0x1530ec: 0xc041608  jal         func_105820
    ctx->pc = 0x1530ECu;
    SET_GPR_U32(ctx, 31, 0x1530F4u);
    ctx->pc = 0x1530F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530ECu;
    // 0x1530f0: 0xaf8085d8  sw          $zero, -0x7A28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105820u, 0x1530ECu, 0x1530F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530F4u;
label_1530f4:
    // 0x1530f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1530f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1530f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153104: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153108: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x15310c: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x15310Cu;
    SET_GPR_U32(ctx, 31, 0x153114u);
    ctx->pc = 0x153110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15310Cu;
    // 0x153110: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x15310Cu, 0x153114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153114u;
label_153114:
    // 0x153114: 0xff828618  sd          $v0, -0x79E8($gp)
    ctx->pc = 0x153114u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U64(ctx, 2));
    // 0x153118: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x153118u;
    SET_GPR_U32(ctx, 31, 0x153120u);
    ctx->pc = 0x15311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153118u;
    // 0x15311c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x153118u, 0x153120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153120u;
}
