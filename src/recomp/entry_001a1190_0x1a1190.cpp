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

// Function: entry_001a1190
// Address: 0x1a1190 - 0x1a1200
void entry_001a1190_0x1a1190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1190_0x1a1190");
#endif

    switch (ctx->pc) {
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11e8u: goto label_1a11e8;
        default: break;
    }

    ctx->pc = 0x1a1190u;

    // 0x1a1190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1194: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A1200u;
            return;
        }
    }
    ctx->pc = 0x1A119Cu;
    // 0x1a119c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11a4: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1a11a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a11ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a11acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a11b0: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A11B0u;
    SET_GPR_U32(ctx, 31, 0x1A11B8u);
    ctx->pc = 0x1A11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11B0u;
    // 0x1a11b4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A11B0u, 0x1A11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11B8u;
label_1a11b8:
    // 0x1a11b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a11bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a11c0: 0x3463b010  ori         $v1, $v1, 0xB010
    ctx->pc = 0x1a11c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45072);
    // 0x1a11c4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a11c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a11c8u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 4));
    // 0x1a11cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a11d4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a11d8: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x1a11d8u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x1a11dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a11e0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11E0u;
    // 0x1a11e4: 0xac25b000  sw          $a1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A11E0u, 0x1A11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a11f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1a11f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a11f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a11fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a11fcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    ctx->pc = 0x1a1200u;
}
