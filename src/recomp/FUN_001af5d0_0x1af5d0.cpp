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

// Function: FUN_001af5d0
// Address: 0x1af5d0 - 0x1af5f4
void FUN_001af5d0_0x1af5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af5d0_0x1af5d0");
#endif

    ctx->pc = 0x1af5d0u;

    // 0x1af5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af5d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1af5d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1af5dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1af5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af5e0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1af5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1af5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af5e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af5ec: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1AF5ECu;
    SET_GPR_U32(ctx, 31, 0x1AF5F4u);
    ctx->pc = 0x1AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5ECu;
    // 0x1af5f0: 0xae3272a4  sw          $s2, 0x72A4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29348), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1AF5ECu, 0x1AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5F4u;
}
