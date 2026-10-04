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

// Function: FUN_00234e60
// Address: 0x234e60 - 0x234eec
void FUN_00234e60_0x234e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234e60_0x234e60");
#endif

    switch (ctx->pc) {
        case 0x234e90u: goto label_234e90;
        case 0x234ea0u: goto label_234ea0;
        case 0x234ec8u: goto label_234ec8;
        case 0x234ed4u: goto label_234ed4;
        default: break;
    }

    ctx->pc = 0x234e60u;

    // 0x234e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234e68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e6c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234e74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234e88: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x234E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E88u;
    // 0x234e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234E88u, 0x234E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x234ED8u;
            goto label_234ed8;
        }
    }
    ctx->pc = 0x234E98u;
    // 0x234e98: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234E98u;
    SET_GPR_U32(ctx, 31, 0x234EA0u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234E98u, 0x234EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EA0u;
label_234ea0:
    // 0x234ea0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x234ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ea8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234eac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x234eb0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234eb4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB4u;
        // 0x234eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234ECCu;
            goto label_234ecc;
        }
    }
    ctx->pc = 0x234EBCu;
    // 0x234ebc: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x234ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x234ec0: 0xc08d192  jal         func_234648
    ctx->pc = 0x234EC0u;
    SET_GPR_U32(ctx, 31, 0x234EC8u);
    ctx->pc = 0x234EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EC0u;
    // 0x234ec4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234EC0u, 0x234EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EC8u;
label_234ec8:
    // 0x234ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ecc:
    // 0x234ecc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234ECCu;
    SET_GPR_U32(ctx, 31, 0x234ED4u);
    ctx->pc = 0x234ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ECCu;
    // 0x234ed0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234ECCu, 0x234ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ED4u;
label_234ed4:
    // 0x234ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ed8:
    // 0x234ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x234eecu;
}
