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

// Function: FUN_00114000
// Address: 0x114000 - 0x11406c
void FUN_00114000_0x114000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114000_0x114000");
#endif

    switch (ctx->pc) {
        case 0x114010u: goto label_114010;
        case 0x114030u: goto label_114030;
        case 0x114048u: goto label_114048;
        case 0x114068u: goto label_114068;
        default: break;
    }

    ctx->pc = 0x114000u;

    // 0x114000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114008: 0xc045020  jal         func_114080
    ctx->pc = 0x114008u;
    SET_GPR_U32(ctx, 31, 0x114010u);
    ctx->pc = 0x11400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114008u;
    // 0x11400c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114080u, 0x114008u, 0x114010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114010u;
label_114010:
    // 0x114010: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x114010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x114014: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x114014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x114018: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114018u;
        // 0x11401c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x114028u;
            goto label_114028;
        }
    }
    ctx->pc = 0x114020u;
    // 0x114020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114020u;
    {
        const bool branch_taken_0x114020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114020) {
            ctx->pc = 0x114030u;
            goto label_114030;
        }
    }
    ctx->pc = 0x114028u;
label_114028:
    // 0x114028: 0xc045950  jal         func_116540
    ctx->pc = 0x114028u;
    SET_GPR_U32(ctx, 31, 0x114030u);
    ctx->pc = 0x11402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114028u;
    // 0x11402c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116540u, 0x114028u, 0x114030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114030u;
label_114030:
    // 0x114030: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x114034: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x114034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x114038: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x114038u;
    {
        const bool branch_taken_0x114038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114038u;
        // 0x11403c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114038) {
            ctx->pc = 0x114068u;
            goto label_114068;
        }
    }
    ctx->pc = 0x114040u;
    // 0x114040: 0xc045020  jal         func_114080
    ctx->pc = 0x114040u;
    SET_GPR_U32(ctx, 31, 0x114048u);
    ctx->pc = 0x114080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114080u, 0x114040u, 0x114048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114048u;
label_114048:
    // 0x114048: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x114048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x11404c: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x11404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x114050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114050u;
    {
        const bool branch_taken_0x114050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114050u;
        // 0x114054: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114050) {
            ctx->pc = 0x114060u;
            goto label_114060;
        }
    }
    ctx->pc = 0x114058u;
    // 0x114058: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114058u;
    {
        const bool branch_taken_0x114058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114058) {
            ctx->pc = 0x114068u;
            goto label_114068;
        }
    }
    ctx->pc = 0x114060u;
label_114060:
    // 0x114060: 0xc045950  jal         func_116540
    ctx->pc = 0x114060u;
    SET_GPR_U32(ctx, 31, 0x114068u);
    ctx->pc = 0x114064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114060u;
    // 0x114064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116540u, 0x114060u, 0x114068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114068u;
label_114068:
    // 0x114068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11406cu;
}
