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

// Function: entry_00175544
// Address: 0x175544 - 0x175554
void entry_00175544_0x175544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175544_0x175544");
#endif

    ctx->pc = 0x175544u;

    // 0x175544: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175544u;
    {
        const bool branch_taken_0x175544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175544) {
            ctx->pc = 0x175554u;
            return;
        }
    }
    ctx->pc = 0x17554Cu;
    // 0x17554c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17554Cu;
    {
        const bool branch_taken_0x17554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17554c) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175554u;
}
