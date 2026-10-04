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

// Function: entry_0022be20
// Address: 0x22be20 - 0x22be3c
void entry_0022be20_0x22be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022be20_0x22be20");
#endif

    switch (ctx->pc) {
        case 0x22be34u: goto label_22be34;
        default: break;
    }

    ctx->pc = 0x22be20u;

    // 0x22be20: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22be24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be28: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22be2c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22BE2Cu;
    SET_GPR_U32(ctx, 31, 0x22BE34u);
    ctx->pc = 0x22BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE2Cu;
    // 0x22be30: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22BE2Cu, 0x22BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE34u;
label_22be34:
    // 0x22be34: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x22BE34u;
    {
        const bool branch_taken_0x22be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE34u;
        // 0x22be38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be34) {
            ctx->pc = 0x22C088u;
            return;
        }
    }
    ctx->pc = 0x22BE3Cu;
}
