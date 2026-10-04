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

// Function: entry_001d0ee0
// Address: 0x1d0ee0 - 0x1d0ef8
void entry_001d0ee0_0x1d0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0ee0_0x1d0ee0");
#endif

    ctx->pc = 0x1d0ee0u;

    // 0x1d0ee0: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1d0ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x1d0ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EE8u;
    {
        const bool branch_taken_0x1d0ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0ee8) {
            ctx->pc = 0x1D0EF8u;
            return;
        }
    }
    ctx->pc = 0x1D0EF0u;
    // 0x1d0ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EF0u;
    {
        const bool branch_taken_0x1d0ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF0u;
        // 0x1d0ef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ef0) {
            ctx->pc = 0x1D0F00u;
            return;
        }
    }
    ctx->pc = 0x1D0EF8u;
}
