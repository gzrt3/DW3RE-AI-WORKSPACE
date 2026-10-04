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

// Function: entry_00199d6c
// Address: 0x199d6c - 0x199db0
void entry_00199d6c_0x199d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d6c_0x199d6c");
#endif

    ctx->pc = 0x199d6cu;

    // 0x199d6c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x199D6Cu;
    {
        const bool branch_taken_0x199d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D6Cu;
        // 0x199d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d6c) {
            ctx->pc = 0x199DE4u;
            return;
        }
    }
    ctx->pc = 0x199D74u;
    // 0x199d74: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x199d78: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x199d7c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x199d80: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x199d80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
    // 0x199d84: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x199d88: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
    // 0x199d8c: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
    // 0x199d90: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x199d94: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x199d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x199d98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D98u;
        // 0x199d9c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DCCu;
            return;
        }
    }
    ctx->pc = 0x199DA0u;
    // 0x199da0: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x199da4: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199da8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199db0u;
}
