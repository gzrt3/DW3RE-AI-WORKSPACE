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

// Function: FUN_00234ef8
// Address: 0x234ef8 - 0x234f98
void FUN_00234ef8_0x234ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234ef8_0x234ef8");
#endif

    switch (ctx->pc) {
        case 0x234f28u: goto label_234f28;
        case 0x234f38u: goto label_234f38;
        case 0x234f74u: goto label_234f74;
        case 0x234f80u: goto label_234f80;
        default: break;
    }

    ctx->pc = 0x234ef8u;

    // 0x234ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f04: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234f08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234f0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234f20: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234F20u;
    SET_GPR_U32(ctx, 31, 0x234F28u);
    ctx->pc = 0x234F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F20u;
    // 0x234f24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234F20u, 0x234F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F28u;
label_234f28:
    // 0x234f28: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x234F84u;
            goto label_234f84;
        }
    }
    ctx->pc = 0x234F30u;
    // 0x234f30: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234F30u;
    SET_GPR_U32(ctx, 31, 0x234F38u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234F30u, 0x234F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x234f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f40: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x234f44: 0x24470518  addiu       $a3, $v0, 0x518
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x234f48: 0x2463af04  addiu       $v1, $v1, -0x50FC
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946564));
    // 0x234f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f50: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x234f54: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234F54u;
    {
        const bool branch_taken_0x234f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f54) {
            ctx->pc = 0x234F78u;
            goto label_234f78;
        }
    }
    ctx->pc = 0x234F5Cu;
    // 0x234f5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x234f60: 0xacf20004  sw          $s2, 0x4($a3)
    ctx->pc = 0x234f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 18));
    // 0x234f64: 0xac73fdfc  sw          $s3, -0x204($v1)
    ctx->pc = 0x234f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966780), GPR_U32(ctx, 19));
    // 0x234f68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x234f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x234f6c: 0xc08d192  jal         func_234648
    ctx->pc = 0x234F6Cu;
    SET_GPR_U32(ctx, 31, 0x234F74u);
    ctx->pc = 0x234F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F6Cu;
    // 0x234f70: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234F6Cu, 0x234F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F74u;
label_234f74:
    // 0x234f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f78:
    // 0x234f78: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234F78u;
    SET_GPR_U32(ctx, 31, 0x234F80u);
    ctx->pc = 0x234F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F78u;
    // 0x234f7c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234F78u, 0x234F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F80u;
label_234f80:
    // 0x234f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234f84:
    // 0x234f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x234f98u;
}
