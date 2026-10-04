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

// Function: FUN_001a7068
// Address: 0x1a7068 - 0x1a7080
void FUN_001a7068_0x1a7068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7068_0x1a7068");
#endif

    ctx->pc = 0x1a7068u;

    // 0x1a7068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a706c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7070: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7074: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7078: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7078u;
    // 0x1a707c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A7078u, 0x1A7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7080u;
}
