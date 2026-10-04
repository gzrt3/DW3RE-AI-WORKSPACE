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

// Function: FUN_00144ce0
// Address: 0x144ce0 - 0x144d38
void FUN_00144ce0_0x144ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144ce0_0x144ce0");
#endif

    switch (ctx->pc) {
        case 0x144cfcu: goto label_144cfc;
        default: break;
    }

    ctx->pc = 0x144ce0u;

    // 0x144ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x144ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce4: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x144ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x144ce8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x144CE8u;
    {
        const bool branch_taken_0x144ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CE8u;
        // 0x144cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ce8) {
            ctx->pc = 0x144D1Cu;
            goto label_144d1c;
        }
    }
    ctx->pc = 0x144CF0u;
    // 0x144cf0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x144cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x144cf4: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x144cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x144cf8: 0x24c6bd50  addiu       $a2, $a2, -0x42B0
    ctx->pc = 0x144cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950224));
label_144cfc:
    // 0x144cfc: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x144d00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x144d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x144d04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144d08: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x144d0c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x144d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x144d10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144d14: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144D14u;
    {
        const bool branch_taken_0x144d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d14) {
            ctx->pc = 0x144CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144cfc;
        }
    }
    ctx->pc = 0x144D1Cu;
label_144d1c:
    // 0x144d1c: 0x0  nop
    ctx->pc = 0x144d1cu;
    // NOP
    // 0x144d20: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x144d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x144d24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x144D24u;
    {
        const bool branch_taken_0x144d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d24) {
            ctx->pc = 0x144D34u;
            goto label_144d34;
        }
    }
    ctx->pc = 0x144D2Cu;
    // 0x144d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x144D2Cu;
    {
        const bool branch_taken_0x144d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d2c) {
            ctx->pc = 0x144D38u;
            return;
        }
    }
    ctx->pc = 0x144D34u;
label_144d34:
    // 0x144d34: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    ctx->pc = 0x144d38u;
}
