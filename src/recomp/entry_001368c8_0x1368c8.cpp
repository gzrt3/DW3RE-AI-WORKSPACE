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

// Function: entry_001368c8
// Address: 0x1368c8 - 0x136904
void entry_001368c8_0x1368c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001368c8_0x1368c8");
#endif

    switch (ctx->pc) {
        case 0x1368d8u: goto label_1368d8;
        case 0x1368fcu: goto label_1368fc;
        default: break;
    }

    ctx->pc = 0x1368c8u;

    // 0x1368c8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1368cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1368ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368d0: 0xc04e188  jal         func_138620
    ctx->pc = 0x1368D0u;
    SET_GPR_U32(ctx, 31, 0x1368D8u);
    ctx->pc = 0x1368D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368D0u;
    // 0x1368d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1368D0u, 0x1368D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368D8u;
label_1368d8:
    // 0x1368d8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1368dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1368e0: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1368e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1368e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1368ec: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x1368ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
    // 0x1368f0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1368f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1368f4: 0xc04d39c  jal         func_134E70
    ctx->pc = 0x1368F4u;
    SET_GPR_U32(ctx, 31, 0x1368FCu);
    ctx->pc = 0x1368F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368F4u;
    // 0x1368f8: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E70u, 0x1368F4u, 0x1368FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368FCu;
label_1368fc:
    // 0x1368fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1368FCu;
    {
        const bool branch_taken_0x1368fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368fc) {
            ctx->pc = 0x136920u;
            return;
        }
    }
    ctx->pc = 0x136904u;
}
