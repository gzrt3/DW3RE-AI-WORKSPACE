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

// Function: FUN_001815e0
// Address: 0x1815e0 - 0x181620
void FUN_001815e0_0x1815e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001815e0_0x1815e0");
#endif

    switch (ctx->pc) {
        case 0x18161cu: goto label_18161c;
        default: break;
    }

    ctx->pc = 0x1815e0u;

    // 0x1815e0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1815e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1815e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1815e8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1815e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1815ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1815f0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1815f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1815f8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1815fc: 0x24632a34  addiu       $v1, $v1, 0x2A34
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10804));
    // 0x181600: 0x24422a36  addiu       $v0, $v0, 0x2A36
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10806));
    // 0x181604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181608: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x181608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18160c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181610: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181614: 0xc06058c  jal         func_181630
    ctx->pc = 0x181614u;
    SET_GPR_U32(ctx, 31, 0x18161Cu);
    ctx->pc = 0x181618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181614u;
    // 0x181618: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181630u, 0x181614u, 0x18161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18161Cu;
label_18161c:
    // 0x18161c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x181620u;
}
