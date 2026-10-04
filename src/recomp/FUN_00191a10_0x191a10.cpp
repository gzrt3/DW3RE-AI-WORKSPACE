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

// Function: FUN_00191a10
// Address: 0x191a10 - 0x191a24
void FUN_00191a10_0x191a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191a10_0x191a10");
#endif

    ctx->pc = 0x191a10u;

    // 0x191a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191a14: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x191a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x191a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191a1c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191A1Cu;
    SET_GPR_U32(ctx, 31, 0x191A24u);
    ctx->pc = 0x191A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A1Cu;
    // 0x191a20: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191A1Cu, 0x191A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A24u;
}
