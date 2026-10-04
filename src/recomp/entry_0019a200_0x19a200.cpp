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

// Function: entry_0019a200
// Address: 0x19a200 - 0x19a224
void entry_0019a200_0x19a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a200_0x19a200");
#endif

    ctx->pc = 0x19a200u;

    // 0x19a200: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x19a200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x19a204: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x19a208: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A208u;
    {
        const bool branch_taken_0x19a208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A208u;
        // 0x19a20c: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a208) {
            ctx->pc = 0x19A224u;
            return;
        }
    }
    ctx->pc = 0x19A210u;
    // 0x19a210: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x19a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x19a214: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19a218: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x19a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x19a21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A21Cu;
    {
        const bool branch_taken_0x19a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A21Cu;
        // 0x19a220: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a21c) {
            ctx->pc = 0x19A228u;
            return;
        }
    }
    ctx->pc = 0x19A224u;
}
