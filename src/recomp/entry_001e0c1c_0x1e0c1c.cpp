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

// Function: entry_001e0c1c
// Address: 0x1e0c1c - 0x1e0c50
void entry_001e0c1c_0x1e0c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c1c_0x1e0c1c");
#endif

    ctx->pc = 0x1e0c1cu;

    // 0x1e0c1c: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0c20: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0c24: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0C28u;
    {
        const bool branch_taken_0x1e0c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c28) {
            ctx->pc = 0x1E0C50u;
            return;
        }
    }
    ctx->pc = 0x1E0C30u;
    // 0x1e0c30: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1e0c34: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C34u;
    {
        const bool branch_taken_0x1e0c34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c34) {
            ctx->pc = 0x1E0C50u;
            return;
        }
    }
    ctx->pc = 0x1E0C3Cu;
    // 0x1e0c3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e0c40: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e0c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C44u;
    {
        const bool branch_taken_0x1e0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c44) {
            ctx->pc = 0x1E0C54u;
            return;
        }
    }
    ctx->pc = 0x1E0C4Cu;
    // 0x1e0c4c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1e0c50u;
}
