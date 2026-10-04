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

// Function: FUN_001b7db0
// Address: 0x1b7db0 - 0x1b7df4
void FUN_001b7db0_0x1b7db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7db0_0x1b7db0");
#endif

    switch (ctx->pc) {
        case 0x1b7dc8u: goto label_1b7dc8;
        default: break;
    }

    ctx->pc = 0x1b7db0u;

    // 0x1b7db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7db4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1b7db8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7dbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7dc0: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7DC0u;
    SET_GPR_U32(ctx, 31, 0x1B7DC8u);
    ctx->pc = 0x1B7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DC0u;
    // 0x1b7dc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7DC0u, 0x1B7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DC8u;
label_1b7dc8:
    // 0x1b7dc8: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x1b7dcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b7dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b7dd0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7dd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7dd8: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x1b7ddc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b7de0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b7de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b7de4: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x1b7de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1b7de8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1b7de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7dec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7df0: 0xc06dc4e  jal         func_1B7138
    ctx->pc = 0x1B7DF0u;
    SET_GPR_U32(ctx, 31, 0x1B7DF8u);
    ctx->pc = 0x1B7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7138u, 0x1B7DF0u, 0x1B7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DF8u;
}
