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

// Function: FUN_0012f500
// Address: 0x12f500 - 0x12f528
void FUN_0012f500_0x12f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f500_0x12f500");
#endif

    ctx->pc = 0x12f500u;

    // 0x12f500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f504: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12f508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f50c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12f510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f514: 0x2442fc70  addiu       $v0, $v0, -0x390
    ctx->pc = 0x12f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966384));
    // 0x12f518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f51c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x12f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f520: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x12F520u;
    SET_GPR_U32(ctx, 31, 0x12F528u);
    ctx->pc = 0x12F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F520u;
    // 0x12f524: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x12F520u, 0x12F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F528u;
}
