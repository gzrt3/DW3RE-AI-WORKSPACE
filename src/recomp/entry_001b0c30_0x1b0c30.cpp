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

// Function: entry_001b0c30
// Address: 0x1b0c30 - 0x1b0c64
void entry_001b0c30_0x1b0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c30_0x1b0c30");
#endif

    switch (ctx->pc) {
        case 0x1b0c40u: goto label_1b0c40;
        default: break;
    }

    ctx->pc = 0x1b0c30u;

    // 0x1b0c30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c38: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0C38u;
    SET_GPR_U32(ctx, 31, 0x1B0C40u);
    ctx->pc = 0x1B0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C38u;
    // 0x1b0c3c: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0C38u, 0x1B0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C40u;
label_1b0c40:
    // 0x1b0c40: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B0C40u;
    {
        const bool branch_taken_0x1b0c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C40u;
        // 0x1b0c44: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c40) {
            ctx->pc = 0x1B0CECu;
            return;
        }
    }
    ctx->pc = 0x1B0C48u;
    // 0x1b0c48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0C48u;
    {
        const bool branch_taken_0x1b0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C48u;
        // 0x1b0c4c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c48) {
            ctx->pc = 0x1B0C64u;
            return;
        }
    }
    ctx->pc = 0x1B0C50u;
    // 0x1b0c50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C64u;
            return;
        }
    }
    ctx->pc = 0x1B0C58u;
    // 0x1b0c58: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B0C58u;
    {
        const bool branch_taken_0x1b0c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C58u;
        // 0x1b0c5c: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c58) {
            ctx->pc = 0x1B0CD4u;
            return;
        }
    }
    ctx->pc = 0x1B0C60u;
    // 0x1b0c60: 0x1332c0  sll         $a2, $s3, 11
    ctx->pc = 0x1b0c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    ctx->pc = 0x1b0c64u;
}
