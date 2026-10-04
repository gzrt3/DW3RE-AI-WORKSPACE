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

// Function: FUN_00226d10
// Address: 0x226d10 - 0x226d44
void FUN_00226d10_0x226d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226d10_0x226d10");
#endif

    switch (ctx->pc) {
        case 0x226d2cu: goto label_226d2c;
        case 0x226d3cu: goto label_226d3c;
        default: break;
    }

    ctx->pc = 0x226d10u;

    // 0x226d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x226d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226d1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226D1Cu;
    {
        const bool branch_taken_0x226d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226d1c) {
            ctx->pc = 0x226D34u;
            goto label_226d34;
        }
    }
    ctx->pc = 0x226D24u;
    // 0x226d24: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x226D24u;
    SET_GPR_U32(ctx, 31, 0x226D2Cu);
    ctx->pc = 0x226D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D24u;
    // 0x226d28: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E0u, 0x226D24u, 0x226D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D2Cu;
label_226d2c:
    // 0x226d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226D2Cu;
    {
        const bool branch_taken_0x226d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d2c) {
            ctx->pc = 0x226D40u;
            goto label_226d40;
        }
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x226D34u;
    SET_GPR_U32(ctx, 31, 0x226D3Cu);
    ctx->pc = 0x226D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D34u;
    // 0x226d38: 0x90840004  lbu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x226D34u, 0x226D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D3Cu;
label_226d3c:
    // 0x226d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226d40:
    // 0x226d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226d44u;
}
