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

// Function: entry_001b2d0c
// Address: 0x1b2d0c - 0x1b2d40
void entry_001b2d0c_0x1b2d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2d0c_0x1b2d0c");
#endif

    ctx->pc = 0x1b2d0cu;

    // 0x1b2d0c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2D0Cu;
    {
        const bool branch_taken_0x1b2d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D0Cu;
        // 0x1b2d10: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d0c) {
            ctx->pc = 0x1B2D40u;
            return;
        }
    }
    ctx->pc = 0x1B2D14u;
    // 0x1b2d14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2D14u;
    {
        const bool branch_taken_0x1b2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d14) {
            ctx->pc = 0x1B2D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2D14u;
            // 0x1b2d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2D30u;
            goto label_1b2d30;
        }
    }
    ctx->pc = 0x1B2D1Cu;
    // 0x1b2d1c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B2D1Cu;
    {
        const bool branch_taken_0x1b2d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D1Cu;
        // 0x1b2d20: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d1c) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2D24u;
    // 0x1b2d24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B2D24u;
    {
        const bool branch_taken_0x1b2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d24) {
            ctx->pc = 0x1B2D88u;
            return;
        }
    }
    ctx->pc = 0x1B2D2Cu;
    // 0x1b2d2c: 0x0  nop
    ctx->pc = 0x1b2d2cu;
    // NOP
label_1b2d30:
    // 0x1b2d30: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2D30u;
    {
        const bool branch_taken_0x1b2d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2d30) {
            ctx->pc = 0x1B2D60u;
            return;
        }
    }
    ctx->pc = 0x1B2D38u;
    // 0x1b2d38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2D38u;
    {
        const bool branch_taken_0x1b2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d38) {
            ctx->pc = 0x1B2D88u;
            return;
        }
    }
    ctx->pc = 0x1B2D40u;
}
