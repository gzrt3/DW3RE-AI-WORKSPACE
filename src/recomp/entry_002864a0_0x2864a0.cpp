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

// Function: entry_002864a0
// Address: 0x2864a0 - 0x2864c8
void entry_002864a0_0x2864a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002864a0_0x2864a0");
#endif

    ctx->pc = 0x2864a0u;

label_2864a0:
    // 0x2864a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2864a4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2864a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2864a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2864ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2864b0: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x2864b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2864b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2864b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2864A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864a0;
        }
    }
    ctx->pc = 0x2864C0u;
    // 0x2864c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2864CCu;
            return;
        }
    }
    ctx->pc = 0x2864C8u;
}
