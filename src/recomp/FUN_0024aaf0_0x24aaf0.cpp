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

// Function: FUN_0024aaf0
// Address: 0x24aaf0 - 0x24ab20
void FUN_0024aaf0_0x24aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024aaf0_0x24aaf0");
#endif

    switch (ctx->pc) {
        case 0x24ab0cu: goto label_24ab0c;
        default: break;
    }

    ctx->pc = 0x24aaf0u;

    // 0x24aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24aaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24aaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24aafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ab00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab04: 0xc0700b4  jal         func_1C02D0
    ctx->pc = 0x24AB04u;
    SET_GPR_U32(ctx, 31, 0x24AB0Cu);
    ctx->pc = 0x24AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB04u;
    // 0x24ab08: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C02D0u, 0x24AB04u, 0x24AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB0Cu;
label_24ab0c:
    // 0x24ab0c: 0xaf8292fc  sw          $v0, -0x6D04($gp)
    ctx->pc = 0x24ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 2));
    // 0x24ab10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab14: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24ab18: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x24AB18u;
    SET_GPR_U32(ctx, 31, 0x24AB20u);
    ctx->pc = 0x24AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB18u;
    // 0x24ab1c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x24AB18u, 0x24AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB20u;
}
