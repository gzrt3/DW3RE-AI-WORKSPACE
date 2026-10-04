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

// Function: entry_001729c8
// Address: 0x1729c8 - 0x1729e8
void entry_001729c8_0x1729c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001729c8_0x1729c8");
#endif

    ctx->pc = 0x1729c8u;

    // 0x1729c8: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1729C8u;
    {
        const bool branch_taken_0x1729c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C8u;
        // 0x1729cc: 0x3c033ecc  lui         $v1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c8) {
            ctx->pc = 0x1729F4u;
            return;
        }
    }
    ctx->pc = 0x1729D0u;
    // 0x1729d0: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x1729d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x1729d4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1729d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1729d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1729D8u;
    {
        const bool branch_taken_0x1729d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729d8) {
            ctx->pc = 0x1729E8u;
            return;
        }
    }
    ctx->pc = 0x1729E0u;
    // 0x1729e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1729E0u;
    {
        const bool branch_taken_0x1729e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E0u;
        // 0x1729e4: 0xa4800d70  sh          $zero, 0xD70($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e0) {
            ctx->pc = 0x1729F0u;
            return;
        }
    }
    ctx->pc = 0x1729E8u;
}
