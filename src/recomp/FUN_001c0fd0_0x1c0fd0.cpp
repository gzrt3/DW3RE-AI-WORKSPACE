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

// Function: FUN_001c0fd0
// Address: 0x1c0fd0 - 0x1c10b8
void FUN_001c0fd0_0x1c0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0fd0_0x1c0fd0");
#endif

    switch (ctx->pc) {
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1080u: goto label_1c1080;
        default: break;
    }

    ctx->pc = 0x1c0fd0u;

    // 0x1c0fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0fd8: 0x8f8688f0  lw          $a2, -0x7710($gp)
    ctx->pc = 0x1c0fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
    // 0x1c0fdc: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C0FDCu;
    {
        const bool branch_taken_0x1c0fdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fdc) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C0FE4u;
    // 0x1c0fe4: 0x8f858904  lw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x1c0fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fec: 0x8f848908  lw          $a0, -0x76F8($gp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c0ff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c0ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c0ff8: 0xaf858904  sw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 5));
    // 0x1c0ffc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0FFCu;
    {
        const bool branch_taken_0x1c0ffc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0xaf848908  sw          $a0, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ffc) {
            ctx->pc = 0x1C1020u;
            goto label_1c1020;
        }
    }
    ctx->pc = 0x1C1004u;
    // 0x1c1004: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c1008: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c1008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x1c100c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C100Cu;
    {
        const bool branch_taken_0x1c100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c100c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1014u;
    // 0x1c1014: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
    // 0x1c1018: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C1018u;
    {
        const bool branch_taken_0x1c1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1018) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1020u;
label_1c1020:
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
            goto label_1c1094;
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
            goto label_1c1068;
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
            goto label_1c10b4;
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
            goto label_1c10b4;
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
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1068u;
label_1c1068:
    // 0x1c1068: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c106c: 0x28630060  slti        $v1, $v1, 0x60
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1c1070: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1078u;
    // 0x1c1078: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x1C1078u;
    SET_GPR_U32(ctx, 31, 0x1C1080u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C1078u, 0x1C1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1080u;
label_1c1080:
    // 0x1c1080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1088u;
    // 0x1c1088: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
    // 0x1c108c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C108Cu;
    {
        const bool branch_taken_0x1c108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c108c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1094u;
label_1c1094:
    // 0x1c1094: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1094u;
    {
        const bool branch_taken_0x1c1094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1094) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C109Cu;
    // 0x1c109c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c10a0: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x1c10a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C10A4u;
    {
        const bool branch_taken_0x1c10a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c10a4) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C10ACu;
    // 0x1c10ac: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
    // 0x1c10b0: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c10b4:
    // 0x1c10b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c10b8u;
}
