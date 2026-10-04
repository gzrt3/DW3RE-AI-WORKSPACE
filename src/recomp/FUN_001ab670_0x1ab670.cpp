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

// Function: FUN_001ab670
// Address: 0x1ab670 - 0x1ab6c4
void FUN_001ab670_0x1ab670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab670_0x1ab670");
#endif

    switch (ctx->pc) {
        case 0x1ab690u: goto label_1ab690;
        default: break;
    }

    ctx->pc = 0x1ab670u;

    // 0x1ab670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ab674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ab678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab67c: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1ab67cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1ab680: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AB680u;
    {
        const bool branch_taken_0x1ab680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB680u;
        // 0x1ab684: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab680) {
            ctx->pc = 0x1AB6ACu;
            goto label_1ab6ac;
        }
    }
    ctx->pc = 0x1AB688u;
    // 0x1ab688: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ab688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ab68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab690:
    // 0x1ab690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab694: 0x0  nop
    ctx->pc = 0x1ab694u;
    // NOP
    // 0x1ab698: 0x0  nop
    ctx->pc = 0x1ab698u;
    // NOP
    // 0x1ab69c: 0x0  nop
    ctx->pc = 0x1ab69cu;
    // NOP
    // 0x1ab6a0: 0x0  nop
    ctx->pc = 0x1ab6a0u;
    // NOP
    // 0x1ab6a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AB6A4u;
    {
        const bool branch_taken_0x1ab6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab6a4) {
            ctx->pc = 0x1AB690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab690;
        }
    }
    ctx->pc = 0x1AB6ACu;
label_1ab6ac:
    // 0x1ab6ac: 0x263045c0  addiu       $s0, $s1, 0x45C0
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17856));
    // 0x1ab6b0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ab6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6b8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1ab6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1ab6bc: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AB6BCu;
    SET_GPR_U32(ctx, 31, 0x1AB6C4u);
    ctx->pc = 0x1AB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6BCu;
    // 0x1ab6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AB6BCu, 0x1AB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6C4u;
}
