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

// Function: entry_001b685c
// Address: 0x1b685c - 0x1b6894
void entry_001b685c_0x1b685c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b685c_0x1b685c");
#endif

    ctx->pc = 0x1b685cu;

    // 0x1b685c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b6860: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6864: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b686c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b686cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b6874: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6878: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6894u;
            return;
        }
    }
    ctx->pc = 0x1B6880u;
    // 0x1b6880: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6884: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b6888: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b688c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6890: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    ctx->pc = 0x1b6894u;
}
