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

// Function: entry_001b30d4
// Address: 0x1b30d4 - 0x1b30f8
void entry_001b30d4_0x1b30d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b30d4_0x1b30d4");
#endif

    ctx->pc = 0x1b30d4u;

    // 0x1b30d4: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x1b30d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1b30d8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B30D8u;
    {
        const bool branch_taken_0x1b30d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D8u;
        // 0x1b30dc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d8) {
            ctx->pc = 0x1B30F8u;
            return;
        }
    }
    ctx->pc = 0x1B30E0u;
    // 0x1b30e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b30e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1b30e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b30ec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1b30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b30f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B30F0u;
    {
        const bool branch_taken_0x1b30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30F0u;
        // 0x1b30f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30f0) {
            ctx->pc = 0x1B3100u;
            return;
        }
    }
    ctx->pc = 0x1B30F8u;
}
