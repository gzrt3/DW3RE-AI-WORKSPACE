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

// Function: entry_001c1020
// Address: 0x1c1020 - 0x1c1068
void entry_001c1020_0x1c1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1020_0x1c1020");
#endif

    switch (ctx->pc) {
        case 0x1c1054u: goto label_1c1054;
        default: break;
    }

    ctx->pc = 0x1c1020u;

    // 0x1c1020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1024: 0x14c3001b  bne         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1024u;
    {
        const bool branch_taken_0x1c1024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1024) {
            ctx->pc = 0x1C1094u;
            return;
        }
    }
    ctx->pc = 0x1C102Cu;
    // 0x1c102c: 0x8f84890c  lw          $a0, -0x76F4($gp)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x1c1030: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1c1034: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1034u;
    {
        const bool branch_taken_0x1c1034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1034) {
            ctx->pc = 0x1C1068u;
            return;
        }
    }
    ctx->pc = 0x1C103Cu;
    // 0x1c103c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c1040: 0x286300e4  slti        $v1, $v1, 0xE4
    ctx->pc = 0x1c1040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)228) ? 1 : 0);
    // 0x1c1044: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1044u;
    {
        const bool branch_taken_0x1c1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1044) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C104Cu;
    // 0x1c104c: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x1C104Cu;
    SET_GPR_U32(ctx, 31, 0x1C1054u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C104Cu, 0x1C1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C1054u;
    {
        const bool branch_taken_0x1c1054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1054u;
        // 0x1c1058: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1054) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C105Cu;
    // 0x1c105c: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c105cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
    // 0x1c1060: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C1068u;
}
