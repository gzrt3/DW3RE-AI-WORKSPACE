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

// Function: entry_0023f95c
// Address: 0x23f95c - 0x23f978
void entry_0023f95c_0x23f95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f95c_0x23f95c");
#endif

    ctx->pc = 0x23f95cu;

    // 0x23f95c: 0x0  nop
    ctx->pc = 0x23f95cu;
    // NOP
    // 0x23f960: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x23f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x23f964: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x23f968: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x23f96c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x23f970: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F970u;
    {
        const bool branch_taken_0x23f970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f970) {
            ctx->pc = 0x23F994u;
            return;
        }
    }
    ctx->pc = 0x23F978u;
}
