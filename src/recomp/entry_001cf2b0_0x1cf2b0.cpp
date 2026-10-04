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

// Function: entry_001cf2b0
// Address: 0x1cf2b0 - 0x1cf2f4
void entry_001cf2b0_0x1cf2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf2b0_0x1cf2b0");
#endif

    ctx->pc = 0x1cf2b0u;

    // 0x1cf2b0: 0x0  nop
    ctx->pc = 0x1cf2b0u;
    // NOP
    // 0x1cf2b4: 0x23e9821  addu        $s3, $s1, $fp
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1cf2b8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1cf2bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1cf2c0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1cf2c4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CF2C4u;
    {
        const bool branch_taken_0x1cf2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c4) {
            ctx->pc = 0x1CF34Cu;
            return;
        }
    }
    ctx->pc = 0x1CF2CCu;
    // 0x1cf2cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf2d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cf2d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cf2dc: 0x24530690  addiu       $s3, $v0, 0x690
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    // 0x1cf2e0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1cf2e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF2E4u;
    {
        const bool branch_taken_0x1cf2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2e4) {
            ctx->pc = 0x1CF2F4u;
            return;
        }
    }
    ctx->pc = 0x1CF2ECu;
    // 0x1cf2ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CF2ECu;
    {
        const bool branch_taken_0x1cf2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0xa2600073  sb          $zero, 0x73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2ec) {
            ctx->pc = 0x1CF320u;
            return;
        }
    }
    ctx->pc = 0x1CF2F4u;
}
