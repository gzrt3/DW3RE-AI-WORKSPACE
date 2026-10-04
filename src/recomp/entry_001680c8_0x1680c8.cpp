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

// Function: entry_001680c8
// Address: 0x1680c8 - 0x168100
void entry_001680c8_0x1680c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001680c8_0x1680c8");
#endif

    ctx->pc = 0x1680c8u;

label_1680c8:
    // 0x1680c8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1680c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1680cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1680d0: 0xe01821  addu        $v1, $a3, $zero
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1680d4: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x1680d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1680d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1680d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680dc: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1680dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680e0: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x1680e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1680e4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1680e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680e8: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1680e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1680ECu;
    {
        const bool branch_taken_0x1680ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0xa0e00004  sb          $zero, 0x4($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680ec) {
            ctx->pc = 0x1680C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1680c8;
        }
    }
    ctx->pc = 0x1680F4u;
    // 0x1680f4: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x1680f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
    // 0x1680f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1680F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F8u;
        // 0x1680fc: 0xaf8086ac  sw          $zero, -0x7954($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168100u;
}
