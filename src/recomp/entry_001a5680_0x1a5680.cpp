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

// Function: entry_001a5680
// Address: 0x1a5680 - 0x1a56b8
void entry_001a5680_0x1a5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5680_0x1a5680");
#endif

    switch (ctx->pc) {
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56b4u: goto label_1a56b4;
        default: break;
    }

    ctx->pc = 0x1a5680u;

    // 0x1a5680: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A5680u;
    {
        const bool branch_taken_0x1a5680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5680u;
        // 0x1a5684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5680) {
            ctx->pc = 0x1A56B8u;
            return;
        }
    }
    ctx->pc = 0x1A5688u;
    // 0x1a5688: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a568c: 0x24430ec8  addiu       $v1, $v0, 0xEC8
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3784));
    // 0x1a5690: 0xac400ec8  sw          $zero, 0xEC8($v0)
    ctx->pc = 0x1a5690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x370EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370EC8u, _value); } while (0);
    // 0x1a5694: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a5694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5698: 0xc069190  jal         func_1A4640
    ctx->pc = 0x1A5698u;
    SET_GPR_U32(ctx, 31, 0x1A56A0u);
    ctx->pc = 0x1A569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5698u;
    // 0x1a569c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4640u, 0x1A5698u, 0x1A56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A0u;
label_1a56a0:
    // 0x1a56a0: 0xc0691c4  jal         func_1A4710
    ctx->pc = 0x1A56A0u;
    SET_GPR_U32(ctx, 31, 0x1A56A8u);
    ctx->pc = 0x1A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4710u, 0x1A56A0u, 0x1A56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A8u;
label_1a56a8:
    // 0x1a56a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a56a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56ac: 0xc0691ac  jal         func_1A46B0
    ctx->pc = 0x1A56ACu;
    SET_GPR_U32(ctx, 31, 0x1A56B4u);
    ctx->pc = 0x1A56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56ACu;
    // 0x1a56b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A46B0u, 0x1A56ACu, 0x1A56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56B4u;
label_1a56b4:
    // 0x1a56b4: 0x8e025b58  lw          $v0, 0x5B58($s0)
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23384)));
    ctx->pc = 0x1a56b8u;
}
