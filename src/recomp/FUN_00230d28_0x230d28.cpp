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

// Function: FUN_00230d28
// Address: 0x230d28 - 0x230d54
void FUN_00230d28_0x230d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00230d28_0x230d28");
#endif

    switch (ctx->pc) {
        case 0x230d28u: goto label_230d28;
        case 0x230d2cu: goto label_230d2c;
        case 0x230d30u: goto label_230d30;
        case 0x230d34u: goto label_230d34;
        case 0x230d38u: goto label_230d38;
        case 0x230d3cu: goto label_230d3c;
        case 0x230d40u: goto label_230d40;
        case 0x230d44u: goto label_230d44;
        case 0x230d48u: goto label_230d48;
        case 0x230d4cu: goto label_230d4c;
        case 0x230d50u: goto label_230d50;
        default: break;
    }

    ctx->pc = 0x230d28u;

label_230d28:
    // 0x230d28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230d2c:
    // 0x230d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_230d30:
    // 0x230d30: 0x8c4204e0  lw          $v0, 0x4E0($v0)
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
label_230d34:
    // 0x230d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230d38:
    if (ctx->pc == 0x230D38u) {
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D3Cu;
        goto label_230d3c;
    }
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D4Cu;
            goto label_230d4c;
        }
    }
    ctx->pc = 0x230D3Cu;
label_230d3c:
    // 0x230d3c: 0x40f809  jalr        $v0
label_230d40:
    if (ctx->pc == 0x230D40u) {
        ctx->pc = 0x230D44u;
        goto label_230d44;
    }
    ctx->pc = 0x230D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D3Cu, 0x230D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230D44u;
label_230d44:
    // 0x230d44: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_230d48:
    if (ctx->pc == 0x230D48u) {
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D4Cu;
        goto label_230d4c;
    }
    ctx->pc = 0x230D44u;
    {
        const bool branch_taken_0x230d44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d44) {
            ctx->pc = 0x230D54u;
            return;
        }
    }
    ctx->pc = 0x230D4Cu;
label_230d4c:
    // 0x230d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d50:
    // 0x230d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x230d54u;
}
