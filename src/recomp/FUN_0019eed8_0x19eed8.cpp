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

// Function: FUN_0019eed8
// Address: 0x19eed8 - 0x19ef54
void FUN_0019eed8_0x19eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019eed8_0x19eed8");
#endif

    ctx->pc = 0x19eed8u;

    // 0x19eed8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19eed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eedc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19eee0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19eee4: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x19eee8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x19eee8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x19eeec: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEECu;
        // 0x19eef0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EEF4u;
    // 0x19eef4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19eef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19eefc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x19ef00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19ef04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ef08: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x19ef08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x19ef0c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19EF0Cu;
    {
        const bool branch_taken_0x19ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF0Cu;
        // 0x19ef10: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef0c) {
            ctx->pc = 0x19EF54u;
            return;
        }
    }
    ctx->pc = 0x19EF14u;
    // 0x19ef14: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x19ef18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19EF18u;
    {
        const bool branch_taken_0x19ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF18u;
        // 0x19ef1c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef18) {
            ctx->pc = 0x19EF50u;
            goto label_19ef50;
        }
    }
    ctx->pc = 0x19EF20u;
label_19ef20:
    // 0x19ef20: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x19EF20u;
    {
        const bool branch_taken_0x19ef20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF20u;
        // 0x19ef24: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef20) {
            ctx->pc = 0x19EF54u;
            return;
        }
    }
    ctx->pc = 0x19EF28u;
    // 0x19ef28: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x19ef28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x19ef2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ef30: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x19ef34: 0x91823  negu        $v1, $t1
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x19ef38: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19ef3c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ef40: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19ef40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ef44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EF44u;
    {
        const bool branch_taken_0x19ef44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF44u;
        // 0x19ef48: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef44) {
            ctx->pc = 0x19EF50u;
            goto label_19ef50;
        }
    }
    ctx->pc = 0x19EF4Cu;
    // 0x19ef4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ef50:
    // 0x19ef50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x19ef54u;
}
