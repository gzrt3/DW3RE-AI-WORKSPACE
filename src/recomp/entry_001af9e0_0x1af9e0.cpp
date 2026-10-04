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

// Function: entry_001af9e0
// Address: 0x1af9e0 - 0x1afa18
void entry_001af9e0_0x1af9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af9e0_0x1af9e0");
#endif

    switch (ctx->pc) {
        case 0x1af9fcu: goto label_1af9fc;
        case 0x1afa04u: goto label_1afa04;
        default: break;
    }

    ctx->pc = 0x1af9e0u;

    // 0x1af9e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af9e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af9e8: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x375F50u));
    // 0x1af9ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1af9f0: 0xac71729c  sw          $s1, 0x729C($v1)
    ctx->pc = 0x1af9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x28729Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x28729Cu, _value); } while (0);
    // 0x1af9f4: 0xc0691c8  jal         func_1A4720
    ctx->pc = 0x1AF9F4u;
    SET_GPR_U32(ctx, 31, 0x1AF9FCu);
    ctx->pc = 0x1AF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9F4u;
    // 0x1af9f8: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4720u, 0x1AF9F4u, 0x1AF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9FCu;
label_1af9fc:
    // 0x1af9fc: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x1AF9FCu;
    SET_GPR_U32(ctx, 31, 0x1AFA04u);
    ctx->pc = 0x1AFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9FCu;
    // 0x1afa00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x1AF9FCu, 0x1AFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA04u;
        // 0x1afa08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFA20u;
            return;
        }
    }
    ctx->pc = 0x1AFA0Cu;
    // 0x1afa0c: 0x8e0472a8  lw          $a0, 0x72A8($s0)
    ctx->pc = 0x1afa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
    // 0x1afa10: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFA10u;
    SET_GPR_U32(ctx, 31, 0x1AFA18u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFA10u, 0x1AFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA18u;
}
