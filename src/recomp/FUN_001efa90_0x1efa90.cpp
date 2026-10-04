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

// Function: FUN_001efa90
// Address: 0x1efa90 - 0x1efb0c
void FUN_001efa90_0x1efa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efa90_0x1efa90");
#endif

    ctx->pc = 0x1efa90u;

    // 0x1efa90: 0x8f848f70  lw          $a0, -0x7090($gp)
    ctx->pc = 0x1efa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1efa94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efa98: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EFA98u;
    {
        const bool branch_taken_0x1efa98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA98u;
        // 0x1efa9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa98) {
            ctx->pc = 0x1EFAD8u;
            goto label_1efad8;
        }
    }
    ctx->pc = 0x1EFAA0u;
    // 0x1efaa0: 0x8f848f6c  lw          $a0, -0x7094($gp)
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1efaa4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1efaa8: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1efaa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1efaac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFAACu;
    {
        const bool branch_taken_0x1efaac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAACu;
        // 0x1efab0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaac) {
            ctx->pc = 0x1EFABCu;
            goto label_1efabc;
        }
    }
    ctx->pc = 0x1EFAB4u;
    // 0x1efab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFAB4u;
    {
        const bool branch_taken_0x1efab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB4u;
        // 0x1efab8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab4) {
            ctx->pc = 0x1EFAC0u;
            goto label_1efac0;
        }
    }
    ctx->pc = 0x1EFABCu;
label_1efabc:
    // 0x1efabc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1efac0:
    // 0x1efac0: 0xaf838f6c  sw          $v1, -0x7094($gp)
    ctx->pc = 0x1efac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
    // 0x1efac4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1efac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1efac8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFAC8u;
    {
        const bool branch_taken_0x1efac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efac8) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAD0u;
    // 0x1efad0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EFAD0u;
    {
        const bool branch_taken_0x1efad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD0u;
        // 0x1efad4: 0xaf808f70  sw          $zero, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efad0) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAD8u;
label_1efad8:
    // 0x1efad8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFAD8u;
    {
        const bool branch_taken_0x1efad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1efad8) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFAE0u;
    // 0x1efae0: 0x8f848f6c  lw          $a0, -0x7094($gp)
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1efae4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1efae8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1efae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1efaec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFAECu;
    {
        const bool branch_taken_0x1efaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAECu;
        // 0x1efaf0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaec) {
            ctx->pc = 0x1EFAFCu;
            goto label_1efafc;
        }
    }
    ctx->pc = 0x1EFAF4u;
    // 0x1efaf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFAF4u;
    {
        const bool branch_taken_0x1efaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF4u;
        // 0x1efaf8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaf4) {
            ctx->pc = 0x1EFB00u;
            goto label_1efb00;
        }
    }
    ctx->pc = 0x1EFAFCu;
label_1efafc:
    // 0x1efafc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1efafcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efb00:
    // 0x1efb00: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB00u;
    {
        const bool branch_taken_0x1efb00 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB00u;
        // 0x1efb04: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb00) {
            ctx->pc = 0x1EFB0Cu;
            return;
        }
    }
    ctx->pc = 0x1EFB08u;
    // 0x1efb08: 0xaf808f70  sw          $zero, -0x7090($gp)
    ctx->pc = 0x1efb08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
    ctx->pc = 0x1efb0cu;
}
