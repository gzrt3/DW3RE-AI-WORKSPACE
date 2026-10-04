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

// Function: entry_0022aef8
// Address: 0x22aef8 - 0x22af10
void entry_0022aef8_0x22aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022aef8_0x22aef8");
#endif

    switch (ctx->pc) {
        case 0x22af08u: goto label_22af08;
        default: break;
    }

    ctx->pc = 0x22aef8u;

    // 0x22aef8: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22aefc: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22af00: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22AF00u;
    SET_GPR_U32(ctx, 31, 0x22AF08u);
    ctx->pc = 0x22AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF00u;
    // 0x22af04: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF00u, 0x22AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF08u;
label_22af08:
    // 0x22af08: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22AF08u;
    {
        const bool branch_taken_0x22af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af08) {
            ctx->pc = 0x22AFC0u;
            return;
        }
    }
    ctx->pc = 0x22AF10u;
}
