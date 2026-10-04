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

// Function: entry_0011f7dc
// Address: 0x11f7dc - 0x11f808
void entry_0011f7dc_0x11f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f7dc_0x11f7dc");
#endif

    ctx->pc = 0x11f7dcu;

    // 0x11f7dc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x11f7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11f7e0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F7E0u;
    {
        const bool branch_taken_0x11f7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f7e0) {
            ctx->pc = 0x11F808u;
            return;
        }
    }
    ctx->pc = 0x11F7E8u;
    // 0x11f7e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f7ec: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x11f7f0: 0x2442fb80  addiu       $v0, $v0, -0x480
    ctx->pc = 0x11f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
    // 0x11f7f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f7f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x11f7f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24FB80u));
    // 0x11f7fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f800: 0xc066e02  jal         func_19B808
    ctx->pc = 0x11F800u;
    SET_GPR_U32(ctx, 31, 0x11F808u);
    ctx->pc = 0x11F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F800u;
    // 0x11f804: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x11F800u, 0x11F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F808u;
}
