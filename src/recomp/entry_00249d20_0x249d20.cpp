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

// Function: entry_00249d20
// Address: 0x249d20 - 0x249d3c
void entry_00249d20_0x249d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249d20_0x249d20");
#endif

    ctx->pc = 0x249d20u;

    // 0x249d20: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x249d24: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x249d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x249d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x249d2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249D2Cu;
    {
        const bool branch_taken_0x249d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d2c) {
            ctx->pc = 0x249D3Cu;
            return;
        }
    }
    ctx->pc = 0x249D34u;
    // 0x249d34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d34) {
            ctx->pc = 0x249D54u;
            return;
        }
    }
    ctx->pc = 0x249D3Cu;
}
