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

// Function: entry_001a5798
// Address: 0x1a5798 - 0x1a57d4
void entry_001a5798_0x1a5798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5798_0x1a5798");
#endif

    switch (ctx->pc) {
        case 0x1a57d0u: goto label_1a57d0;
        default: break;
    }

    ctx->pc = 0x1a5798u;

    // 0x1a5798: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a579c: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x1a57a0: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370EC0u));
    // 0x1a57a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a57a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a57ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1a57b0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a57b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a57b8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a57bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a57c0: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1a57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a57c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a57c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57c8: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A57C8u;
    SET_GPR_U32(ctx, 31, 0x1A57D0u);
    ctx->pc = 0x1A57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57C8u;
    // 0x1a57cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A57C8u, 0x1A57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57D0u;
label_1a57d0:
    // 0x1a57d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a57d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a57d4u;
}
