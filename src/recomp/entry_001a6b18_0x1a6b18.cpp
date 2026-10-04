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

// Function: entry_001a6b18
// Address: 0x1a6b18 - 0x1a6b8c
void entry_001a6b18_0x1a6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6b18_0x1a6b18");
#endif

    switch (ctx->pc) {
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b44u: goto label_1a6b44;
        default: break;
    }

    ctx->pc = 0x1a6b18u;

    // 0x1a6b18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6b1c: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
    // 0x1a6b20: 0xc06914c  jal         func_1A4530
    ctx->pc = 0x1A6B20u;
    SET_GPR_U32(ctx, 31, 0x1A6B28u);
    ctx->pc = 0x1A6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B20u;
    // 0x1a6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4530u, 0x1A6B20u, 0x1A6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B28u;
label_1a6b28:
    // 0x1a6b28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a6b2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6b30: 0xc06950e  jal         func_1A5438
    ctx->pc = 0x1A6B30u;
    SET_GPR_U32(ctx, 31, 0x1A6B38u);
    ctx->pc = 0x1A6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B30u;
    // 0x1a6b34: 0xac621814  sw          $v0, 0x1814($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5438u, 0x1A6B30u, 0x1A6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B38u;
label_1a6b38:
    // 0x1a6b38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6b3c: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1A6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B44u);
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1A6B3Cu, 0x1A6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B44u;
label_1a6b44:
    // 0x1a6b44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6B44u;
    {
        const bool branch_taken_0x1a6b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B44u;
        // 0x1a6b48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b44) {
            ctx->pc = 0x1A6B8Cu;
            return;
        }
    }
    ctx->pc = 0x1A6B4Cu;
    // 0x1a6b4c: 0x26851800  addiu       $a1, $s4, 0x1800
    ctx->pc = 0x1a6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
    // 0x1a6b50: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x1a6b54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6b58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6b5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6b60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a6b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6b80: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1a6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1a6b84: 0x8069b84  j           func_1A6E10
    ctx->pc = 0x1A6B84u;
    ctx->pc = 0x1A6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B84u;
    // 0x1a6b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    FUN_001a6e10_0x1a6e10(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6B8Cu;
}
