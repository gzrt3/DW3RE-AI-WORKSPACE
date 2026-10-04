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

// Function: entry_001cbba8
// Address: 0x1cbba8 - 0x1cbbf8
void entry_001cbba8_0x1cbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbba8_0x1cbba8");
#endif

    switch (ctx->pc) {
        case 0x1cbbf0u: goto label_1cbbf0;
        default: break;
    }

    ctx->pc = 0x1cbba8u;

    // 0x1cbba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cbbac: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1cbbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1cbbb0: 0x28610027  slti        $at, $v1, 0x27
    ctx->pc = 0x1cbbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x1cbbb4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBBB4u;
    {
        const bool branch_taken_0x1cbbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbb4) {
            ctx->pc = 0x1CBBF8u;
            return;
        }
    }
    ctx->pc = 0x1CBBBCu;
    // 0x1cbbbc: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1cbbc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBBC0u;
    {
        const bool branch_taken_0x1cbbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc0) {
            ctx->pc = 0x1CBBF8u;
            return;
        }
    }
    ctx->pc = 0x1CBBC8u;
    // 0x1cbbc8: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x1cbbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1cbbcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBBCCu;
    {
        const bool branch_taken_0x1cbbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbcc) {
            ctx->pc = 0x1CBBF8u;
            return;
        }
    }
    ctx->pc = 0x1CBBD4u;
    // 0x1cbbd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cbbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cbbd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbbdc: 0x24428f70  addiu       $v0, $v0, -0x7090
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938480));
    // 0x1cbbe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbbe8: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBBE8u;
    SET_GPR_U32(ctx, 31, 0x1CBBF0u);
    ctx->pc = 0x1CBBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBE8u;
    // 0x1cbbec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBBE8u, 0x1CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CBBF0u;
    {
        const bool branch_taken_0x1cbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf0) {
            ctx->pc = 0x1CBC24u;
            return;
        }
    }
    ctx->pc = 0x1CBBF8u;
}
