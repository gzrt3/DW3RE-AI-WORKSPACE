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

// Function: entry_0023fe38
// Address: 0x23fe38 - 0x23fe60
void entry_0023fe38_0x23fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fe38_0x23fe38");
#endif

    switch (ctx->pc) {
        case 0x23fe58u: goto label_23fe58;
        default: break;
    }

    ctx->pc = 0x23fe38u;

    // 0x23fe38: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fe3c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fe40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fe44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23fe48: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x23fe48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x23fe4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe50: 0xc065580  jal         func_195600
    ctx->pc = 0x23FE50u;
    SET_GPR_U32(ctx, 31, 0x23FE58u);
    ctx->pc = 0x23FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE50u;
    // 0x23fe54: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x23FE50u, 0x23FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE58u;
label_23fe58:
    // 0x23fe58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FE58u;
    {
        const bool branch_taken_0x23fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe58) {
            ctx->pc = 0x23FE7Cu;
            return;
        }
    }
    ctx->pc = 0x23FE60u;
}
