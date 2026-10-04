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

// Function: FUN_0017ab20
// Address: 0x17ab20 - 0x17ab30
void FUN_0017ab20_0x17ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ab20_0x17ab20");
#endif

    ctx->pc = 0x17ab20u;

    // 0x17ab20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ab24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ab28: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x17AB28u;
    SET_GPR_U32(ctx, 31, 0x17AB30u);
    ctx->pc = 0x17AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB28u;
    // 0x17ab2c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x17AB28u, 0x17AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB30u;
}
