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

// Function: entry_0016bad4
// Address: 0x16bad4 - 0x16bb30
void entry_0016bad4_0x16bad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bad4_0x16bad4");
#endif

    switch (ctx->pc) {
        case 0x16baecu: goto label_16baec;
        default: break;
    }

    ctx->pc = 0x16bad4u;

    // 0x16bad4: 0x8f908724  lw          $s0, -0x78DC($gp)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x16bad8: 0x2a010026  slti        $at, $s0, 0x26
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x16badc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16BADCu;
    {
        const bool branch_taken_0x16badc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BADCu;
        // 0x16bae0: 0x8f918720  lw          $s1, -0x78E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16badc) {
            ctx->pc = 0x16BB30u;
            return;
        }
    }
    ctx->pc = 0x16BAE4u;
    // 0x16bae4: 0xc055e04  jal         func_157810
    ctx->pc = 0x16BAE4u;
    SET_GPR_U32(ctx, 31, 0x16BAECu);
    ctx->pc = 0x16BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAE4u;
    // 0x16bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x16BAE4u, 0x16BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAECu;
label_16baec:
    // 0x16baec: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16baf0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16BAF0u;
    {
        const bool branch_taken_0x16baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF0u;
        // 0x16baf4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baf0) {
            ctx->pc = 0x16BB30u;
            return;
        }
    }
    ctx->pc = 0x16BAF8u;
    // 0x16baf8: 0x2403ffc9  addiu       $v1, $zero, -0x37
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
    // 0x16bafc: 0xac301eb4  sw          $s0, 0x1EB4($at)
    ctx->pc = 0x16bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7860), GPR_U32(ctx, 16));
    // 0x16bb00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb04: 0xac311eb8  sw          $s1, 0x1EB8($at)
    ctx->pc = 0x16bb04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x281EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB8u, _value); } while (0);
    // 0x16bb08: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb0c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16bb14: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb18: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bb1c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb20: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x16bb28: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb2c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16bb30u;
}
