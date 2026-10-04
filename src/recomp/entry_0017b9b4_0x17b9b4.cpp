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

// Function: entry_0017b9b4
// Address: 0x17b9b4 - 0x17b9d0
void entry_0017b9b4_0x17b9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9b4_0x17b9b4");
#endif

    ctx->pc = 0x17b9b4u;

    // 0x17b9b4: 0x0  nop
    ctx->pc = 0x17b9b4u;
    // NOP
    // 0x17b9b8: 0x15280005  bne         $t1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B9B8u;
    {
        const bool branch_taken_0x17b9b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x17b9b8) {
            ctx->pc = 0x17B9D0u;
            return;
        }
    }
    ctx->pc = 0x17B9C0u;
    // 0x17b9c0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x17b9c4: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x17b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x17b9c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B9C8u;
    {
        const bool branch_taken_0x17b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9C8u;
        // 0x17b9cc: 0xad47001c  sw          $a3, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9c8) {
            ctx->pc = 0x17B9DCu;
            return;
        }
    }
    ctx->pc = 0x17B9D0u;
}
