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

// Function: entry_00181804
// Address: 0x181804 - 0x18181c
void entry_00181804_0x181804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181804_0x181804");
#endif

    ctx->pc = 0x181804u;

    // 0x181804: 0x0  nop
    ctx->pc = 0x181804u;
    // NOP
    // 0x181808: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x181808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18180c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18180cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181810: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x181810u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x181814: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x181814u;
    {
        const bool branch_taken_0x181814 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181814u;
        // 0x181818: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181814) {
            ctx->pc = 0x1817DCu;
            return;
        }
    }
    ctx->pc = 0x18181Cu;
}
