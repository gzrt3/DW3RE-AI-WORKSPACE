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

// Function: entry_001d5874
// Address: 0x1d5874 - 0x1d58a0
void entry_001d5874_0x1d5874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5874_0x1d5874");
#endif

    ctx->pc = 0x1d5874u;

    // 0x1d5874: 0x0  nop
    ctx->pc = 0x1d5874u;
    // NOP
    // 0x1d5878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5880: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5884: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5888: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d588c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d5890: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d5894: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1d5894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d5898: 0xc05b390  jal         func_16CE40
    ctx->pc = 0x1D5898u;
    SET_GPR_U32(ctx, 31, 0x1D58A0u);
    ctx->pc = 0x1D589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5898u;
    // 0x1d589c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE40u, 0x1D5898u, 0x1D58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58A0u;
}
