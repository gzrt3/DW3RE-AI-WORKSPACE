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

// Function: FUN_001cbe40
// Address: 0x1cbe40 - 0x1cbe98
void FUN_001cbe40_0x1cbe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbe40_0x1cbe40");
#endif

    switch (ctx->pc) {
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe88u: goto label_1cbe88;
        default: break;
    }

    ctx->pc = 0x1cbe40u;

    // 0x1cbe40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbe44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cbe48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbe4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cbe50: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1cbe54: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cbe58:
    // 0x1cbe58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cbe5c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1cbe60: 0x24844cd0  addiu       $a0, $a0, 0x4CD0
    ctx->pc = 0x1cbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19664));
    // 0x1cbe64: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1cbe68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cbe68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbe6c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBE88u;
            goto label_1cbe88;
        }
    }
    ctx->pc = 0x1CBE74u;
    // 0x1cbe74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cbe78: 0x24424ce0  addiu       $v0, $v0, 0x4CE0
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19680));
    // 0x1cbe7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cbe80: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1CBE80u;
    SET_GPR_U32(ctx, 31, 0x1CBE88u);
    ctx->pc = 0x1CBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE80u;
    // 0x1cbe84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1CBE80u, 0x1CBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cbe8c: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CBE8Cu;
    {
        const bool branch_taken_0x1cbe8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE8Cu;
        // 0x1cbe90: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe8c) {
            ctx->pc = 0x1CBE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbe58;
        }
    }
    ctx->pc = 0x1CBE94u;
    // 0x1cbe94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cbe98u;
}
