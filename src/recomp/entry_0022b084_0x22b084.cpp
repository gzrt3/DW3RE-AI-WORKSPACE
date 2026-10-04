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

// Function: entry_0022b084
// Address: 0x22b084 - 0x22b0b8
void entry_0022b084_0x22b084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b084_0x22b084");
#endif

    ctx->pc = 0x22b084u;

    // 0x22b084: 0x0  nop
    ctx->pc = 0x22b084u;
    // NOP
    // 0x22b088: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x22b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x22b08c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x22b090: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b094: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B094u;
    {
        const bool branch_taken_0x22b094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B094u;
        // 0x22b098: 0x3c044170  lui         $a0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b094) {
            ctx->pc = 0x22B0B8u;
            return;
        }
    }
    ctx->pc = 0x22B09Cu;
    // 0x22b09c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x22b0a0: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x22b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x22b0a4: 0x2463b0d0  addiu       $v1, $v1, -0x4F30
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947024));
    // 0x22b0a8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x22b0ac: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x22b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x22b0b0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x22b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x22b0b4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x22b0b8u;
}
