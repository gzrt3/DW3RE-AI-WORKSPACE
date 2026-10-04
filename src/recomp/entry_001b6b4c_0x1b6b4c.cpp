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

// Function: entry_001b6b4c
// Address: 0x1b6b4c - 0x1b6b88
void entry_001b6b4c_0x1b6b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b4c_0x1b6b4c");
#endif

    ctx->pc = 0x1b6b4cu;

    // 0x1b6b4c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b6b50: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6b54: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6b5c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6b60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6b64: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6b68: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B6B68u;
    {
        const bool branch_taken_0x1b6b68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B68u;
        // 0x1b6b6c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b68) {
            ctx->pc = 0x1B6BD0u;
            return;
        }
    }
    ctx->pc = 0x1B6B70u;
    // 0x1b6b70: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1b6b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B74u;
    {
        const bool branch_taken_0x1b6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B74u;
        // 0x1b6b78: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b74) {
            ctx->pc = 0x1B6B88u;
            return;
        }
    }
    ctx->pc = 0x1B6B7Cu;
    // 0x1b6b7c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1b6b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6b80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6B80u;
    {
        const bool branch_taken_0x1b6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B80u;
        // 0x1b6b84: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b80) {
            ctx->pc = 0x1B6B98u;
            return;
        }
    }
    ctx->pc = 0x1B6B88u;
}
