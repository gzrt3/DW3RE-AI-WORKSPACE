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

// Function: entry_001405c4
// Address: 0x1405c4 - 0x1405f4
void entry_001405c4_0x1405c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405c4_0x1405c4");
#endif

    ctx->pc = 0x1405c4u;

    // 0x1405c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1405c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1405c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1405cc: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1405ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1405d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x1405F4u;
            return;
        }
    }
    ctx->pc = 0x1405D8u;
    // 0x1405d8: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1405dc: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1405e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1405E0u;
    {
        const bool branch_taken_0x1405e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1405e0) {
            ctx->pc = 0x1405F4u;
            return;
        }
    }
    ctx->pc = 0x1405E8u;
    // 0x1405e8: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x1405e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1405ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1405ECu;
    {
        const bool branch_taken_0x1405ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405ec) {
            ctx->pc = 0x140638u;
            return;
        }
    }
    ctx->pc = 0x1405F4u;
}
