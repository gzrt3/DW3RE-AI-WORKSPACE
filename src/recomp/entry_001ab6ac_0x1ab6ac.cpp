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

// Function: entry_001ab6ac
// Address: 0x1ab6ac - 0x1ab6f8
void entry_001ab6ac_0x1ab6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab6ac_0x1ab6ac");
#endif

    switch (ctx->pc) {
        case 0x1ab6c4u: goto label_1ab6c4;
        default: break;
    }

    ctx->pc = 0x1ab6acu;

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
label_1ab6c4:
    // 0x1ab6c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB6C4u;
    {
        const bool branch_taken_0x1ab6c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab6c4) {
            ctx->pc = 0x1AB6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB6C4u;
            // 0x1ab6c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB6D4u;
            goto label_1ab6d4;
        }
    }
    ctx->pc = 0x1AB6CCu;
    // 0x1ab6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB6CCu;
    {
        const bool branch_taken_0x1ab6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6CCu;
        // 0x1ab6d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6cc) {
            ctx->pc = 0x1AB6E4u;
            goto label_1ab6e4;
        }
    }
    ctx->pc = 0x1AB6D4u;
label_1ab6d4:
    // 0x1ab6d4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AB6D4u;
    {
        const bool branch_taken_0x1ab6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6D4u;
        // 0x1ab6d8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6d4) {
            ctx->pc = 0x1AB688u;
            return;
        }
    }
    ctx->pc = 0x1AB6DCu;
    // 0x1ab6dc: 0xac405c10  sw          $zero, 0x5C10($v0)
    ctx->pc = 0x1ab6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23568), GPR_U32(ctx, 0));
    // 0x1ab6e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6e4:
    // 0x1ab6e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab6e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ab6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F0u;
        // 0x1ab6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6F8u;
}
