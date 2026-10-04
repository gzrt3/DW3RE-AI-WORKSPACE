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

// Function: FUN_0020b9e0
// Address: 0x20b9e0 - 0x20ba08
void FUN_0020b9e0_0x20b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020b9e0_0x20b9e0");
#endif

    switch (ctx->pc) {
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9fcu: goto label_20b9fc;
        default: break;
    }

    ctx->pc = 0x20b9e0u;

    // 0x20b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b9ec: 0xc082ee4  jal         func_20BB90
    ctx->pc = 0x20B9ECu;
    SET_GPR_U32(ctx, 31, 0x20B9F4u);
    ctx->pc = 0x20B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9ECu;
    // 0x20b9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB90u, 0x20B9ECu, 0x20B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9F4u;
label_20b9f4:
    // 0x20b9f4: 0xc082fe4  jal         func_20BF90
    ctx->pc = 0x20B9F4u;
    SET_GPR_U32(ctx, 31, 0x20B9FCu);
    ctx->pc = 0x20BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF90u, 0x20B9F4u, 0x20B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9FCu;
label_20b9fc:
    // 0x20b9fc: 0x8f829160  lw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x20ba00: 0xc060258  jal         func_180960
    ctx->pc = 0x20BA00u;
    SET_GPR_U32(ctx, 31, 0x20BA08u);
    ctx->pc = 0x20BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA00u;
    // 0x20ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20BA00u, 0x20BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA08u;
}
