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

// Function: entry_00249dc0
// Address: 0x249dc0 - 0x249dec
void entry_00249dc0_0x249dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249dc0_0x249dc0");
#endif

    ctx->pc = 0x249dc0u;

    // 0x249dc0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249dc4: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x249dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x249dc8: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x249dcc: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x249dd0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249dd4: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249EE4u;
            return;
        }
    }
    ctx->pc = 0x249DDCu;
    // 0x249ddc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249de0: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x249DE0u;
    {
        const bool branch_taken_0x249de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DE0u;
        // 0x249de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249de0) {
            ctx->pc = 0x249ED0u;
            return;
        }
    }
    ctx->pc = 0x249DE8u;
    // 0x249de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x249decu;
}
