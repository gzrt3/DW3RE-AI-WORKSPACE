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

// Function: entry_00131144
// Address: 0x131144 - 0x131170
void entry_00131144_0x131144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131144_0x131144");
#endif

    switch (ctx->pc) {
        case 0x131164u: goto label_131164;
        default: break;
    }

    ctx->pc = 0x131144u;

    // 0x131144: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x131144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x131148: 0x9024a402  lbu         $a0, -0x5BFE($at)
    ctx->pc = 0x131148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    // 0x13114c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131150: 0x8c22a448  lw          $v0, -0x5BB8($at)
    ctx->pc = 0x131150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A448u));
    // 0x131154: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x131154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131158: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13115c: 0xc05b69c  jal         func_16DA70
    ctx->pc = 0x13115Cu;
    SET_GPR_U32(ctx, 31, 0x131164u);
    ctx->pc = 0x131160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13115Cu;
    // 0x131160: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA70u, 0x13115Cu, 0x131164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131164u;
label_131164:
    // 0x131164: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x131168: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x131168u;
    {
        const bool branch_taken_0x131168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131168u;
        // 0x13116c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131168) {
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x131170u;
}
