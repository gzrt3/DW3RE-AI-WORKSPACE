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

// Function: FUN_00235c18
// Address: 0x235c18 - 0x235ca4
void FUN_00235c18_0x235c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235c18_0x235c18");
#endif

    switch (ctx->pc) {
        case 0x235c48u: goto label_235c48;
        case 0x235c58u: goto label_235c58;
        case 0x235c80u: goto label_235c80;
        case 0x235c8cu: goto label_235c8c;
        default: break;
    }

    ctx->pc = 0x235c18u;

    // 0x235c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c24: 0x8f8482e8  lw          $a0, -0x7D18($gp)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x235c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235c2c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x235c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x235c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235c3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x235c40: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x235C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C40u;
    // 0x235c44: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235C40u, 0x235C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x235C48u;
    {
        const bool branch_taken_0x235c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c48) {
            ctx->pc = 0x235C90u;
            goto label_235c90;
        }
    }
    ctx->pc = 0x235C50u;
    // 0x235c50: 0xc08d650  jal         func_235940
    ctx->pc = 0x235C50u;
    SET_GPR_U32(ctx, 31, 0x235C58u);
    ctx->pc = 0x235940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235940u, 0x235C50u, 0x235C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C58u;
label_235c58:
    // 0x235c58: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x235c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235c64: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235c68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x235c6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235C6Cu;
    {
        const bool branch_taken_0x235c6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c6c) {
            ctx->pc = 0x235C84u;
            goto label_235c84;
        }
    }
    ctx->pc = 0x235C74u;
    // 0x235c74: 0xac520404  sw          $s2, 0x404($v0)
    ctx->pc = 0x235c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 18));
    // 0x235c78: 0xc08d666  jal         func_235998
    ctx->pc = 0x235C78u;
    SET_GPR_U32(ctx, 31, 0x235C80u);
    ctx->pc = 0x235C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C78u;
    // 0x235c7c: 0xac530400  sw          $s3, 0x400($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235998u, 0x235C78u, 0x235C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C80u;
label_235c80:
    // 0x235c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c84:
    // 0x235c84: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235C84u;
    SET_GPR_U32(ctx, 31, 0x235C8Cu);
    ctx->pc = 0x235C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C84u;
    // 0x235c88: 0x8f8482e8  lw          $a0, -0x7D18($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235C84u, 0x235C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C8Cu;
label_235c8c:
    // 0x235c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235c90:
    // 0x235c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x235ca4u;
}
