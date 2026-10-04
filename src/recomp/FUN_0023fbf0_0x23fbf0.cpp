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

// Function: FUN_0023fbf0
// Address: 0x23fbf0 - 0x23fc58
void FUN_0023fbf0_0x23fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fbf0_0x23fbf0");
#endif

    switch (ctx->pc) {
        case 0x23fc1cu: goto label_23fc1c;
        default: break;
    }

    ctx->pc = 0x23fbf0u;

    // 0x23fbf0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x23fbf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbf8: 0x24c63420  addiu       $a2, $a2, 0x3420
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13344));
    // 0x23fbfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23fbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc00: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23fc04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23fc04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc08: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x23fc08u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fc0c: 0x0  nop
    ctx->pc = 0x23fc0cu;
    // NOP
    // 0x23fc10: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x23fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x23fc14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23fc18: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x23fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_23fc1c:
    // 0x23fc1c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x23fc20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x23fc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fc24: 0x15030008  bne         $t0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FC24u;
    {
        const bool branch_taken_0x23fc24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC24u;
        // 0x23fc28: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc24) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC2Cu;
    // 0x23fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fc30: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x23fc34: 0x8c2335fc  lw          $v1, 0x35FC($at)
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x23fc38: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FC38u;
    {
        const bool branch_taken_0x23fc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23fc38) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC40u;
    // 0x23fc40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23FC40u;
    {
        const bool branch_taken_0x23fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC40u;
        // 0x23fc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc40) {
            ctx->pc = 0x23FC58u;
            return;
        }
    }
    ctx->pc = 0x23FC48u;
label_23fc48:
    // 0x23fc48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23fc4c: 0x28e30029  slti        $v1, $a3, 0x29
    ctx->pc = 0x23fc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x23fc50: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x23FC50u;
    {
        const bool branch_taken_0x23fc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC50u;
        // 0x23fc54: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc50) {
            ctx->pc = 0x23FC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc1c;
        }
    }
    ctx->pc = 0x23FC58u;
}
