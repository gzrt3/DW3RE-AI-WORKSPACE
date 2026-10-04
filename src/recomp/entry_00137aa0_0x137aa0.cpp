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

// Function: entry_00137aa0
// Address: 0x137aa0 - 0x137acc
void entry_00137aa0_0x137aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137aa0_0x137aa0");
#endif

    switch (ctx->pc) {
        case 0x137abcu: goto label_137abc;
        default: break;
    }

    ctx->pc = 0x137aa0u;

    // 0x137aa0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x137AA0u;
    {
        const bool branch_taken_0x137aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137aa0) {
            ctx->pc = 0x137ACCu;
            return;
        }
    }
    ctx->pc = 0x137AA8u;
    // 0x137aa8: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x137aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x137aac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AACu;
        // 0x137ab0: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137ACCu;
            return;
        }
    }
    ctx->pc = 0x137AB4u;
    // 0x137ab4: 0xc045094  jal         func_114250
    ctx->pc = 0x137AB4u;
    SET_GPR_U32(ctx, 31, 0x137ABCu);
    ctx->pc = 0x114250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114250u, 0x137AB4u, 0x137ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ABCu;
label_137abc:
    // 0x137abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137ABCu;
    {
        const bool branch_taken_0x137abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ABCu;
        // 0x137ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137abc) {
            ctx->pc = 0x137ACCu;
            return;
        }
    }
    ctx->pc = 0x137AC4u;
    // 0x137ac4: 0xc045338  jal         func_114CE0
    ctx->pc = 0x137AC4u;
    SET_GPR_U32(ctx, 31, 0x137ACCu);
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x137AC4u, 0x137ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ACCu;
}
