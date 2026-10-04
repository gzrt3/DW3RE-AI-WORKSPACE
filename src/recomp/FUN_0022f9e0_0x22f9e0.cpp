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

// Function: FUN_0022f9e0
// Address: 0x22f9e0 - 0x22fa48
void FUN_0022f9e0_0x22f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022f9e0_0x22f9e0");
#endif

    switch (ctx->pc) {
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22fa00u: goto label_22fa00;
        default: break;
    }

    ctx->pc = 0x22f9e0u;

    // 0x22f9e0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x22f9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x22f9e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22f9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9e8: 0x24e74920  addiu       $a3, $a3, 0x4920
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18720));
    // 0x22f9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f9f0:
    // 0x22f9f0: 0x0  nop
    ctx->pc = 0x22f9f0u;
    // NOP
    // 0x22f9f4: 0x90e3005c  lbu         $v1, 0x5C($a3)
    ctx->pc = 0x22f9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x22f9f8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F9F8u;
    {
        const bool branch_taken_0x22f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9F8u;
        // 0x22f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9f8) {
            ctx->pc = 0x22FA34u;
            goto label_22fa34;
        }
    }
    ctx->pc = 0x22FA00u;
label_22fa00:
    // 0x22fa00: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22fa04: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x22fa04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22fa08: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA08u;
    {
        const bool branch_taken_0x22fa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22fa08) {
            ctx->pc = 0x22FA18u;
            goto label_22fa18;
        }
    }
    ctx->pc = 0x22FA10u;
    // 0x22fa10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22FA10u;
    {
        const bool branch_taken_0x22fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA10u;
        // 0x22fa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa10) {
            ctx->pc = 0x22FA28u;
            goto label_22fa28;
        }
    }
    ctx->pc = 0x22FA18u;
label_22fa18:
    // 0x22fa18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22fa1c: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22fa20: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22FA20u;
    {
        const bool branch_taken_0x22fa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa20) {
            ctx->pc = 0x22FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fa00;
        }
    }
    ctx->pc = 0x22FA28u;
label_22fa28:
    // 0x22fa28: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22fa2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA2Cu;
    {
        const bool branch_taken_0x22fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa2c) {
            ctx->pc = 0x22FA48u;
            return;
        }
    }
    ctx->pc = 0x22FA34u;
label_22fa34:
    // 0x22fa34: 0x0  nop
    ctx->pc = 0x22fa34u;
    // NOP
    // 0x22fa38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22fa3c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22fa3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22fa40: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22FA40u;
    {
        const bool branch_taken_0x22fa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA40u;
        // 0x22fa44: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa40) {
            ctx->pc = 0x22F9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f9f0;
        }
    }
    ctx->pc = 0x22FA48u;
}
