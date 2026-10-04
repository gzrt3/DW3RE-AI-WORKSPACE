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

// Function: entry_001ac874
// Address: 0x1ac874 - 0x1ac890
void entry_001ac874_0x1ac874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac874_0x1ac874");
#endif

    ctx->pc = 0x1ac874u;

    // 0x1ac874: 0x24e34780  addiu       $v1, $a3, 0x4780
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
    // 0x1ac878: 0xacf24780  sw          $s2, 0x4780($a3)
    ctx->pc = 0x1ac878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18304), GPR_U32(ctx, 18));
    // 0x1ac87c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC87Cu;
    {
        const bool branch_taken_0x1ac87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac87c) {
            ctx->pc = 0x1AC890u;
            return;
        }
    }
    ctx->pc = 0x1AC884u;
    // 0x1ac884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ac884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac888: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC8C0u;
            return;
        }
    }
    ctx->pc = 0x1AC890u;
}
