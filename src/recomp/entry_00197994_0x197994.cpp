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

// Function: entry_00197994
// Address: 0x197994 - 0x1979c4
void entry_00197994_0x197994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197994_0x197994");
#endif

    switch (ctx->pc) {
        case 0x1979a4u: goto label_1979a4;
        case 0x1979b0u: goto label_1979b0;
        default: break;
    }

    ctx->pc = 0x197994u;

    // 0x197994: 0x0  nop
    ctx->pc = 0x197994u;
    // NOP
    // 0x197998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19799c: 0xc066018  jal         func_198060
    ctx->pc = 0x19799Cu;
    SET_GPR_U32(ctx, 31, 0x1979A4u);
    ctx->pc = 0x1979A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19799Cu;
    // 0x1979a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198060u, 0x19799Cu, 0x1979A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A4u;
label_1979a4:
    // 0x1979a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1979a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979a8: 0xc065f20  jal         func_197C80
    ctx->pc = 0x1979A8u;
    SET_GPR_U32(ctx, 31, 0x1979B0u);
    ctx->pc = 0x1979ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979A8u;
    // 0x1979ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197C80u, 0x1979A8u, 0x1979B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979B0u;
label_1979b0:
    // 0x1979b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1979b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1979b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1979B4u;
    {
        const bool branch_taken_0x1979b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1979b4) {
            ctx->pc = 0x1979C4u;
            return;
        }
    }
    ctx->pc = 0x1979BCu;
    // 0x1979bc: 0xc065988  jal         func_196620
    ctx->pc = 0x1979BCu;
    SET_GPR_U32(ctx, 31, 0x1979C4u);
    ctx->pc = 0x196620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196620u, 0x1979BCu, 0x1979C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979C4u;
}
