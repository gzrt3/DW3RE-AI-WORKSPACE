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

// Function: FUN_002396f8
// Address: 0x2396f8 - 0x239740
void FUN_002396f8_0x2396f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002396f8_0x2396f8");
#endif

    switch (ctx->pc) {
        case 0x239724u: goto label_239724;
        case 0x239734u: goto label_239734;
        default: break;
    }

    ctx->pc = 0x2396f8u;

    // 0x2396f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2396fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2396fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239700: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x239704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23970c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239710: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239714: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239718: 0x26100818  addiu       $s0, $s0, 0x818
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x23971c: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x23971Cu;
    SET_GPR_U32(ctx, 31, 0x239724u);
    ctx->pc = 0x239720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23971Cu;
    // 0x239720: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x23971Cu, 0x239724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239724u;
label_239724:
    // 0x239724: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x239728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23972c: 0xc08e5d8  jal         func_239760
    ctx->pc = 0x23972Cu;
    SET_GPR_U32(ctx, 31, 0x239734u);
    ctx->pc = 0x239730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23972Cu;
    // 0x239730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239760u, 0x23972Cu, 0x239734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239734u;
label_239734:
    // 0x239734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x239738: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x239738u;
    SET_GPR_U32(ctx, 31, 0x239740u);
    ctx->pc = 0x23973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239738u;
    // 0x23973c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x239738u, 0x239740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239740u;
}
