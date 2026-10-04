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

// Function: entry_0012b768
// Address: 0x12b768 - 0x12b788
void entry_0012b768_0x12b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b768_0x12b768");
#endif

    ctx->pc = 0x12b768u;

    // 0x12b768: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B768u;
    {
        const bool branch_taken_0x12b768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B768u;
        // 0x12b76c: 0x2861005a  slti        $at, $v1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b768) {
            ctx->pc = 0x12B790u;
            return;
        }
    }
    ctx->pc = 0x12B770u;
    // 0x12b770: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B770u;
    {
        const bool branch_taken_0x12b770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b770) {
            ctx->pc = 0x12B788u;
            return;
        }
    }
    ctx->pc = 0x12B778u;
    // 0x12b778: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12b778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b77c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B780u;
    {
        const bool branch_taken_0x12b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B780u;
        // 0x12b784: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b780) {
            ctx->pc = 0x12B790u;
            return;
        }
    }
    ctx->pc = 0x12B788u;
}
