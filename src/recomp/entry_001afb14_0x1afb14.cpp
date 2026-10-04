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

// Function: entry_001afb14
// Address: 0x1afb14 - 0x1afb78
void entry_001afb14_0x1afb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb14_0x1afb14");
#endif

    switch (ctx->pc) {
        case 0x1afb44u: goto label_1afb44;
        case 0x1afb58u: goto label_1afb58;
        case 0x1afb74u: goto label_1afb74;
        default: break;
    }

    ctx->pc = 0x1afb14u;

    // 0x1afb14: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1afb18: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1afb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
    // 0x1afb1c: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1afb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1afb20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1afb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1afb24: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1afb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1afb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1afb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1afb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1afb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb38: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afb3c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AFB3Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB44u);
    ctx->pc = 0x1AFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB3Cu;
    // 0x1afb40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AFB3Cu, 0x1AFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB44u;
label_1afb44:
    // 0x1afb44: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFB44u;
    {
        const bool branch_taken_0x1afb44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB44u;
        // 0x1afb48: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb44) {
            ctx->pc = 0x1AFB60u;
            goto label_1afb60;
        }
    }
    ctx->pc = 0x1AFB4Cu;
    // 0x1afb4c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afb50: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFB50u;
    SET_GPR_U32(ctx, 31, 0x1AFB58u);
    ctx->pc = 0x1AFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB50u;
    // 0x1afb54: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFB50u, 0x1AFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB58u;
label_1afb58:
    // 0x1afb58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFB58u;
    {
        const bool branch_taken_0x1afb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB58u;
        // 0x1afb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb58) {
            ctx->pc = 0x1AFB78u;
            return;
        }
    }
    ctx->pc = 0x1AFB60u;
label_1afb60:
    // 0x1afb60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1afb64: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1afb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1afb68: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29352)));
    // 0x1afb6c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB74u);
    ctx->pc = 0x1AFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB6Cu;
    // 0x1afb70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFB6Cu, 0x1AFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB74u;
label_1afb74:
    // 0x1afb74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1afb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1afb78u;
}
