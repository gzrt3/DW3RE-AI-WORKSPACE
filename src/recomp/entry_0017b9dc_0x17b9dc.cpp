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

// Function: entry_0017b9dc
// Address: 0x17b9dc - 0x17ba10
void entry_0017b9dc_0x17b9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9dc_0x17b9dc");
#endif

    ctx->pc = 0x17b9dcu;

    // 0x17b9dc: 0x0  nop
    ctx->pc = 0x17b9dcu;
    // NOP
    // 0x17b9e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17b9e4: 0x2d230002  sltiu       $v1, $t1, 0x2
    ctx->pc = 0x17b9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b9e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17B9E8u;
    {
        const bool branch_taken_0x17b9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9E8u;
        // 0x17b9ec: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9e8) {
            ctx->pc = 0x17B9B4u;
            return;
        }
    }
    ctx->pc = 0x17B9F0u;
    // 0x17b9f0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x17b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17b9f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17b9f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9F8u;
    {
        const bool branch_taken_0x17b9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9f8) {
            ctx->pc = 0x17BA08u;
            goto label_17ba08;
        }
    }
    ctx->pc = 0x17BA00u;
    // 0x17ba00: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x17BA00u;
    {
        const bool branch_taken_0x17ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA00u;
        // 0x17ba04: 0x256b0044  addiu       $t3, $t3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba00) {
            ctx->pc = 0x17B9ACu;
            return;
        }
    }
    ctx->pc = 0x17BA08u;
label_17ba08:
    // 0x17ba08: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA10u;
}
