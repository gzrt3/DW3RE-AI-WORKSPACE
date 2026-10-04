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

// Function: FUN_00239928
// Address: 0x239928 - 0x239964
void FUN_00239928_0x239928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239928_0x239928");
#endif

    switch (ctx->pc) {
        case 0x23994cu: goto label_23994c;
        case 0x239958u: goto label_239958;
        default: break;
    }

    ctx->pc = 0x239928u;

    // 0x239928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23992c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239930: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x239930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x239934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23993c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239940: 0x26100818  addiu       $s0, $s0, 0x818
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x239944: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x239944u;
    SET_GPR_U32(ctx, 31, 0x23994Cu);
    ctx->pc = 0x239948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239944u;
    // 0x239948: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x239944u, 0x23994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23994Cu;
label_23994c:
    // 0x23994c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x239950: 0xc08e708  jal         func_239C20
    ctx->pc = 0x239950u;
    SET_GPR_U32(ctx, 31, 0x239958u);
    ctx->pc = 0x239954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239950u;
    // 0x239954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x239950u, 0x239958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239958u;
label_239958:
    // 0x239958: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23995c: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x23995Cu;
    SET_GPR_U32(ctx, 31, 0x239964u);
    ctx->pc = 0x239960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23995Cu;
    // 0x239960: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x23995Cu, 0x239964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239964u;
}
