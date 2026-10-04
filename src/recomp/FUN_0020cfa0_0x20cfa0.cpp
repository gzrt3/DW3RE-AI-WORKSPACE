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

// Function: FUN_0020cfa0
// Address: 0x20cfa0 - 0x20d4cc
void FUN_0020cfa0_0x20cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020cfa0_0x20cfa0");
#endif

    switch (ctx->pc) {
        case 0x20cfb8u: goto label_20cfb8;
        case 0x20cfc0u: goto label_20cfc0;
        case 0x20cfc8u: goto label_20cfc8;
        case 0x20d070u: goto label_20d070;
        case 0x20d078u: goto label_20d078;
        case 0x20d080u: goto label_20d080;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d194u: goto label_20d194;
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1e4u: goto label_20d1e4;
        case 0x20d1ecu: goto label_20d1ec;
        case 0x20d1f4u: goto label_20d1f4;
        case 0x20d1fcu: goto label_20d1fc;
        case 0x20d220u: goto label_20d220;
        case 0x20d23cu: goto label_20d23c;
        case 0x20d24cu: goto label_20d24c;
        case 0x20d254u: goto label_20d254;
        case 0x20d25cu: goto label_20d25c;
        case 0x20d26cu: goto label_20d26c;
        case 0x20d310u: goto label_20d310;
        case 0x20d318u: goto label_20d318;
        case 0x20d320u: goto label_20d320;
        case 0x20d360u: goto label_20d360;
        case 0x20d368u: goto label_20d368;
        case 0x20d434u: goto label_20d434;
        case 0x20d474u: goto label_20d474;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d484u: goto label_20d484;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d494u: goto label_20d494;
        case 0x20d49cu: goto label_20d49c;
        default: break;
    }

    ctx->pc = 0x20cfa0u;

    // 0x20cfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cfa4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20cfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfb0: 0xc04e188  jal         func_138620
    ctx->pc = 0x20CFB0u;
    SET_GPR_U32(ctx, 31, 0x20CFB8u);
    ctx->pc = 0x20CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFB0u;
    // 0x20cfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x20CFB0u, 0x20CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFB8u;
label_20cfb8:
    // 0x20cfb8: 0xc04e198  jal         func_138660
    ctx->pc = 0x20CFB8u;
    SET_GPR_U32(ctx, 31, 0x20CFC0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20CFB8u, 0x20CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFC0u;
label_20cfc0:
    // 0x20cfc0: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x20CFC0u;
    {
        const bool branch_taken_0x20cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cfc0) {
            ctx->pc = 0x20D228u;
            goto label_20d228;
        }
    }
    ctx->pc = 0x20CFC8u;
label_20cfc8:
    // 0x20cfc8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
    // 0x20cfcc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20CFCCu;
    {
        const bool branch_taken_0x20cfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfcc) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20CFD4u;
    // 0x20cfd4: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x20cfd8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20cfdc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CFDCu;
    {
        const bool branch_taken_0x20cfdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfdc) {
            ctx->pc = 0x20CFF0u;
            goto label_20cff0;
        }
    }
    ctx->pc = 0x20CFE4u;
    // 0x20cfe4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20CFE4u;
    {
        const bool branch_taken_0x20cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfe4) {
            ctx->pc = 0x20CFF0u;
            goto label_20cff0;
        }
    }
    ctx->pc = 0x20CFECu;
    // 0x20cfec: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20cff0:
    // 0x20cff0: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
    // 0x20cff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cff8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CFF8u;
    {
        const bool branch_taken_0x20cff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cff8) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D000u;
    // 0x20d000: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d008: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
    // 0x20d00c: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d010: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20d010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x20d014: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D014u;
    {
        const bool branch_taken_0x20d014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d014) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D01Cu;
    // 0x20d01c: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20d020:
    // 0x20d020: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d028: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D028u;
    {
        const bool branch_taken_0x20d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d028) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20D030u;
    // 0x20d030: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d034: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20d038: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d03c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D03Cu;
    {
        const bool branch_taken_0x20d03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d03c) {
            ctx->pc = 0x20D04Cu;
            goto label_20d04c;
        }
    }
    ctx->pc = 0x20D044u;
    // 0x20d044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D044u;
    {
        const bool branch_taken_0x20d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D044u;
        // 0x20d048: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d044) {
            ctx->pc = 0x20D054u;
            goto label_20d054;
        }
    }
    ctx->pc = 0x20D04Cu;
