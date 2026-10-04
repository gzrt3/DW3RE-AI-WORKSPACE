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

// Function: FUN_00234c30
// Address: 0x234c30 - 0x234ca8
void FUN_00234c30_0x234c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234c30_0x234c30");
#endif

    switch (ctx->pc) {
        case 0x234c58u: goto label_234c58;
        case 0x234c68u: goto label_234c68;
        case 0x234c88u: goto label_234c88;
        case 0x234c94u: goto label_234c94;
        default: break;
    }

    ctx->pc = 0x234c30u;

    // 0x234c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c3c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234c44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234c4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234c50: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234C50u;
    SET_GPR_U32(ctx, 31, 0x234C58u);
    ctx->pc = 0x234C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C50u;
    // 0x234c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234C50u, 0x234C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C58u;
label_234c58:
    // 0x234c58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234C58u;
    {
        const bool branch_taken_0x234c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C58u;
        // 0x234c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c58) {
            ctx->pc = 0x234C98u;
            goto label_234c98;
        }
    }
    ctx->pc = 0x234C60u;
    // 0x234c60: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234C60u;
    SET_GPR_U32(ctx, 31, 0x234C68u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234C60u, 0x234C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C68u;
label_234c68:
    // 0x234c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c70: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x234c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x234c74: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234C74u;
    {
        const bool branch_taken_0x234c74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C74u;
        // 0x234c78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c74) {
            ctx->pc = 0x234C8Cu;
            goto label_234c8c;
        }
    }
    ctx->pc = 0x234C7Cu;
    // 0x234c7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234c80: 0xc08d192  jal         func_234648
    ctx->pc = 0x234C80u;
    SET_GPR_U32(ctx, 31, 0x234C88u);
    ctx->pc = 0x234C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C80u;
    // 0x234c84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234C80u, 0x234C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C88u;
label_234c88:
    // 0x234c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234c8c:
    // 0x234c8c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234C8Cu;
    SET_GPR_U32(ctx, 31, 0x234C94u);
    ctx->pc = 0x234C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C8Cu;
    // 0x234c90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234C8Cu, 0x234C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C94u;
label_234c94:
    // 0x234c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234c98:
    // 0x234c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x234ca8u;
}
