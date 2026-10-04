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

// Function: entry_0022a54c
// Address: 0x22a54c - 0x22a560
void entry_0022a54c_0x22a54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a54c_0x22a54c");
#endif

    ctx->pc = 0x22a54cu;

    // 0x22a54c: 0x0  nop
    ctx->pc = 0x22a54cu;
    // NOP
    // 0x22a550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22a554: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x22a554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a558: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22A558u;
    {
        const bool branch_taken_0x22a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A558u;
        // 0x22a55c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a558) {
            ctx->pc = 0x22A528u;
            return;
        }
    }
    ctx->pc = 0x22A560u;
}
