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

// Function: entry_001e0af0
// Address: 0x1e0af0 - 0x1e0b10
void entry_001e0af0_0x1e0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0af0_0x1e0af0");
#endif

    ctx->pc = 0x1e0af0u;

    // 0x1e0af0: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0af4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0AF4u;
    {
        const bool branch_taken_0x1e0af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0af4) {
            ctx->pc = 0x1E0B78u;
            return;
        }
    }
    ctx->pc = 0x1E0AFCu;
    // 0x1e0afc: 0x919c0  sll         $v1, $t1, 7
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x1e0b00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B00u;
    {
        const bool branch_taken_0x1e0b00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B00u;
        // 0x1e0b04: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b00) {
            ctx->pc = 0x1E0B10u;
            return;
        }
    }
    ctx->pc = 0x1E0B08u;
    // 0x1e0b08: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e0b0c: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b0cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1e0b10u;
}
