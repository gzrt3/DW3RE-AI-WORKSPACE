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

// Function: FUN_001efef0
// Address: 0x1efef0 - 0x1eff6c
void FUN_001efef0_0x1efef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efef0_0x1efef0");
#endif

    ctx->pc = 0x1efef0u;

    // 0x1efef0: 0x8f848f78  lw          $a0, -0x7088($gp)
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938488)));
    // 0x1efef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efef8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EFEF8u;
    {
        const bool branch_taken_0x1efef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF8u;
        // 0x1efefc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efef8) {
            ctx->pc = 0x1EFF38u;
            goto label_1eff38;
        }
    }
    ctx->pc = 0x1EFF00u;
    // 0x1eff00: 0x8f848f74  lw          $a0, -0x708C($gp)
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1eff04: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1eff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eff08: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1eff08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eff0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFF0Cu;
    {
        const bool branch_taken_0x1eff0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF0Cu;
        // 0x1eff10: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff0c) {
            ctx->pc = 0x1EFF1Cu;
            goto label_1eff1c;
        }
    }
    ctx->pc = 0x1EFF14u;
    // 0x1eff14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFF14u;
    {
        const bool branch_taken_0x1eff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF14u;
        // 0x1eff18: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff14) {
            ctx->pc = 0x1EFF20u;
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF1Cu;
label_1eff1c:
    // 0x1eff1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1eff20:
    // 0x1eff20: 0xaf838f74  sw          $v1, -0x708C($gp)
    ctx->pc = 0x1eff20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
    // 0x1eff24: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eff28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF30u;
    // 0x1eff30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EFF30u;
    {
        const bool branch_taken_0x1eff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF30u;
        // 0x1eff34: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff30) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF38u;
label_1eff38:
    // 0x1eff38: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFF38u;
    {
        const bool branch_taken_0x1eff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eff38) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF40u;
    // 0x1eff40: 0x8f848f74  lw          $a0, -0x708C($gp)
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1eff44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eff48: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1eff48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1eff4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1EFF5Cu;
            goto label_1eff5c;
        }
    }
    ctx->pc = 0x1EFF54u;
    // 0x1eff54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFF54u;
    {
        const bool branch_taken_0x1eff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF54u;
        // 0x1eff58: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff54) {
            ctx->pc = 0x1EFF60u;
            goto label_1eff60;
        }
    }
    ctx->pc = 0x1EFF5Cu;
label_1eff5c:
    // 0x1eff5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eff5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eff60:
    // 0x1eff60: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFF60u;
    {
        const bool branch_taken_0x1eff60 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff60) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF68u;
    // 0x1eff68: 0xaf808f78  sw          $zero, -0x7088($gp)
    ctx->pc = 0x1eff68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
    ctx->pc = 0x1eff6cu;
}
