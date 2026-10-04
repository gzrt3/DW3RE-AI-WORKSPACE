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

// Function: entry_001366dc
// Address: 0x1366dc - 0x136758
void entry_001366dc_0x1366dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001366dc_0x1366dc");
#endif

    switch (ctx->pc) {
        case 0x136700u: goto label_136700;
        case 0x136714u: goto label_136714;
        case 0x136738u: goto label_136738;
        default: break;
    }

    ctx->pc = 0x1366dcu;

    // 0x1366dc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1366e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1366e8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1366ec: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1366ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1366f0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1366f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1366f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1366f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1366f8: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x1366F8u;
    SET_GPR_U32(ctx, 31, 0x136700u);
    ctx->pc = 0x1366FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366F8u;
    // 0x1366fc: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1366F8u, 0x136700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136700u;
label_136700:
    // 0x136700: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136704: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x136708: 0x8c24a3cc  lw          $a0, -0x5C34($at)
    ctx->pc = 0x136708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3CCu));
    // 0x13670c: 0xc04d00c  jal         func_134030
    ctx->pc = 0x13670Cu;
    SET_GPR_U32(ctx, 31, 0x136714u);
    ctx->pc = 0x136710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13670Cu;
    // 0x136710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134030u, 0x13670Cu, 0x136714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136714u;
label_136714:
    // 0x136714: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x136714u;
    {
        const bool branch_taken_0x136714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136714) {
            ctx->pc = 0x136788u;
            return;
        }
    }
    ctx->pc = 0x13671Cu;
    // 0x13671c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x136720: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x136720u;
    {
        const bool branch_taken_0x136720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136720u;
        // 0x136724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136720) {
            ctx->pc = 0x136758u;
            return;
        }
    }
    ctx->pc = 0x136728u;
    // 0x136728: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x136728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13672c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136730: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x136730u;
    SET_GPR_U32(ctx, 31, 0x136738u);
    ctx->pc = 0x136734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136730u;
    // 0x136734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x136730u, 0x136738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136738u;
label_136738:
    // 0x136738: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13673c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x13673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x136740: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x136740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x136744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136748: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13674c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13674Cu;
    {
        const bool branch_taken_0x13674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13674Cu;
        // 0x136750: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13674c) {
            ctx->pc = 0x136788u;
            return;
        }
    }
    ctx->pc = 0x136754u;
    // 0x136754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x136758u;
}
