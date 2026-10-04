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

// Function: entry_001a571c
// Address: 0x1a571c - 0x1a5754
void entry_001a571c_0x1a571c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a571c_0x1a571c");
#endif

    switch (ctx->pc) {
        case 0x1a5750u: goto label_1a5750;
        default: break;
    }

    ctx->pc = 0x1a571cu;

    // 0x1a571c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a5720: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x1a5724: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370EC0u));
    // 0x1a5728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a572c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1a5730: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a5734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5738: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a573c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a573cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a5740: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5744: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1a5744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5748: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A5748u;
    SET_GPR_U32(ctx, 31, 0x1A5750u);
    ctx->pc = 0x1A574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5748u;
    // 0x1a574c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A5748u, 0x1A5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5750u;
label_1a5750:
    // 0x1a5750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5754u;
}
