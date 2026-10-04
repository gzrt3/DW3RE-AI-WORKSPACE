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

// Function: entry_0012b8b4
// Address: 0x12b8b4 - 0x12b8d4
void entry_0012b8b4_0x12b8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b8b4_0x12b8b4");
#endif

    ctx->pc = 0x12b8b4u;

    // 0x12b8b4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B8B4u;
    {
        const bool branch_taken_0x12b8b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b8b4) {
            ctx->pc = 0x12B8DCu;
            return;
        }
    }
    ctx->pc = 0x12B8BCu;
    // 0x12b8bc: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x12b8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x12b8c0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x12b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8C4u;
    {
        const bool branch_taken_0x12b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8c4) {
            ctx->pc = 0x12B8D4u;
            return;
        }
    }
    ctx->pc = 0x12B8CCu;
    // 0x12b8cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8CCu;
    {
        const bool branch_taken_0x12b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8CCu;
        // 0x12b8d0: 0xa4800d70  sh          $zero, 0xD70($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8cc) {
            ctx->pc = 0x12B8DCu;
            return;
        }
    }
    ctx->pc = 0x12B8D4u;
}
