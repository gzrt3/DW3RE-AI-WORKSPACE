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

// Function: entry_001ecc48
// Address: 0x1ecc48 - 0x1ecc68
void entry_001ecc48_0x1ecc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc48_0x1ecc48");
#endif

    ctx->pc = 0x1ecc48u;

    // 0x1ecc48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc4c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x1ecc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC50u;
    {
        const bool branch_taken_0x1ecc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc50) {
            ctx->pc = 0x1ECC68u;
            return;
        }
    }
    ctx->pc = 0x1ECC58u;
    // 0x1ecc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc5c: 0x90224a1a  lbu         $v0, 0x4A1A($at)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18970)));
    // 0x1ecc60: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x1ECC60u;
    SET_GPR_U32(ctx, 31, 0x1ECC68u);
    ctx->pc = 0x1ECC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC60u;
    // 0x1ecc64: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC60u, 0x1ECC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC68u;
}
