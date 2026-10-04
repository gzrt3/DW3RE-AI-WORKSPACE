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

// Function: FUN_00236938
// Address: 0x236938 - 0x236984
void FUN_00236938_0x236938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236938_0x236938");
#endif

    switch (ctx->pc) {
        case 0x236954u: goto label_236954;
        case 0x23696cu: goto label_23696c;
        case 0x236978u: goto label_236978;
        default: break;
    }

    ctx->pc = 0x236938u;

    // 0x236938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23693c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236944: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23694c: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x23694Cu;
    SET_GPR_U32(ctx, 31, 0x236954u);
    ctx->pc = 0x236950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23694Cu;
    // 0x236950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x23694Cu, 0x236954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236954u;
label_236954:
    // 0x236954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236958: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x236958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x23695c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23695Cu;
    {
        const bool branch_taken_0x23695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23695Cu;
        // 0x236960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23695c) {
            ctx->pc = 0x23697Cu;
            goto label_23697c;
        }
    }
    ctx->pc = 0x236964u;
    // 0x236964: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236964u;
    SET_GPR_U32(ctx, 31, 0x23696Cu);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236964u, 0x23696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23696Cu;
label_23696c:
    // 0x23696c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23696cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236970: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236970u;
    SET_GPR_U32(ctx, 31, 0x236978u);
    ctx->pc = 0x236974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236970u;
    // 0x236974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236970u, 0x236978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236978u;
label_236978:
    // 0x236978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23697c:
    // 0x23697c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23697cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x236984u;
}
