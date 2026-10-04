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

// Function: entry_00199e30
// Address: 0x199e30 - 0x199ed8
void entry_00199e30_0x199e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199e30_0x199e30");
#endif

    switch (ctx->pc) {
        case 0x199e48u: goto label_199e48;
        case 0x199e88u: goto label_199e88;
        case 0x199ea8u: goto label_199ea8;
        default: break;
    }

    ctx->pc = 0x199e30u;

    // 0x199e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e34: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x199e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x199e38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x199e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e3c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x199E3Cu;
    {
        const bool branch_taken_0x199e3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E3Cu;
        // 0x199e40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e3c) {
            ctx->pc = 0x199E6Cu;
            goto label_199e6c;
        }
    }
    ctx->pc = 0x199E44u;
    // 0x199e44: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_199e48:
    // 0x199e48: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x199e4c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x199e50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x199e54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x199e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199e58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199e60: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x199e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x199e64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199E64u;
    {
        const bool branch_taken_0x199e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E64u;
        // 0x199e68: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e64) {
            ctx->pc = 0x199E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e48;
        }
    }
    ctx->pc = 0x199E6Cu;
label_199e6c:
    // 0x199e6c: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x199E6Cu;
    {
        const bool branch_taken_0x199e6c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x199E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E6Cu;
        // 0x199e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e6c) {
            ctx->pc = 0x199ED8u;
            return;
        }
    }
    ctx->pc = 0x199E74u;
    // 0x199e74: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x199e78: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x199e7c: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x199e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x199e80: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
    // 0x199e84: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x199e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_199e88:
    // 0x199e88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199e8c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x199e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x199e90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199E90u;
    {
        const bool branch_taken_0x199e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E90u;
        // 0x199e94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e90) {
            ctx->pc = 0x199EC4u;
            goto label_199ec4;
        }
    }
    ctx->pc = 0x199E98u;
    // 0x199e98: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x199e9c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199ea0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ea8:
    // 0x199ea8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x199ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199eac: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x199EACu;
    {
        const bool branch_taken_0x199eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EACu;
        // 0x199eb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199eac) {
            ctx->pc = 0x199CB8u;
            return;
        }
    }
    ctx->pc = 0x199EB4u;
    // 0x199eb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199eb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199ebc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199EBCu;
    {
        const bool branch_taken_0x199ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EBCu;
        // 0x199ec0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ebc) {
            ctx->pc = 0x199EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ea8;
        }
    }
    ctx->pc = 0x199EC4u;
label_199ec4:
    // 0x199ec4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x199ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199ec8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199ecc: 0xb6182a  slt         $v1, $a1, $s6
    ctx->pc = 0x199eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x199ed0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x199ED0u;
    {
        const bool branch_taken_0x199ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ED0u;
        // 0x199ed4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ed0) {
            ctx->pc = 0x199E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e88;
        }
    }
    ctx->pc = 0x199ED8u;
}
