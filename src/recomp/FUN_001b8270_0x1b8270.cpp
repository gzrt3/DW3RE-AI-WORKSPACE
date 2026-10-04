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

// Function: FUN_001b8270
// Address: 0x1b8270 - 0x1b82ac
void FUN_001b8270_0x1b8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8270_0x1b8270");
#endif

    switch (ctx->pc) {
        case 0x1b82a4u: goto label_1b82a4;
        default: break;
    }

    ctx->pc = 0x1b8270u;

    // 0x1b8270: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b8274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8278: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1b827c: 0x24631e04  addiu       $v1, $v1, 0x1E04
    ctx->pc = 0x1b827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7684));
    // 0x1b8280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b8288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b828c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1b828cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8290: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8290u;
    {
        const bool branch_taken_0x1b8290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8290u;
        // 0x1b8294: 0x4293c  dsll32      $a1, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8290) {
            ctx->pc = 0x1B82A4u;
            goto label_1b82a4;
        }
    }
    ctx->pc = 0x1B8298u;
    // 0x1b8298: 0x8f8487a4  lw          $a0, -0x785C($gp)
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x1b829c: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x1B829Cu;
    SET_GPR_U32(ctx, 31, 0x1B82A4u);
    ctx->pc = 0x1B82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B829Cu;
    // 0x1b82a0: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1B829Cu, 0x1B82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82A4u;
label_1b82a4:
    // 0x1b82a4: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x1b82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
    // 0x1b82a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b82acu;
}
