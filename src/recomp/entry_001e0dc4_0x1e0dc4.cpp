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

// Function: entry_001e0dc4
// Address: 0x1e0dc4 - 0x1e0df4
void entry_001e0dc4_0x1e0dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0dc4_0x1e0dc4");
#endif

    ctx->pc = 0x1e0dc4u;

    // 0x1e0dc4: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0dc8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0dcc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0dd0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0DD0u;
    {
        const bool branch_taken_0x1e0dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0dd0) {
            ctx->pc = 0x1E0DF4u;
            return;
        }
    }
    ctx->pc = 0x1E0DD8u;
    // 0x1e0dd8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1e0ddc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DDCu;
    {
        const bool branch_taken_0x1e0ddc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ddc) {
            ctx->pc = 0x1E0DF8u;
            return;
        }
    }
    ctx->pc = 0x1E0DE4u;
    // 0x1e0de4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e0de8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e0dec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0xa0a30c3b  sb          $v1, 0xC3B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E0DFCu;
            return;
        }
    }
    ctx->pc = 0x1E0DF4u;
}
