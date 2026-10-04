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

// Function: FUN_0017a360
// Address: 0x17a360 - 0x17a388
void FUN_0017a360_0x17a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a360_0x17a360");
#endif

    ctx->pc = 0x17a360u;

    // 0x17a360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a364: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17a368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a36c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17a370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17a378: 0x8f828444  lw          $v0, -0x7BBC($gp)
    ctx->pc = 0x17a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x17a37c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a380: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x17A380u;
    SET_GPR_U32(ctx, 31, 0x17A388u);
    ctx->pc = 0x17A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A380u;
    // 0x17a384: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x17A380u, 0x17A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A388u;
}