label_20d04c:
    // 0x20d04c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x20d050: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20d054:
    // 0x20d054: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20d054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D058u;
    {
        const bool branch_taken_0x20d058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d058) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20D060u;
    // 0x20d060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d064: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20d068:
    // 0x20d068: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x20D068u;
    SET_GPR_U32(ctx, 31, 0x20D070u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20D068u, 0x20D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D070u;
label_20d070:
    // 0x20d070: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x20D070u;
    SET_GPR_U32(ctx, 31, 0x20D078u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x20D070u, 0x20D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D078u;
label_20d078:
    // 0x20d078: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x20d084: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d088: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x20d08c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d090: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d094: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
    // 0x20d098: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d09c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0a4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d0a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d0ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d0b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d0b8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x20D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0B8u;
    // 0x20d0bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D0B8u, 0x20D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0xc08372c  jal         func_20DCB0
    ctx->pc = 0x20D0C0u;
    SET_GPR_U32(ctx, 31, 0x20D0C8u);
    ctx->pc = 0x20DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCB0u, 0x20D0C0u, 0x20D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C8u;
label_20d0c8:
    // 0x20d0c8: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d0cc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20D0CCu;
    {
        const bool branch_taken_0x20d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0cc) {
            ctx->pc = 0x20D194u;
            goto label_20d194;
        }
    }
    ctx->pc = 0x20D0D4u;
    // 0x20d0d4: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d0d8: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x20d0dc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x20d0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d0e4: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
    // 0x20d0e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d0ec: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x20d0f0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x20d0f4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d0f8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d100: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
    // 0x20d104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d108: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d108u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x20d10c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d10cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d110: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x20d114: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d118: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x20d11c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d11cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d120: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d124: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x20d128: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d128u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d12c: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d130: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d134: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d138: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d13c: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d140: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d140u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d144: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x20d148: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20d14c: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d150: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x20d154: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d158: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
    // 0x20d15c: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d15cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d160: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d164: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d164u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
    // 0x20d168: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d16c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d16cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d170: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
    // 0x20d174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d178: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
    // 0x20d17c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20d180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20d184: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x20d188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d18c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D18Cu;
    SET_GPR_U32(ctx, 31, 0x20D194u);
    ctx->pc = 0x20D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D18Cu;
    // 0x20d190: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D18Cu, 0x20D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D194u;
label_20d194:
    // 0x20d194: 0x0  nop
    ctx->pc = 0x20d194u;
    // NOP
    // 0x20d198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x20d19c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d1a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d1a4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d1a8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
    // 0x20d1ac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1b8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d1bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d1c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d1c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d1cc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D1CCu;
    SET_GPR_U32(ctx, 31, 0x20D1D4u);
    ctx->pc = 0x20D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1CCu;
    // 0x20d1d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D1CCu, 0x20D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1D4u;
label_20d1d4:
    // 0x20d1d4: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x20D1D4u;
    SET_GPR_U32(ctx, 31, 0x20D1DCu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x20D1D4u, 0x20D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1DCu;
label_20d1dc:
    // 0x20d1dc: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x20D1DCu;
    SET_GPR_U32(ctx, 31, 0x20D1E4u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x20D1DCu, 0x20D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1E4u;
label_20d1e4:
    // 0x20d1e4: 0xc04e120  jal         func_138480
    ctx->pc = 0x20D1E4u;
    SET_GPR_U32(ctx, 31, 0x20D1ECu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D1E4u, 0x20D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1ECu;
label_20d1ec:
    // 0x20d1ec: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x20D1ECu;
    SET_GPR_U32(ctx, 31, 0x20D1F4u);
    ctx->pc = 0x20D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1ECu;
    // 0x20d1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D1ECu, 0x20D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1F4u;
label_20d1f4:
    // 0x20d1f4: 0xc060258  jal         func_180960
    ctx->pc = 0x20D1F4u;
    SET_GPR_U32(ctx, 31, 0x20D1FCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D1F4u, 0x20D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1FCu;
label_20d1fc:
    // 0x20d1fc: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x20d200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D200u;
    {
        const bool branch_taken_0x20d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d200) {
            ctx->pc = 0x20D218u;
            goto label_20d218;
        }
    }
    ctx->pc = 0x20D208u;
    // 0x20d208: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x20d20c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D20Cu;
    {
        const bool branch_taken_0x20d20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D20Cu;
        // 0x20d210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d20c) {
            ctx->pc = 0x20D218u;
            goto label_20d218;
        }
    }
    ctx->pc = 0x20D214u;
    // 0x20d214: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20d214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20d218:
    // 0x20d218: 0xc04e198  jal         func_138660
    ctx->pc = 0x20D218u;
    SET_GPR_U32(ctx, 31, 0x20D220u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20D218u, 0x20D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D220u;
label_20d220:
    // 0x20d220: 0x1040ff69  beqz        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x20D220u;
    {
        const bool branch_taken_0x20d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d220) {
            ctx->pc = 0x20CFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cfc8;
        }
    }
    ctx->pc = 0x20D228u;
label_20d228:
    // 0x20d228: 0x8f82916c  lw          $v0, -0x6E94($gp)
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d22c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D22Cu;
    {
        const bool branch_taken_0x20d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D22Cu;
        // 0x20d230: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d22c) {
            ctx->pc = 0x20D244u;
            goto label_20d244;
        }
    }
    ctx->pc = 0x20D234u;
    // 0x20d234: 0xc078050  jal         func_1E0140
    ctx->pc = 0x20D234u;
    SET_GPR_U32(ctx, 31, 0x20D23Cu);
    ctx->pc = 0x20D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D234u;
    // 0x20d238: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x20D234u, 0x20D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D23Cu;
label_20d23c:
    // 0x20d23c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D23Cu;
    {
        const bool branch_taken_0x20d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d23c) {
            ctx->pc = 0x20D24Cu;
            goto label_20d24c;
        }
    }
    ctx->pc = 0x20D244u;
label_20d244:
    // 0x20d244: 0xc078050  jal         func_1E0140
    ctx->pc = 0x20D244u;
    SET_GPR_U32(ctx, 31, 0x20D24Cu);
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x20D244u, 0x20D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D24Cu;
label_20d24c:
    // 0x20d24c: 0xc078070  jal         func_1E01C0
    ctx->pc = 0x20D24Cu;
    SET_GPR_U32(ctx, 31, 0x20D254u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x20D24Cu, 0x20D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D254u;
label_20d254:
    // 0x20d254: 0xc083694  jal         func_20DA50
    ctx->pc = 0x20D254u;
    SET_GPR_U32(ctx, 31, 0x20D25Cu);
    ctx->pc = 0x20DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA50u, 0x20D254u, 0x20D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D25Cu;
label_20d25c:
    // 0x20d25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d260: 0xaf839138  sw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 3));
    // 0x20d264: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x20D264u;
    {
        const bool branch_taken_0x20d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D264u;
        // 0x20d268: 0xaf839130  sw          $v1, -0x6ED0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d264) {
            ctx->pc = 0x20D4B8u;
            goto label_20d4b8;
        }
    }
    ctx->pc = 0x20D26Cu;
label_20d26c:
    // 0x20d26c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20D26Cu;
    {
        const bool branch_taken_0x20d26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d26c) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D274u;
    // 0x20d274: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x20d278: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d27c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D27Cu;
    {
        const bool branch_taken_0x20d27c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D27Cu;
        // 0x20d280: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d27c) {
            ctx->pc = 0x20D290u;
            goto label_20d290;
        }
    }
    ctx->pc = 0x20D284u;
    // 0x20d284: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D284u;
    {
        const bool branch_taken_0x20d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d284) {
            ctx->pc = 0x20D290u;
            goto label_20d290;
        }
    }
    ctx->pc = 0x20D28Cu;
    // 0x20d28c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20d290:
    // 0x20d290: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20d290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
    // 0x20d294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d298: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D298u;
    {
        const bool branch_taken_0x20d298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d298) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D2A0u;
    // 0x20d2a0: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d2a8: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
    // 0x20d2ac: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
    // 0x20d2b0: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20d2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x20d2b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D2B4u;
    {
        const bool branch_taken_0x20d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B4u;
        // 0x20d2b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2b4) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D2BCu;
    // 0x20d2bc: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20d2c0:
    // 0x20d2c0: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d2c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D2C8u;
    {
        const bool branch_taken_0x20d2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d2c8) {
            ctx->pc = 0x20D308u;
            goto label_20d308;
        }
    }
    ctx->pc = 0x20D2D0u;
    // 0x20d2d0: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20d2d8: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d2dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2DCu;
    {
        const bool branch_taken_0x20d2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d2dc) {
            ctx->pc = 0x20D2ECu;
            goto label_20d2ec;
        }
    }
    ctx->pc = 0x20D2E4u;
    // 0x20d2e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2E4u;
    {
        const bool branch_taken_0x20d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2E4u;
        // 0x20d2e8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2e4) {
            ctx->pc = 0x20D2F4u;
            goto label_20d2f4;
        }
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x20d2f0: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20d2f4:
    // 0x20d2f4: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20d2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20d2f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2F8u;
    {
        const bool branch_taken_0x20d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d2f8) {
            ctx->pc = 0x20D308u;
            goto label_20d308;
        }
    }
    ctx->pc = 0x20D300u;
    // 0x20d300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d304: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20d308:
    // 0x20d308: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x20D308u;
    SET_GPR_U32(ctx, 31, 0x20D310u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20D308u, 0x20D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D310u;
label_20d310:
    // 0x20d310: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x20D310u;
    SET_GPR_U32(ctx, 31, 0x20D318u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x20D310u, 0x20D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D318u;
label_20d318:
    // 0x20d318: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x20D318u;
    SET_GPR_U32(ctx, 31, 0x20D320u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D318u, 0x20D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D320u;
label_20d320:
    // 0x20d320: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x20d324: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d328: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x20d32c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d334: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
    // 0x20d338: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d344: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d34c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d354: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d358: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D358u;
    SET_GPR_U32(ctx, 31, 0x20D360u);
    ctx->pc = 0x20D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D358u;
    // 0x20d35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D358u, 0x20D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D360u;
label_20d360:
    // 0x20d360: 0xc08372c  jal         func_20DCB0
    ctx->pc = 0x20D360u;
    SET_GPR_U32(ctx, 31, 0x20D368u);
    ctx->pc = 0x20DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCB0u, 0x20D360u, 0x20D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D368u;
label_20d368:
    // 0x20d368: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d36c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20D36Cu;
    {
        const bool branch_taken_0x20d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D36Cu;
        // 0x20d370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d36c) {
            ctx->pc = 0x20D434u;
            goto label_20d434;
        }
    }
    ctx->pc = 0x20D374u;
    // 0x20d374: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d378: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x20d37c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x20d380: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d384: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
    // 0x20d388: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d38c: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x20d390: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x20d394: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d398: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a0: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
    // 0x20d3a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a8: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x20d3ac: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d3b0: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x20d3b4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d3b8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x20d3bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d3c4: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x20d3c8: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d3cc: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d3d0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d3d4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d3d8: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d3dc: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d3e0: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d3e4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x20d3e8: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20d3ec: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d3f0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x20d3f4: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d3f8: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
    // 0x20d3fc: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d404: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d404u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
    // 0x20d408: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d40c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d40cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d410: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
    // 0x20d414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d418: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
    // 0x20d41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20d420: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20d424: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x20d428: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d42c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D42Cu;
    SET_GPR_U32(ctx, 31, 0x20D434u);
    ctx->pc = 0x20D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D42Cu;
    // 0x20d430: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D42Cu, 0x20D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D434u;
label_20d434:
    // 0x20d434: 0x0  nop
    ctx->pc = 0x20d434u;
    // NOP
    // 0x20d438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x20d43c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d440: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d444: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d448: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
    // 0x20d44c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d458: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d46c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D46Cu, 0x20D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x20D474u, 0x20D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x20D47Cu;
    SET_GPR_U32(ctx, 31, 0x20D484u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x20D47Cu, 0x20D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D484u;
label_20d484:
    // 0x20d484: 0xc04e120  jal         func_138480
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x20D48Cu;
    SET_GPR_U32(ctx, 31, 0x20D494u);
    ctx->pc = 0x20D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D48Cu;
    // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D48Cu, 0x20D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0xc060258  jal         func_180960
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D494u, 0x20D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x8f839164  lw          $v1, -0x6E9C($gp)
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x20d4a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D4A0u;
    {
        const bool branch_taken_0x20d4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d4a0) {
            ctx->pc = 0x20D4B8u;
            goto label_20d4b8;
        }
    }
    ctx->pc = 0x20D4A8u;
    // 0x20d4a8: 0x8f838730  lw          $v1, -0x78D0($gp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x20d4ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D4ACu;
    {
        const bool branch_taken_0x20d4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4ACu;
        // 0x20d4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4ac) {
            ctx->pc = 0x20D4B8u;
            goto label_20d4b8;
        }
    }
    ctx->pc = 0x20D4B4u;
    // 0x20d4b4: 0xaf839168  sw          $v1, -0x6E98($gp)
    ctx->pc = 0x20d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 3));
label_20d4b8:
    // 0x20d4b8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
    // 0x20d4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d4c0: 0x1083ff6a  beq         $a0, $v1, . + 4 + (-0x96 << 2)
    ctx->pc = 0x20D4C0u;
    {
        const bool branch_taken_0x20d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d4c0) {
            ctx->pc = 0x20D26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d26c;
        }
    }
    ctx->pc = 0x20D4C8u;
    // 0x20d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x20d4ccu;
}
