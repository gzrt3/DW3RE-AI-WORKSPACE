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

// Function: entry_001151e0
// Address: 0x1151e0 - 0x115208
void entry_001151e0_0x1151e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001151e0_0x1151e0");
#endif

    switch (ctx->pc) {
        case 0x1151ecu: goto label_1151ec;
        case 0x1151f8u: goto label_1151f8;
        case 0x115204u: goto label_115204;
        default: break;
    }

    ctx->pc = 0x1151e0u;

    // 0x1151e0: 0x92240247  lbu         $a0, 0x247($s1)
    ctx->pc = 0x1151e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
    // 0x1151e4: 0xc045488  jal         func_115220
    ctx->pc = 0x1151E4u;
    SET_GPR_U32(ctx, 31, 0x1151ECu);
    ctx->pc = 0x1151E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151E4u;
    // 0x1151e8: 0x260503b0  addiu       $a1, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115220u, 0x1151E4u, 0x1151ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151ECu;
label_1151ec:
    // 0x1151ec: 0x92250245  lbu         $a1, 0x245($s1)
    ctx->pc = 0x1151ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x1151f0: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x1151F0u;
    SET_GPR_U32(ctx, 31, 0x1151F8u);
    ctx->pc = 0x1151F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151F0u;
    // 0x1151f4: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x1151F0u, 0x1151F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151F8u;
label_1151f8:
    // 0x1151f8: 0x92250245  lbu         $a1, 0x245($s1)
    ctx->pc = 0x1151f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x1151fc: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x1151FCu;
    SET_GPR_U32(ctx, 31, 0x115204u);
    ctx->pc = 0x115200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151FCu;
    // 0x115200: 0x26041260  addiu       $a0, $s0, 0x1260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x1151FCu, 0x115204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115204u;
label_115204:
    // 0x115204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115208u;
}
