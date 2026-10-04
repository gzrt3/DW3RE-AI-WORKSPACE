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

// Function: FUN_001b72c0
// Address: 0x1b72c0 - 0x1b72fc
void FUN_001b72c0_0x1b72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b72c0_0x1b72c0");
#endif

    ctx->pc = 0x1b72c0u;

    // 0x1b72c0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1b72c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b72c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b72c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b72cc: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x1b72ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x1b72d0: 0x21d3e  dsrl32      $v1, $v0, 20
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x1b72d4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x1b72d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1b72d8: 0x306707ff  andi        $a3, $v1, 0x7FF
    ctx->pc = 0x1b72d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1b72dc: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1b72dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b72e0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B72E0u;
    {
        const bool branch_taken_0x1b72e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72E0u;
        // 0x1b72e4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72e0) {
            ctx->pc = 0x1B72F8u;
            goto label_1b72f8;
        }
    }
    ctx->pc = 0x1B72E8u;
    // 0x1b72e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b72ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ECu;
        // 0x1b72f0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72F4u;
    // 0x1b72f4: 0x0  nop
    ctx->pc = 0x1b72f4u;
    // NOP
label_1b72f8:
    // 0x1b72f8: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->pc = 0x1b72fcu;
}
