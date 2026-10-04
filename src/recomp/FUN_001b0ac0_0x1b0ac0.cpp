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

// Function: FUN_001b0ac0
// Address: 0x1b0ac0 - 0x1b0ae0
void FUN_001b0ac0_0x1b0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0ac0_0x1b0ac0");
#endif

    ctx->pc = 0x1b0ac0u;

    // 0x1b0ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0ac4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b0ac8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0ad0: 0xac408cf0  sw          $zero, -0x7310($v0)
    ctx->pc = 0x1b0ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x288CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x288CF0u, _value); } while (0);
    // 0x1b0ad4: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0ad8: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0AD8u;
    SET_GPR_U32(ctx, 31, 0x1B0AE0u);
    ctx->pc = 0x1B0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0AD8u;
    // 0x1b0adc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0AD8u, 0x1B0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AE0u;
}
