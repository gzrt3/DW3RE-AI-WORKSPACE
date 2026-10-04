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

// Function: entry_001aba70
// Address: 0x1aba70 - 0x1abab0
void entry_001aba70_0x1aba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba70_0x1aba70");
#endif

    switch (ctx->pc) {
        case 0x1abaa0u: goto label_1abaa0;
        default: break;
    }

    ctx->pc = 0x1aba70u;

    // 0x1aba70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aba74: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1aba78: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1aba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1aba7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aba80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aba80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aba84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba90: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1aba94: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aba94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aba98: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ABA98u;
    SET_GPR_U32(ctx, 31, 0x1ABAA0u);
    ctx->pc = 0x1ABA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA98u;
    // 0x1aba9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ABA98u, 0x1ABAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAA0u;
label_1abaa0:
    // 0x1abaa0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABAA0u;
    {
        const bool branch_taken_0x1abaa0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abaa0) {
            ctx->pc = 0x1ABAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABAA0u;
            // 0x1abaa4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAB0u;
            return;
        }
    }
    ctx->pc = 0x1ABAA8u;
    // 0x1abaa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1abaac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1abab0u;
}
