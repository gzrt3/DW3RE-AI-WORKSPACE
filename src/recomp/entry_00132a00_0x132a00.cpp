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

// Function: entry_00132a00
// Address: 0x132a00 - 0x132a34
void entry_00132a00_0x132a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a00_0x132a00");
#endif

    ctx->pc = 0x132a00u;

    // 0x132a00: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x132a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x132a04: 0x28c10057  slti        $at, $a2, 0x57
    ctx->pc = 0x132a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x132a08: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132A08u;
    {
        const bool branch_taken_0x132a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A08u;
        // 0x132a0c: 0xac642120  sw          $a0, 0x2120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a08) {
            ctx->pc = 0x132A34u;
            return;
        }
    }
    ctx->pc = 0x132A10u;
    // 0x132a10: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a18: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132a1c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x132a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x132a20: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a24: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x132a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x132a28: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x132a2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A2Cu;
        // 0x132a30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132A84u;
            return;
        }
    }
    ctx->pc = 0x132A34u;
}
