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

// Function: FUN_00225bf0
// Address: 0x225bf0 - 0x225c94
void FUN_00225bf0_0x225bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225bf0_0x225bf0");
#endif

    switch (ctx->pc) {
        case 0x225c14u: goto label_225c14;
        case 0x225c64u: goto label_225c64;
        case 0x225c70u: goto label_225c70;
        case 0x225c7cu: goto label_225c7c;
        default: break;
    }

    ctx->pc = 0x225bf0u;

    // 0x225bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225c04: 0xaf8092e4  sw          $zero, -0x6D1C($gp)
    ctx->pc = 0x225c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 0));
    // 0x225c08: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x225c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x225c0c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x225c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x225c10: 0x246391b0  addiu       $v1, $v1, -0x6E50
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939056));
label_225c14:
    // 0x225c14: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x225c18: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x225c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x225c1c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x225c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x225c20: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x225c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x225c24: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x225c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x225c28: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x225c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x225c2c: 0xad050020  sw          $a1, 0x20($t0)
    ctx->pc = 0x225c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 5));
    // 0x225c30: 0xad050030  sw          $a1, 0x30($t0)
    ctx->pc = 0x225c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 5));
    // 0x225c34: 0xad050040  sw          $a1, 0x40($t0)
    ctx->pc = 0x225c34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 5));
    // 0x225c38: 0xad050050  sw          $a1, 0x50($t0)
    ctx->pc = 0x225c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 5));
    // 0x225c3c: 0xad050060  sw          $a1, 0x60($t0)
    ctx->pc = 0x225c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 5));
    // 0x225c40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x225C40u;
    {
        const bool branch_taken_0x225c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C40u;
        // 0x225c44: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c40) {
            ctx->pc = 0x225C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225c14;
        }
    }
    ctx->pc = 0x225C48u;
    // 0x225c48: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x225c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x225c4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x225c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225c50: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x225c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225c58: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225c5c: 0xc041738  jal         func_105CE0
    ctx->pc = 0x225C5Cu;
    SET_GPR_U32(ctx, 31, 0x225C64u);
    ctx->pc = 0x225C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C5Cu;
    // 0x225c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x225C5Cu, 0x225C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C64u;
label_225c64:
    // 0x225c64: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x225c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x225c68: 0xc070080  jal         func_1C0200
    ctx->pc = 0x225C68u;
    SET_GPR_U32(ctx, 31, 0x225C70u);
    ctx->pc = 0x225C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C68u;
    // 0x225c6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x225C68u, 0x225C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C70u;
label_225c70:
    // 0x225c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c74: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x225C74u;
    SET_GPR_U32(ctx, 31, 0x225C7Cu);
    ctx->pc = 0x225C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C74u;
    // 0x225c78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x225C74u, 0x225C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C7Cu;
label_225c7c:
    // 0x225c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x225c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x225c84: 0x248491b0  addiu       $a0, $a0, -0x6E50
    ctx->pc = 0x225c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939056));
    // 0x225c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c8c: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x225C8Cu;
    SET_GPR_U32(ctx, 31, 0x225C94u);
    ctx->pc = 0x225C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C8Cu;
    // 0x225c90: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x225C8Cu, 0x225C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C94u;
}
