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

// Function: entry_00239d30
// Address: 0x239d30 - 0x239da4
void entry_00239d30_0x239d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239d30_0x239d30");
#endif

    switch (ctx->pc) {
        case 0x239d50u: goto label_239d50;
        default: break;
    }

    ctx->pc = 0x239d30u;

    // 0x239d30: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
    // 0x239d34: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x239d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x239d38: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239d3c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239d40: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239d44: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x239d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239D48u;
    {
        const bool branch_taken_0x239d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D48u;
        // 0x239d4c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d48) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239D50u;
label_239d50:
    // 0x239d50: 0x501013d  bgez        $t0, . + 4 + (0x13D << 2)
    ctx->pc = 0x239D50u;
    {
        const bool branch_taken_0x239d50 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D50u;
        // 0x239d54: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d50) {
            ctx->pc = 0x23A248u;
            return;
        }
    }
    ctx->pc = 0x239D58u;
    // 0x239d58: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239d5c:
    // 0x239d5c: 0x52050011  beql        $s0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239DA4u;
            return;
        }
    }
    ctx->pc = 0x239D64u;
    // 0x239d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239d68: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x239d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239d6c: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x239d70: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x239d74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239d78: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x239d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239d7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x239d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x239d80: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x239d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x239d84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D84u;
        // 0x239d88: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239D90u;
            goto label_239d90;
        }
    }
    ctx->pc = 0x239D8Cu;
    // 0x239d8c: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x239d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_239d90:
    // 0x239d90: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239d94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x239D94u;
    {
        const bool branch_taken_0x239d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d94) {
            ctx->pc = 0x239D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239d50;
        }
    }
    ctx->pc = 0x239D9Cu;
    // 0x239d9c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x239da0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x239da4u;
}
