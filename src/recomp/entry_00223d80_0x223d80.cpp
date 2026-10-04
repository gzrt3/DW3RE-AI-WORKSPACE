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

// Function: entry_00223d80
// Address: 0x223d80 - 0x223e00
void entry_00223d80_0x223d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223d80_0x223d80");
#endif

    switch (ctx->pc) {
        case 0x223dacu: goto label_223dac;
        default: break;
    }

    ctx->pc = 0x223d80u;

    // 0x223d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x223D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D94u;
    // 0x223d94: 0x0  nop
    ctx->pc = 0x223d94u;
    // NOP
    // 0x223d98: 0x0  nop
    ctx->pc = 0x223d98u;
    // NOP
    // 0x223d9c: 0x0  nop
    ctx->pc = 0x223d9cu;
    // NOP
    // 0x223da0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x223da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x223da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223da8: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x223da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
label_223dac:
    // 0x223dac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x223dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223db0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x223DB0u;
    {
        const bool branch_taken_0x223db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223db0) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DB8u;
    // 0x223db8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x223db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x223dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223DBCu;
    {
        const bool branch_taken_0x223dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223dbc) {
            ctx->pc = 0x223DCCu;
            goto label_223dcc;
        }
    }
    ctx->pc = 0x223DC4u;
    // 0x223dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223DC4u;
    {
        const bool branch_taken_0x223dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DC4u;
        // 0x223dc8: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dc4) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DCCu;
label_223dcc:
    // 0x223dcc: 0x0  nop
    ctx->pc = 0x223dccu;
    // NOP
    // 0x223dd0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x223dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223dd4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x223dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x223dd8: 0x9083009c  lbu         $v1, 0x9C($a0)
    ctx->pc = 0x223dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x223ddc: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x223ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x223de0: 0xa083009c  sb          $v1, 0x9C($a0)
    ctx->pc = 0x223de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 3));
    // 0x223de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x223de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_223de8:
    // 0x223de8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x223dec: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x223decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x223df0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x223DF0u;
    {
        const bool branch_taken_0x223df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF0u;
        // 0x223df4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223df0) {
            ctx->pc = 0x223DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223dac;
        }
    }
    ctx->pc = 0x223DF8u;
    // 0x223df8: 0x3e00008  jr          $ra
    ctx->pc = 0x223DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E00u;
}
