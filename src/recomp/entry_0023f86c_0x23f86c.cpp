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

// Function: entry_0023f86c
// Address: 0x23f86c - 0x23f888
void entry_0023f86c_0x23f86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f86c_0x23f86c");
#endif

    ctx->pc = 0x23f86cu;

    // 0x23f86c: 0x0  nop
    ctx->pc = 0x23f86cu;
    // NOP
    // 0x23f870: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x23f870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x23f874: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23f878: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x23F878u;
    {
        const bool branch_taken_0x23f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f878) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F880u;
    // 0x23f880: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x23F880u;
    {
        const bool branch_taken_0x23f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F880u;
        // 0x23f884: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f880) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F888u;
}
