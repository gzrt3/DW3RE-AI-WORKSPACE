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

// Function: FUN_0020aec0
// Address: 0x20aec0 - 0x20af68
void FUN_0020aec0_0x20aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020aec0_0x20aec0");
#endif

    ctx->pc = 0x20aec0u;

    // 0x20aec0: 0x8f839118  lw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x20aec4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AEC4u;
    {
        const bool branch_taken_0x20aec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aec4) {
            ctx->pc = 0x20AEECu;
            goto label_20aeec;
        }
    }
    ctx->pc = 0x20AECCu;
    // 0x20aecc: 0x8f839114  lw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
    // 0x20aed0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20aed4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AED4u;
    {
        const bool branch_taken_0x20aed4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x20AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED4u;
        // 0x20aed8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aed4) {
            ctx->pc = 0x20AEE8u;
            goto label_20aee8;
        }
    }
    ctx->pc = 0x20AEDCu;
    // 0x20aedc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20AEDCu;
    {
        const bool branch_taken_0x20aedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aedc) {
            ctx->pc = 0x20AEE8u;
            goto label_20aee8;
        }
    }
    ctx->pc = 0x20AEE4u;
    // 0x20aee4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x20aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_20aee8:
    // 0x20aee8: 0xaf839114  sw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 3));
label_20aeec:
    // 0x20aeec: 0x8f84911c  lw          $a0, -0x6EE4($gp)
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x20aef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aef4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20AEF4u;
    {
        const bool branch_taken_0x20aef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEF4u;
        // 0x20aef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aef4) {
            ctx->pc = 0x20AF34u;
            goto label_20af34;
        }
    }
    ctx->pc = 0x20AEFCu;
    // 0x20aefc: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x20af00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20af04: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x20af04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20af08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AF08u;
    {
        const bool branch_taken_0x20af08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF08u;
        // 0x20af0c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af08) {
            ctx->pc = 0x20AF18u;
            goto label_20af18;
        }
    }
    ctx->pc = 0x20AF10u;
    // 0x20af10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF10u;
    {
        const bool branch_taken_0x20af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF10u;
        // 0x20af14: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af10) {
            ctx->pc = 0x20AF1Cu;
            goto label_20af1c;
        }
    }
    ctx->pc = 0x20AF18u;
label_20af18:
    // 0x20af18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20af1c:
    // 0x20af1c: 0xaf839118  sw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
    // 0x20af20: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20af20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20af24: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF2Cu;
    // 0x20af2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20AF2Cu;
    {
        const bool branch_taken_0x20af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0xaf80911c  sw          $zero, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af2c) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF34u;
label_20af34:
    // 0x20af34: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20AF34u;
    {
        const bool branch_taken_0x20af34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20af34) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF3Cu;
    // 0x20af3c: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x20af40: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20af44: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20af48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AF48u;
    {
        const bool branch_taken_0x20af48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af48) {
            ctx->pc = 0x20AF58u;
            goto label_20af58;
        }
    }
    ctx->pc = 0x20AF50u;
    // 0x20af50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF50u;
    {
        const bool branch_taken_0x20af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF50u;
        // 0x20af54: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af50) {
            ctx->pc = 0x20AF5Cu;
            goto label_20af5c;
        }
    }
    ctx->pc = 0x20AF58u;
label_20af58:
    // 0x20af58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20af58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20af5c:
    // 0x20af5c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF5Cu;
    {
        const bool branch_taken_0x20af5c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF5Cu;
        // 0x20af60: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af5c) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF64u;
    // 0x20af64: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x20af64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
    ctx->pc = 0x20af68u;
}
