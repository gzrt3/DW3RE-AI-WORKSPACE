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

// Function: entry_00194928
// Address: 0x194928 - 0x194970
void entry_00194928_0x194928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194928_0x194928");
#endif

    ctx->pc = 0x194928u;

    // 0x194928: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x194928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x19492c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x194930: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x194930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x194934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x194934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x194938: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x194938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x19493c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19493cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x194940: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x194940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x194944: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x194944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x194948: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x194948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x19494c: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x19494cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x194950: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x194950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x194954: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x194954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x194958: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x194958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x19495c: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x19495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x194960: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x194960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x194964: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x194964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x194968: 0x3e00008  jr          $ra
    ctx->pc = 0x194968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194968u;
        // 0x19496c: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194970u;
}
