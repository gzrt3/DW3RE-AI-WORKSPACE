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

// Function: entry_0011f808
// Address: 0x11f808 - 0x11f838
void entry_0011f808_0x11f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f808_0x11f808");
#endif

    switch (ctx->pc) {
        case 0x11f830u: goto label_11f830;
        default: break;
    }

    ctx->pc = 0x11f808u;

    // 0x11f808: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x11f808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x11f80c: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x11f80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x11f810: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x11F810u;
    {
        const bool branch_taken_0x11f810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f810) {
            ctx->pc = 0x11F840u;
            return;
        }
    }
    ctx->pc = 0x11F818u;
    // 0x11f818: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x11f818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x11f81c: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x11f81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11f820: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F820u;
    {
        const bool branch_taken_0x11f820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F820u;
        // 0x11f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f820) {
            ctx->pc = 0x11F838u;
            return;
        }
    }
    ctx->pc = 0x11F828u;
    // 0x11f828: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x11F828u;
    SET_GPR_U32(ctx, 31, 0x11F830u);
    ctx->pc = 0x11F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F828u;
    // 0x11f82c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x11F828u, 0x11F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F830u;
label_11f830:
    // 0x11f830: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11F830u;
    {
        const bool branch_taken_0x11f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f830) {
            ctx->pc = 0x11F8F8u;
            return;
        }
    }
    ctx->pc = 0x11F838u;
}
