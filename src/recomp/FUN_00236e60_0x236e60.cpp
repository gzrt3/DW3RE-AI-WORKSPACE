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

// Function: FUN_00236e60
// Address: 0x236e60 - 0x236ec4
void FUN_00236e60_0x236e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236e60_0x236e60");
#endif

    switch (ctx->pc) {
        case 0x236e88u: goto label_236e88;
        case 0x236e90u: goto label_236e90;
        case 0x236eb8u: goto label_236eb8;
        default: break;
    }

    ctx->pc = 0x236e60u;

    // 0x236e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236e64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e6c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x236e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236e74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236e80: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236E80u;
    SET_GPR_U32(ctx, 31, 0x236E88u);
    ctx->pc = 0x236E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E80u;
    // 0x236e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236E80u, 0x236E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E88u;
label_236e88:
    // 0x236e88: 0xc08db0c  jal         func_236C30
    ctx->pc = 0x236E88u;
    SET_GPR_U32(ctx, 31, 0x236E90u);
    ctx->pc = 0x236E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E88u;
    // 0x236e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C30u, 0x236E88u, 0x236E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E90u;
label_236e90:
    // 0x236e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236e9c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236ea0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x236ea4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236EA4u;
    {
        const bool branch_taken_0x236ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA4u;
        // 0x236ea8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ea4) {
            ctx->pc = 0x236EBCu;
            goto label_236ebc;
        }
    }
    ctx->pc = 0x236EACu;
    // 0x236eac: 0xac5100c4  sw          $s1, 0xC4($v0)
    ctx->pc = 0x236eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
    // 0x236eb0: 0xc08db22  jal         func_236C88
    ctx->pc = 0x236EB0u;
    SET_GPR_U32(ctx, 31, 0x236EB8u);
    ctx->pc = 0x236EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EB0u;
    // 0x236eb4: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C88u, 0x236EB0u, 0x236EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EB8u;
label_236eb8:
    // 0x236eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ebc:
    // 0x236ebc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236EBCu;
    SET_GPR_U32(ctx, 31, 0x236EC4u);
    ctx->pc = 0x236EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EBCu;
    // 0x236ec0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236EBCu, 0x236EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EC4u;
}
