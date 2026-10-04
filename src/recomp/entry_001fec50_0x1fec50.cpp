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

// Function: entry_001fec50
// Address: 0x1fec50 - 0x1fec7c
void entry_001fec50_0x1fec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec50_0x1fec50");
#endif

    switch (ctx->pc) {
        case 0x1fec64u: goto label_1fec64;
        default: break;
    }

    ctx->pc = 0x1fec50u;

    // 0x1fec50: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1fec54: 0x246303aa  addiu       $v1, $v1, 0x3AA
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 938));
    // 0x1fec58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fec5c: 0xc0657f0  jal         func_195FC0
    ctx->pc = 0x1FEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC64u);
    ctx->pc = 0x1FEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC5Cu;
    // 0x1fec60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FC0u, 0x1FEC5Cu, 0x1FEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC64u;
label_1fec64:
    // 0x1fec64: 0x9043003b  lbu         $v1, 0x3B($v0)
    ctx->pc = 0x1fec64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
    // 0x1fec68: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1fec6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC6Cu;
    {
        const bool branch_taken_0x1fec6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec6c) {
            ctx->pc = 0x1FEC7Cu;
            return;
        }
    }
    ctx->pc = 0x1FEC74u;
    // 0x1fec74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC74u;
    {
        const bool branch_taken_0x1fec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0xaf839098  sw          $v1, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec74) {
            ctx->pc = 0x1FEC84u;
            return;
        }
    }
    ctx->pc = 0x1FEC7Cu;
}
