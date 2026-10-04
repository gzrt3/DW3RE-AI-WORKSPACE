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

// Function: FUN_00152340
// Address: 0x152340 - 0x15239c
void FUN_00152340_0x152340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152340_0x152340");
#endif

    switch (ctx->pc) {
        case 0x15235cu: goto label_15235c;
        case 0x152370u: goto label_152370;
        case 0x152384u: goto label_152384;
        default: break;
    }

    ctx->pc = 0x152340u;

    // 0x152340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15234c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152354: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x152358: 0x261010e0  addiu       $s0, $s0, 0x10E0
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
label_15235c:
    // 0x15235c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x152360: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152360) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x152368u;
    // 0x152368: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x152368u;
    SET_GPR_U32(ctx, 31, 0x152370u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x152368u, 0x152370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152370u;
label_152370:
    // 0x152370: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x152374: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152374u;
    {
        const bool branch_taken_0x152374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152374) {
            ctx->pc = 0x152384u;
            goto label_152384;
        }
    }
    ctx->pc = 0x15237Cu;
    // 0x15237c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x15237Cu;
    SET_GPR_U32(ctx, 31, 0x152384u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x15237Cu, 0x152384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152384u;
label_152384:
    // 0x152384: 0x0  nop
    ctx->pc = 0x152384u;
    // NOP
    // 0x152388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15238c: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x15238cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x152390: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x152390u;
    {
        const bool branch_taken_0x152390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152390u;
        // 0x152394: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152390) {
            ctx->pc = 0x15235Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15235c;
        }
    }
    ctx->pc = 0x152398u;
    // 0x152398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x15239cu;
}
