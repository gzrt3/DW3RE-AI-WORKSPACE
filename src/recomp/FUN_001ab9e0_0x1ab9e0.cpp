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

// Function: FUN_001ab9e0
// Address: 0x1ab9e0 - 0x1aba48
void FUN_001ab9e0_0x1ab9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab9e0_0x1ab9e0");
#endif

    switch (ctx->pc) {
        case 0x1aba30u: goto label_1aba30;
        default: break;
    }

    ctx->pc = 0x1ab9e0u;

    // 0x1ab9e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ab9e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab9e8: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x285C10u));
    // 0x1ab9ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab9f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB9F0u;
    {
        const bool branch_taken_0x1ab9f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F0u;
        // 0x1ab9f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f0) {
            ctx->pc = 0x1ABA00u;
            goto label_1aba00;
        }
    }
    ctx->pc = 0x1AB9F8u;
    // 0x1ab9f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB9F8u;
    {
        const bool branch_taken_0x1ab9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F8u;
        // 0x1ab9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f8) {
            ctx->pc = 0x1ABA40u;
            goto label_1aba40;
        }
    }
    ctx->pc = 0x1ABA00u;
label_1aba00:
    // 0x1aba00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aba00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aba04: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1aba08: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1aba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1aba0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aba10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aba14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aba1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba20: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1aba24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aba24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aba28: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ABA28u;
    SET_GPR_U32(ctx, 31, 0x1ABA30u);
    ctx->pc = 0x1ABA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA28u;
    // 0x1aba2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ABA28u, 0x1ABA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA30u;
label_1aba30:
    // 0x1aba30: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA30u;
    {
        const bool branch_taken_0x1aba30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aba30) {
            ctx->pc = 0x1ABA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA30u;
            // 0x1aba34: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA40u;
            goto label_1aba40;
        }
    }
    ctx->pc = 0x1ABA38u;
    // 0x1aba38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aba3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1aba40:
    // 0x1aba40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aba44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aba44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1aba48u;
}
