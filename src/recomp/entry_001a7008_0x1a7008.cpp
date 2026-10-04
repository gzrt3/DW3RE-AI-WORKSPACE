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

// Function: entry_001a7008
// Address: 0x1a7008 - 0x1a7068
void entry_001a7008_0x1a7008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7008_0x1a7008");
#endif

    switch (ctx->pc) {
        case 0x1a700cu: goto label_1a700c;
        default: break;
    }

    ctx->pc = 0x1a7008u;

    // 0x1a7008: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_1a700c:
    if (ctx->pc == 0x1A700Cu) {
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7010u;
        goto label_fallthrough_0x1a7008;
    }
    ctx->pc = 0x1A7008u;
    {
        const bool branch_taken_0x1a7008 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7008) {
            ctx->pc = 0x1A705Cu;
            goto label_1a705c;
        }
    }
label_fallthrough_0x1a7008:
    ctx->pc = 0x1A7010u;
    // 0x1a7010: 0xf  sync
    ctx->pc = 0x1a7010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7014: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a7014u;
    // CACHE instruction (ignored)
    // 0x1a7018: 0xf  sync
    ctx->pc = 0x1a7018u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a701c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1a701cu;
    // CACHE instruction (ignored)
    // 0x1a7020: 0xf  sync
    ctx->pc = 0x1a7020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7024: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1a7024u;
    // CACHE instruction (ignored)
    // 0x1a7028: 0xf  sync
    ctx->pc = 0x1a7028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a702c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1a702cu;
    // CACHE instruction (ignored)
    // 0x1a7030: 0xf  sync
    ctx->pc = 0x1a7030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7034: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1a7034u;
    // CACHE instruction (ignored)
    // 0x1a7038: 0xf  sync
    ctx->pc = 0x1a7038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a703c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1a703cu;
    // CACHE instruction (ignored)
    // 0x1a7040: 0xf  sync
    ctx->pc = 0x1a7040u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7044: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1a7044u;
    // CACHE instruction (ignored)
    // 0x1a7048: 0xf  sync
    ctx->pc = 0x1a7048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a704c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1a704cu;
    // CACHE instruction (ignored)
    // 0x1a7050: 0xf  sync
    ctx->pc = 0x1a7050u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7054: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A7054u;
    {
        const bool branch_taken_0x1a7054 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1A7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7054u;
        // 0x1a7058: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7054) {
            ctx->pc = 0x1A700Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a700c;
        }
    }
    ctx->pc = 0x1A705Cu;
label_1a705c:
    // 0x1a705c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7064u;
    // 0x1a7064: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A706Cu;
}
