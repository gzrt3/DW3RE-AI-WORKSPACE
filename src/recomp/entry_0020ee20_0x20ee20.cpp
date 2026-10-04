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

// Function: entry_0020ee20
// Address: 0x20ee20 - 0x20ee3c
void entry_0020ee20_0x20ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ee20_0x20ee20");
#endif

    ctx->pc = 0x20ee20u;

    // 0x20ee20: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x20ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20ee24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x20ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x20ee28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20ee2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EE2Cu;
    {
        const bool branch_taken_0x20ee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee2c) {
            ctx->pc = 0x20EE3Cu;
            return;
        }
    }
    ctx->pc = 0x20EE34u;
    // 0x20ee34: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x20EE34u;
    {
        const bool branch_taken_0x20ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE34u;
        // 0x20ee38: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee34) {
            ctx->pc = 0x20ED70u;
            return;
        }
    }
    ctx->pc = 0x20EE3Cu;
}
