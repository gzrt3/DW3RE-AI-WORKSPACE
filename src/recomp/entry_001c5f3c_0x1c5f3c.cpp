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

// Function: entry_001c5f3c
// Address: 0x1c5f3c - 0x1c5f58
void entry_001c5f3c_0x1c5f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f3c_0x1c5f3c");
#endif

    ctx->pc = 0x1c5f3cu;

    // 0x1c5f3c: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x1c5f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1c5f40: 0xdd430038  ld          $v1, 0x38($t2)
    ctx->pc = 0x1c5f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x1c5f44: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1c5f48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F48u;
    {
        const bool branch_taken_0x1c5f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f48) {
            ctx->pc = 0x1C5F58u;
            return;
        }
    }
    ctx->pc = 0x1C5F50u;
    // 0x1c5f50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F50u;
        // 0x1c5f54: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F5Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F58u;
}
