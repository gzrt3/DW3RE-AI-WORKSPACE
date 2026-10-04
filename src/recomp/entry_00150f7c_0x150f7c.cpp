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

// Function: entry_00150f7c
// Address: 0x150f7c - 0x150fb4
void entry_00150f7c_0x150f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150f7c_0x150f7c");
#endif

    ctx->pc = 0x150f7cu;

    // 0x150f7c: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x150F7Cu;
    {
        const bool branch_taken_0x150f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F7Cu;
        // 0x150f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f7c) {
            ctx->pc = 0x1510CCu;
            return;
        }
    }
    ctx->pc = 0x150F84u;
    // 0x150f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150f88: 0xa2220231  sb          $v0, 0x231($s1)
    ctx->pc = 0x150f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 2));
    // 0x150f8c: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x150f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x150f90: 0x922201a2  lbu         $v0, 0x1A2($s1)
    ctx->pc = 0x150f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x150f94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150F94u;
    {
        const bool branch_taken_0x150f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f94) {
            ctx->pc = 0x150FE0u;
            return;
        }
    }
    ctx->pc = 0x150F9Cu;
    // 0x150f9c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x150fa0: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x150fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FA4u;
    {
        const bool branch_taken_0x150fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FA4u;
        // 0x150fa8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fa4) {
            ctx->pc = 0x150FB4u;
            return;
        }
    }
    ctx->pc = 0x150FACu;
    // 0x150fac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x150FACu;
    {
        const bool branch_taken_0x150fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fac) {
            ctx->pc = 0x150FDCu;
            return;
        }
    }
    ctx->pc = 0x150FB4u;
}
