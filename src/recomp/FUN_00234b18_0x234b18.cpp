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

// Function: FUN_00234b18
// Address: 0x234b18 - 0x234ba4
void FUN_00234b18_0x234b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234b18_0x234b18");
#endif

    switch (ctx->pc) {
        case 0x234b48u: goto label_234b48;
        case 0x234b58u: goto label_234b58;
        case 0x234b80u: goto label_234b80;
        case 0x234b8cu: goto label_234b8c;
        default: break;
    }

    ctx->pc = 0x234b18u;

    // 0x234b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b24: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234b2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234b40: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234B40u;
    SET_GPR_U32(ctx, 31, 0x234B48u);
    ctx->pc = 0x234B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B40u;
    // 0x234b44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234B40u, 0x234B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B48u;
label_234b48:
    // 0x234b48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x234B48u;
    {
        const bool branch_taken_0x234b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B48u;
        // 0x234b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b48) {
            ctx->pc = 0x234B90u;
            goto label_234b90;
        }
    }
    ctx->pc = 0x234B50u;
    // 0x234b50: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234B50u;
    SET_GPR_U32(ctx, 31, 0x234B58u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234B50u, 0x234B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B58u;
label_234b58:
    // 0x234b58: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x234b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x234b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234b64: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x234b68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234b6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234B6Cu;
    {
        const bool branch_taken_0x234b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B6Cu;
        // 0x234b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b6c) {
            ctx->pc = 0x234B84u;
            goto label_234b84;
        }
    }
    ctx->pc = 0x234B74u;
    // 0x234b74: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x234b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x234b78: 0xc08d192  jal         func_234648
    ctx->pc = 0x234B78u;
    SET_GPR_U32(ctx, 31, 0x234B80u);
    ctx->pc = 0x234B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B78u;
    // 0x234b7c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234B78u, 0x234B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234b84:
    // 0x234b84: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234B84u;
    SET_GPR_U32(ctx, 31, 0x234B8Cu);
    ctx->pc = 0x234B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B84u;
    // 0x234b88: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234B84u, 0x234B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B8Cu;
label_234b8c:
    // 0x234b8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234b90:
    // 0x234b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x234ba4u;
}
