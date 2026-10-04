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

// Function: FUN_00234420
// Address: 0x234420 - 0x234444
void FUN_00234420_0x234420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234420_0x234420");
#endif

    ctx->pc = 0x234420u;

    // 0x234420: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x234420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x234424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23442c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x234430: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    // 0x234434: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23443c: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x23443Cu;
    SET_GPR_U32(ctx, 31, 0x234444u);
    ctx->pc = 0x234440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23443Cu;
    // 0x234440: 0xac40ac70  sw          $zero, -0x5390($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x23443Cu, 0x234444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234444u;
}
