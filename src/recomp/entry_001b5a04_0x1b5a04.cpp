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

// Function: entry_001b5a04
// Address: 0x1b5a04 - 0x1b5a48
void entry_001b5a04_0x1b5a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5a04_0x1b5a04");
#endif

    ctx->pc = 0x1b5a04u;

    // 0x1b5a04: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b5a08: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5a0c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b5a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5a14: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b5a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b5a18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b5a1c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b5a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b5a20: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5A20u;
    {
        const bool branch_taken_0x1b5a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A20u;
        // 0x1b5a24: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a20) {
            ctx->pc = 0x1B5A48u;
            return;
        }
    }
    ctx->pc = 0x1B5A28u;
    // 0x1b5a28: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1b5a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1b5a2c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B5A2Cu;
    {
        const bool branch_taken_0x1b5a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A2Cu;
        // 0x1b5a30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a2c) {
            ctx->pc = 0x1B5B68u;
            return;
        }
    }
    ctx->pc = 0x1B5A34u;
    // 0x1b5a34: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1b5a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5a38: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B5A38u;
    {
        const bool branch_taken_0x1b5a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A38u;
        // 0x1b5a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a38) {
            ctx->pc = 0x1B5B68u;
            return;
        }
    }
    ctx->pc = 0x1B5A40u;
    // 0x1b5a40: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B5A40u;
    {
        const bool branch_taken_0x1b5a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A40u;
        // 0x1b5a44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a40) {
            ctx->pc = 0x1B5B68u;
            return;
        }
    }
    ctx->pc = 0x1B5A48u;
}
