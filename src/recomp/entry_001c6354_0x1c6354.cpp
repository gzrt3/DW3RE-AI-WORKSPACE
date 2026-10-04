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

// Function: entry_001c6354
// Address: 0x1c6354 - 0x1c6370
void entry_001c6354_0x1c6354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6354_0x1c6354");
#endif

    ctx->pc = 0x1c6354u;

    // 0x1c6354: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1c6358: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c635c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C635Cu;
    {
        const bool branch_taken_0x1c635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c635c) {
            ctx->pc = 0x1C6370u;
            return;
        }
    }
    ctx->pc = 0x1C6364u;
    // 0x1c6364: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1c6368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c636c: 0xa20202e0  sb          $v0, 0x2E0($s0)
    ctx->pc = 0x1c636cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c6370u;
}
