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

// Function: entry_0022047c
// Address: 0x22047c - 0x220490
void entry_0022047c_0x22047c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022047c_0x22047c");
#endif

    ctx->pc = 0x22047cu;

    // 0x22047c: 0x0  nop
    ctx->pc = 0x22047cu;
    // NOP
    // 0x220480: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x220484: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x220484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220488: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x220488u;
    {
        const bool branch_taken_0x220488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220488) {
            ctx->pc = 0x220434u;
            return;
        }
    }
    ctx->pc = 0x220490u;
}
