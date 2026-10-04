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

// Function: entry_001645ec
// Address: 0x1645ec - 0x164610
void entry_001645ec_0x1645ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645ec_0x1645ec");
#endif

    ctx->pc = 0x1645ecu;

    // 0x1645ec: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x1645f0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1645f4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1645f8: 0x8f838680  lw          $v1, -0x7980($gp)
    ctx->pc = 0x1645f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x1645fc: 0x8f85867c  lw          $a1, -0x7984($gp)
    ctx->pc = 0x1645fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
    // 0x164600: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x164604: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x164608: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x164608u;
    {
        const bool branch_taken_0x164608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164608u;
        // 0x16460c: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164608) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x164610u;
}
