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

// Function: entry_00185e88
// Address: 0x185e88 - 0x185eb0
void entry_00185e88_0x185e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e88_0x185e88");
#endif

    switch (ctx->pc) {
        case 0x185e98u: goto label_185e98;
        default: break;
    }

    ctx->pc = 0x185e88u;

    // 0x185e88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x185E88u;
    {
        const bool branch_taken_0x185e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e88) {
            ctx->pc = 0x185EB0u;
            return;
        }
    }
    ctx->pc = 0x185E90u;
    // 0x185e90: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E90u;
    // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x185E90u, 0x185E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0x1440029a  bnez        $v0, . + 4 + (0x29A << 2)
    ctx->pc = 0x185E98u;
    {
        const bool branch_taken_0x185e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e98) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185EA0u;
    // 0x185ea0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185ea4: 0x306300cb  andi        $v1, $v1, 0xCB
    ctx->pc = 0x185ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)203);
    // 0x185ea8: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185EB0u;
}
