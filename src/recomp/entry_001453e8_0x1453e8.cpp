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

// Function: entry_001453e8
// Address: 0x1453e8 - 0x14540c
void entry_001453e8_0x1453e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001453e8_0x1453e8");
#endif

    ctx->pc = 0x1453e8u;

    // 0x1453e8: 0x0  nop
    ctx->pc = 0x1453e8u;
    // NOP
    // 0x1453ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1453f0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1453f4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1453f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1453f8: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x1453f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
    // 0x1453fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1453FCu;
    {
        const bool branch_taken_0x1453fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453FCu;
        // 0x145400: 0x24643620  addiu       $a0, $v1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453fc) {
            ctx->pc = 0x14540Cu;
            return;
        }
    }
    ctx->pc = 0x145404u;
    // 0x145404: 0xc05677c  jal         func_159DF0
    ctx->pc = 0x145404u;
    SET_GPR_U32(ctx, 31, 0x14540Cu);
    ctx->pc = 0x145408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145404u;
    // 0x145408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DF0u, 0x145404u, 0x14540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14540Cu;
}
