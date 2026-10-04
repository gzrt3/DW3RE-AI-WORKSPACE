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

// Function: entry_0021f528
// Address: 0x21f528 - 0x21f53c
void entry_0021f528_0x21f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f528_0x21f528");
#endif

    ctx->pc = 0x21f528u;

    // 0x21f528: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F528u;
    {
        const bool branch_taken_0x21f528 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F528u;
        // 0x21f52c: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f528) {
            ctx->pc = 0x21F53Cu;
            return;
        }
    }
    ctx->pc = 0x21F530u;
    // 0x21f530: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F530u;
    {
        const bool branch_taken_0x21f530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F530u;
        // 0x21f534: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f530) {
            ctx->pc = 0x21F540u;
            return;
        }
    }
    ctx->pc = 0x21F538u;
    // 0x21f538: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x21f53cu;
}
