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

// Function: entry_001e0d74
// Address: 0x1e0d74 - 0x1e0dc0
void entry_001e0d74_0x1e0d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d74_0x1e0d74");
#endif

    ctx->pc = 0x1e0d74u;

    // 0x1e0d74: 0x0  nop
    ctx->pc = 0x1e0d74u;
    // NOP
    // 0x1e0d78: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e0d7c: 0xa52f0cd0  sh          $t7, 0xCD0($t1)
    ctx->pc = 0x1e0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3280), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e0d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0d84: 0xa52e0ce0  sh          $t6, 0xCE0($t1)
    ctx->pc = 0x1e0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3296), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e0d88: 0x28670010  slti        $a3, $v1, 0x10
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0d8c: 0xa1380cc0  sb          $t8, 0xCC0($t1)
    ctx->pc = 0x1e0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3264), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d90: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1e0d94: 0xa1380cc1  sb          $t8, 0xCC1($t1)
    ctx->pc = 0x1e0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3265), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d98: 0xa1380cc2  sb          $t8, 0xCC2($t1)
    ctx->pc = 0x1e0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3266), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d9c: 0xa1260cc3  sb          $a2, 0xCC3($t1)
    ctx->pc = 0x1e0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3267), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e0da0: 0x14e0ffb4  bnez        $a3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0C74u;
            return;
        }
    }
    ctx->pc = 0x1E0DA8u;
    // 0x1e0da8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0dac: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DB0u;
    {
        const bool branch_taken_0x1e0db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db0) {
            ctx->pc = 0x1E0DC0u;
            return;
        }
    }
    ctx->pc = 0x1E0DB8u;
    // 0x1e0db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0DC4u;
            return;
        }
    }
    ctx->pc = 0x1E0DC0u;
}
