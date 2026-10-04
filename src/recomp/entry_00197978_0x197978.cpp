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

// Function: entry_00197978
// Address: 0x197978 - 0x197994
void entry_00197978_0x197978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197978_0x197978");
#endif

    ctx->pc = 0x197978u;

    // 0x197978: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19797c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19797Cu;
    {
        const bool branch_taken_0x19797c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x19797c) {
            ctx->pc = 0x197994u;
            return;
        }
    }
    ctx->pc = 0x197984u;
    // 0x197984: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x197984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197988: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x197988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x19798c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19798Cu;
    {
        const bool branch_taken_0x19798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19798Cu;
        // 0x197990: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19798c) {
            ctx->pc = 0x1979E8u;
            return;
        }
    }
    ctx->pc = 0x197994u;
}
