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

// Function: entry_00227e88
// Address: 0x227e88 - 0x227ec0
void entry_00227e88_0x227e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227e88_0x227e88");
#endif

    switch (ctx->pc) {
        case 0x227ea0u: goto label_227ea0;
        case 0x227eb8u: goto label_227eb8;
        default: break;
    }

    ctx->pc = 0x227e88u;

    // 0x227e88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227e8c: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x227e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x227e90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227E90u;
    {
        const bool branch_taken_0x227e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e90) {
            ctx->pc = 0x227EC0u;
            return;
        }
    }
    ctx->pc = 0x227E98u;
    // 0x227e98: 0xc05b63c  jal         func_16D8F0
    ctx->pc = 0x227E98u;
    SET_GPR_U32(ctx, 31, 0x227EA0u);
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227E98u, 0x227EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EA0u;
label_227ea0:
    // 0x227ea0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ea8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227eac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227eb0: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227EB0u;
    SET_GPR_U32(ctx, 31, 0x227EB8u);
    ctx->pc = 0x227EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EB0u;
    // 0x227eb4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227EB0u, 0x227EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EB8u;
label_227eb8:
    // 0x227eb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x227EB8u;
    {
        const bool branch_taken_0x227eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB8u;
        // 0x227ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227eb8) {
            ctx->pc = 0x227ED4u;
            return;
        }
    }
    ctx->pc = 0x227EC0u;
}
