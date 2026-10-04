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

// Function: entry_0022f8e4
// Address: 0x22f8e4 - 0x22f914
void entry_0022f8e4_0x22f8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f8e4_0x22f8e4");
#endif

    switch (ctx->pc) {
        case 0x22f90cu: goto label_22f90c;
        default: break;
    }

    ctx->pc = 0x22f8e4u;

    // 0x22f8e4: 0x0  nop
    ctx->pc = 0x22f8e4u;
    // NOP
    // 0x22f8e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f8ec: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f8f0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F8F0u;
    {
        const bool branch_taken_0x22f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8f0) {
            ctx->pc = 0x22F8BCu;
            return;
        }
    }
    ctx->pc = 0x22F8F8u;
    // 0x22f8f8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f8fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F914u;
            return;
        }
    }
    ctx->pc = 0x22F904u;
    // 0x22f904: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F904u;
    SET_GPR_U32(ctx, 31, 0x22F90Cu);
    ctx->pc = 0x22F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F904u;
    // 0x22f908: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F904u, 0x22F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F90Cu;
label_22f90c:
    // 0x22f90c: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F90Cu;
    SET_GPR_U32(ctx, 31, 0x22F914u);
    ctx->pc = 0x22F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F90Cu;
    // 0x22f910: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F90Cu, 0x22F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F914u;
}
