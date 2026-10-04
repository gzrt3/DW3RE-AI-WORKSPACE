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

// Function: entry_001cf204
// Address: 0x1cf204 - 0x1cf218
void entry_001cf204_0x1cf204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf204_0x1cf204");
#endif

    ctx->pc = 0x1cf204u;

    // 0x1cf204: 0x15a40004  bne         $t5, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF204u;
    {
        const bool branch_taken_0x1cf204 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cf204) {
            ctx->pc = 0x1CF218u;
            return;
        }
    }
    ctx->pc = 0x1CF20Cu;
    // 0x1cf20c: 0x95490080  lhu         $t1, 0x80($t2)
    ctx->pc = 0x1cf20cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x1cf210: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CF210u;
    {
        const bool branch_taken_0x1cf210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0xa5490090  sh          $t1, 0x90($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf210) {
            ctx->pc = 0x1CF284u;
            return;
        }
    }
    ctx->pc = 0x1CF218u;
}
