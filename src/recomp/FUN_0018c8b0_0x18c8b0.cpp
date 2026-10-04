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

// Function: FUN_0018c8b0
// Address: 0x18c8b0 - 0x18c8dc
void FUN_0018c8b0_0x18c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c8b0_0x18c8b0");
#endif

    switch (ctx->pc) {
        case 0x18c8d8u: goto label_18c8d8;
        default: break;
    }

    ctx->pc = 0x18c8b0u;

    // 0x18c8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c8b4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18c8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c8bc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18c8c0: 0x8f8588b0  lw          $a1, -0x7750($gp)
    ctx->pc = 0x18c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936752)));
    // 0x18c8c4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18c8c8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x18c8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18c8d0: 0xc064ba0  jal         func_192E80
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E80u, 0x18C8D0u, 0x18C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18c8dcu;
}
