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

// Function: FUN_001aee80
// Address: 0x1aee80 - 0x1aeec8
void FUN_001aee80_0x1aee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aee80_0x1aee80");
#endif

    ctx->pc = 0x1aee80u;

    // 0x1aee80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aee88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aee8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1aee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aee90: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aee90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1aee94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aee98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aee9c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1aeea0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aeea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1aeea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeea8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aeea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aeeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aeeb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeeb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeeb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeebc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aeec0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AEEC0u;
    SET_GPR_U32(ctx, 31, 0x1AEEC8u);
    ctx->pc = 0x1AEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEC0u;
    // 0x1aeec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AEEC0u, 0x1AEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEC8u;
}
