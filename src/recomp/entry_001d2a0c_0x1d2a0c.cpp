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

// Function: entry_001d2a0c
// Address: 0x1d2a0c - 0x1d2a50
void entry_001d2a0c_0x1d2a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a0c_0x1d2a0c");
#endif

    switch (ctx->pc) {
        case 0x1d2a3cu: goto label_1d2a3c;
        default: break;
    }

    ctx->pc = 0x1d2a0cu;

    // 0x1d2a0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d2a14: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d2a18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d2a1c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1d2a20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d2a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2a24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a30: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d2a34: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1D2A34u;
    SET_GPR_U32(ctx, 31, 0x1D2A3Cu);
    ctx->pc = 0x1D2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A34u;
    // 0x1d2a38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D2A34u, 0x1D2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A3Cu;
label_1d2a3c:
    // 0x1d2a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A40u;
        // 0x1d2a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2A48u;
    // 0x1d2a48: 0x0  nop
    ctx->pc = 0x1d2a48u;
    // NOP
    // 0x1d2a4c: 0x0  nop
    ctx->pc = 0x1d2a4cu;
    // NOP
    ctx->pc = 0x1d2a50u;
}
