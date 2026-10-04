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

// Function: entry_0013c7b8
// Address: 0x13c7b8 - 0x13c7d0
void entry_0013c7b8_0x13c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c7b8_0x13c7b8");
#endif

    ctx->pc = 0x13c7b8u;

    // 0x13c7b8: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x13c7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x13c7bc: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13C7BCu;
    {
        const bool branch_taken_0x13c7bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13c7bc) {
            ctx->pc = 0x13C810u;
            return;
        }
    }
    ctx->pc = 0x13C7C4u;
    // 0x13c7c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13c7c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13C7C8u;
    {
        const bool branch_taken_0x13c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C8u;
        // 0x13c7cc: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7c8) {
            ctx->pc = 0x13C810u;
            return;
        }
    }
    ctx->pc = 0x13C7D0u;
}
