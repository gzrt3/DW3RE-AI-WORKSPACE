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

// Function: entry_001ab990
// Address: 0x1ab990 - 0x1ab9d0
void entry_001ab990_0x1ab990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab990_0x1ab990");
#endif

    switch (ctx->pc) {
        case 0x1ab9c0u: goto label_1ab9c0;
        default: break;
    }

    ctx->pc = 0x1ab990u;

    // 0x1ab990: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab994: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab998: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1ab99c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab9a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9b0: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab9b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab9b8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB9B8u;
    SET_GPR_U32(ctx, 31, 0x1AB9C0u);
    ctx->pc = 0x1AB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9B8u;
    // 0x1ab9bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB9B8u, 0x1AB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9C0u;
label_1ab9c0:
    // 0x1ab9c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB9C0u;
            // 0x1ab9c4: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB9D0u;
            return;
        }
    }
    ctx->pc = 0x1AB9C8u;
    // 0x1ab9c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab9cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1ab9d0u;
}
