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

// Function: entry_001a0268
// Address: 0x1a0268 - 0x1a0288
void entry_001a0268_0x1a0268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0268_0x1a0268");
#endif

    ctx->pc = 0x1a0268u;

    // 0x1a0268: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A02A4u;
            return;
        }
    }
    ctx->pc = 0x1A0270u;
    // 0x1a0270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0270u;
    {
        const bool branch_taken_0x1a0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0270) {
            ctx->pc = 0x1A0288u;
            return;
        }
    }
    ctx->pc = 0x1A0278u;
    // 0x1a0278: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0278u;
    {
        const bool branch_taken_0x1a0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0278u;
        // 0x1a027c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0278) {
            ctx->pc = 0x1A029Cu;
            return;
        }
    }
    ctx->pc = 0x1A0280u;
    // 0x1a0280: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0280u;
    {
        const bool branch_taken_0x1a0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0280u;
        // 0x1a0284: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0280) {
            ctx->pc = 0x1A02B0u;
            return;
        }
    }
    ctx->pc = 0x1A0288u;
}
