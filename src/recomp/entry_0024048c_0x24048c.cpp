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

// Function: entry_0024048c
// Address: 0x24048c - 0x2404b8
void entry_0024048c_0x24048c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024048c_0x24048c");
#endif

    ctx->pc = 0x24048cu;

    // 0x24048c: 0x0  nop
    ctx->pc = 0x24048cu;
    // NOP
    // 0x240490: 0x2941000a  slti        $at, $t2, 0xA
    ctx->pc = 0x240490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x240494: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0xa48c0  sll         $t1, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404B8u;
            return;
        }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2404a0: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2404a4: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2404a8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2404a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x2404ac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2404acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2404b0: 0xac8a0374  sw          $t2, 0x374($a0)
    ctx->pc = 0x2404b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 10));
    // 0x2404b4: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x2404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
    ctx->pc = 0x2404b8u;
}
