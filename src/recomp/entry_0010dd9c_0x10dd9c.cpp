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

// Function: entry_0010dd9c
// Address: 0x10dd9c - 0x10ddb0
void entry_0010dd9c_0x10dd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd9c_0x10dd9c");
#endif

    ctx->pc = 0x10dd9cu;

    // 0x10dd9c: 0x0  nop
    ctx->pc = 0x10dd9cu;
    // NOP
    // 0x10dda0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10dda4: 0x28c90002  slti        $t1, $a2, 0x2
    ctx->pc = 0x10dda4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10dda8: 0x1520ffac  bnez        $t1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x10DDA8u;
    {
        const bool branch_taken_0x10dda8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA8u;
        // 0x10ddac: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dda8) {
            ctx->pc = 0x10DC5Cu;
            return;
        }
    }
    ctx->pc = 0x10DDB0u;
}
