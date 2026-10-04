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

// Function: entry_00131f0c
// Address: 0x131f0c - 0x131f28
void entry_00131f0c_0x131f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f0c_0x131f0c");
#endif

    ctx->pc = 0x131f0cu;

    // 0x131f0c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x131f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x131f10: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x131f10u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x131f14: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x131f14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x131f18: 0x9226000a  lbu         $a2, 0xA($s1)
    ctx->pc = 0x131f18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x131f1c: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x131f1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131f20: 0xc05b024  jal         func_16C090
    ctx->pc = 0x131F20u;
    SET_GPR_U32(ctx, 31, 0x131F28u);
    ctx->pc = 0x131F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F20u;
    // 0x131f24: 0x2448003c  addiu       $t0, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C090u, 0x131F20u, 0x131F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F28u;
}
