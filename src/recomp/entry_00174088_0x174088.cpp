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

// Function: entry_00174088
// Address: 0x174088 - 0x1740ac
void entry_00174088_0x174088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174088_0x174088");
#endif

    ctx->pc = 0x174088u;

    // 0x174088: 0x0  nop
    ctx->pc = 0x174088u;
    // NOP
    // 0x17408c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174090: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x174094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174098: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x174098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
    // 0x17409c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17409Cu;
    {
        const bool branch_taken_0x17409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17409Cu;
        // 0x1740a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17409c) {
            ctx->pc = 0x1740ACu;
            return;
        }
    }
    ctx->pc = 0x1740A4u;
    // 0x1740a4: 0xc057f18  jal         func_15FC60
    ctx->pc = 0x1740A4u;
    SET_GPR_U32(ctx, 31, 0x1740ACu);
    ctx->pc = 0x1740A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740A4u;
    // 0x1740a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC60u, 0x1740A4u, 0x1740ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740ACu;
}
