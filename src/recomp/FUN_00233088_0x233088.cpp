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

// Function: FUN_00233088
// Address: 0x233088 - 0x2330b0
void FUN_00233088_0x233088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233088_0x233088");
#endif

    ctx->pc = 0x233088u;

    // 0x233088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23308c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23309c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2330a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2330a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2330a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2330a8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x2330A8u;
    SET_GPR_U32(ctx, 31, 0x2330B0u);
    ctx->pc = 0x2330ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330A8u;
    // 0x2330ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x2330A8u, 0x2330B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330B0u;
}
