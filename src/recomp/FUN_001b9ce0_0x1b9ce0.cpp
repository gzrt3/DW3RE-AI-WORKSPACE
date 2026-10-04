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

// Function: FUN_001b9ce0
// Address: 0x1b9ce0 - 0x1b9d54
void FUN_001b9ce0_0x1b9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9ce0_0x1b9ce0");
#endif

    switch (ctx->pc) {
        case 0x1b9d04u: goto label_1b9d04;
        case 0x1b9d24u: goto label_1b9d24;
        case 0x1b9d38u: goto label_1b9d38;
        case 0x1b9d50u: goto label_1b9d50;
        default: break;
    }

    ctx->pc = 0x1b9ce0u;

    // 0x1b9ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9ce4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9CE4u;
    {
        const bool branch_taken_0x1b9ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CE4u;
        // 0x1b9ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ce4) {
            ctx->pc = 0x1B9D2Cu;
            goto label_1b9d2c;
        }
    }
    ctx->pc = 0x1B9CECu;
    // 0x1b9cec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b9cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cf4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1b9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b9cf8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1b9cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b9cfc: 0xc05b14c  jal         func_16C530
    ctx->pc = 0x1B9CFCu;
    SET_GPR_U32(ctx, 31, 0x1B9D04u);
    ctx->pc = 0x1B9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CFCu;
    // 0x1b9d00: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C530u, 0x1B9CFCu, 0x1B9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D04u;
label_1b9d04:
    // 0x1b9d04: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1b9d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d0c: 0xac203880  sw          $zero, 0x3880($at)
    ctx->pc = 0x1b9d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x463880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x463880u, _value); } while (0);
    // 0x1b9d10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b9d14: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1b9d18: 0x8c253880  lw          $a1, 0x3880($at)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x463880u));
    // 0x1b9d1c: 0xc05b0b8  jal         func_16C2E0
    ctx->pc = 0x1B9D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D24u);
    ctx->pc = 0x1B9D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D1Cu;
    // 0x1b9d20: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C2E0u, 0x1B9D1Cu, 0x1B9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D24u;
label_1b9d24:
    // 0x1b9d24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B9D24u;
    {
        const bool branch_taken_0x1b9d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D24u;
        // 0x1b9d28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d24) {
            ctx->pc = 0x1B9D54u;
            return;
        }
    }
    ctx->pc = 0x1B9D2Cu;
label_1b9d2c:
    // 0x1b9d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d30: 0xc05af88  jal         func_16BE20
    ctx->pc = 0x1B9D30u;
    SET_GPR_U32(ctx, 31, 0x1B9D38u);
    ctx->pc = 0x1B9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D30u;
    // 0x1b9d34: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE20u, 0x1B9D30u, 0x1B9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D38u;
label_1b9d38:
    // 0x1b9d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9D38u;
    {
        const bool branch_taken_0x1b9d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D38u;
        // 0x1b9d3c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d38) {
            ctx->pc = 0x1B9D50u;
            goto label_1b9d50;
        }
    }
    ctx->pc = 0x1B9D40u;
    // 0x1b9d40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b9d48: 0xc05b114  jal         func_16C450
    ctx->pc = 0x1B9D48u;
    SET_GPR_U32(ctx, 31, 0x1B9D50u);
    ctx->pc = 0x1B9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D48u;
    // 0x1b9d4c: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C450u, 0x1B9D48u, 0x1B9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D50u;
label_1b9d50:
    // 0x1b9d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b9d54u;
}
