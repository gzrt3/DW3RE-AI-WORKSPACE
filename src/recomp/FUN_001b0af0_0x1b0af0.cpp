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

// Function: FUN_001b0af0
// Address: 0x1b0af0 - 0x1b0b18
void FUN_001b0af0_0x1b0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0af0_0x1b0af0");
#endif

    ctx->pc = 0x1b0af0u;

    // 0x1b0af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0af4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1b0af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0afc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b08: 0xac628cf0  sw          $v0, -0x7310($v1)
    ctx->pc = 0x1b0b08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x288CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x288CF0u, _value); } while (0);
    // 0x1b0b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b10: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0B10u;
    SET_GPR_U32(ctx, 31, 0x1B0B18u);
    ctx->pc = 0x1B0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B10u;
    // 0x1b0b14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0B10u, 0x1B0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B18u;
}
