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

// Function: entry_0010761c
// Address: 0x10761c - 0x107658
void entry_0010761c_0x10761c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010761c_0x10761c");
#endif

    ctx->pc = 0x10761cu;

label_10761c:
    // 0x10761c: 0x0  nop
    ctx->pc = 0x10761cu;
    // NOP
    // 0x107620: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x107620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x107624: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x107624u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x107628: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x107628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10762c: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x10762cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x107630: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x107630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x107634: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x107634u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x107638: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x10763c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10763Cu;
    {
        const bool branch_taken_0x10763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10763Cu;
        // 0x107640: 0xad400018  sw          $zero, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10763c) {
            ctx->pc = 0x10761Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10761c;
        }
    }
    ctx->pc = 0x107644u;
    // 0x107644: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x107644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x107648: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x107648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x10764c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x10764Cu;
    {
        const bool branch_taken_0x10764c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10764Cu;
        // 0x107650: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10764c) {
            ctx->pc = 0x10760Cu;
            return;
        }
    }
    ctx->pc = 0x107654u;
    // 0x107654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x107658u;
}
