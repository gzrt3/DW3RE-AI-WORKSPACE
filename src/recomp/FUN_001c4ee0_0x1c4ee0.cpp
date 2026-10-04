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

// Function: FUN_001c4ee0
// Address: 0x1c4ee0 - 0x1c4f40
void FUN_001c4ee0_0x1c4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4ee0_0x1c4ee0");
#endif

    switch (ctx->pc) {
        case 0x1c4ef4u: goto label_1c4ef4;
        default: break;
    }

    ctx->pc = 0x1c4ee0u;

    // 0x1c4ee0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c4ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EECu;
    {
        const bool branch_taken_0x1c4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EECu;
        // 0x1c4ef0: 0x24843940  addiu       $a0, $a0, 0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eec) {
            ctx->pc = 0x1C4EFCu;
            goto label_1c4efc;
        }
    }
    ctx->pc = 0x1C4EF4u;
label_1c4ef4:
    // 0x1c4ef4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c4ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4efc:
    // 0x1c4efc: 0x0  nop
    ctx->pc = 0x1c4efcu;
    // NOP
    // 0x1c4f00: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4f04: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c4f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4f08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F08u;
    {
        const bool branch_taken_0x1c4f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F08u;
        // 0x1c4f0c: 0x2843007f  slti        $v1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f08) {
            ctx->pc = 0x1C4F18u;
            goto label_1c4f18;
        }
    }
    ctx->pc = 0x1C4F10u;
    // 0x1c4f10: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C4F10u;
    {
        const bool branch_taken_0x1c4f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f10) {
            ctx->pc = 0x1C4EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4ef4;
        }
    }
    ctx->pc = 0x1C4F18u;
label_1c4f18:
    // 0x1c4f18: 0x2843007f  slti        $v1, $v0, 0x7F
    ctx->pc = 0x1c4f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1c4f1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F1Cu;
    {
        const bool branch_taken_0x1c4f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F1Cu;
        // 0x1c4f20: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f1c) {
            ctx->pc = 0x1C4F2Cu;
            goto label_1c4f2c;
        }
    }
    ctx->pc = 0x1C4F24u;
    // 0x1c4f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F24u;
    {
        const bool branch_taken_0x1c4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F24u;
        // 0x1c4f28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f24) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F2Cu;
label_1c4f2c:
    // 0x1c4f2c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c4f30: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1c4f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c4f3c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c4f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1c4f40u;
}
