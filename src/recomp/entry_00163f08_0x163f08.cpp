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

// Function: entry_00163f08
// Address: 0x163f08 - 0x163f28
void entry_00163f08_0x163f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f08_0x163f08");
#endif

    switch (ctx->pc) {
        case 0x163f20u: goto label_163f20;
        default: break;
    }

    ctx->pc = 0x163f08u;

    // 0x163f08: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x163f08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163f10: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163F10u;
    {
        const bool branch_taken_0x163f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x163F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F10u;
        // 0x163f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f10) {
            ctx->pc = 0x163F28u;
            return;
        }
    }
    ctx->pc = 0x163F18u;
    // 0x163f18: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x163F18u;
    SET_GPR_U32(ctx, 31, 0x163F20u);
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x163F18u, 0x163F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163F20u;
    {
        const bool branch_taken_0x163f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f20) {
            ctx->pc = 0x163F48u;
            return;
        }
    }
    ctx->pc = 0x163F28u;
}
