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

// Function: entry_00124fe8
// Address: 0x124fe8 - 0x124ffc
void entry_00124fe8_0x124fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fe8_0x124fe8");
#endif

    ctx->pc = 0x124fe8u;

    // 0x124fe8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x124fec: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x124fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    // 0x124ff0: 0x960402f8  lhu         $a0, 0x2F8($s0)
    ctx->pc = 0x124ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x124ff4: 0xc07139c  jal         func_1C4E70
    ctx->pc = 0x124FF4u;
    SET_GPR_U32(ctx, 31, 0x124FFCu);
    ctx->pc = 0x124FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FF4u;
    // 0x124ff8: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E70u, 0x124FF4u, 0x124FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FFCu;
}
