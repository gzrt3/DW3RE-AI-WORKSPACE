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

// Function: FUN_0017ad00
// Address: 0x17ad00 - 0x17ad30
void FUN_0017ad00_0x17ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ad00_0x17ad00");
#endif

    ctx->pc = 0x17ad00u;

    // 0x17ad00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ad04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x17ad08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ad0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17ad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17ad10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ad14: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x17ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x17ad18: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x17ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x17ad1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ad1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17ad24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17ad28: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x17AD28u;
    SET_GPR_U32(ctx, 31, 0x17AD30u);
    ctx->pc = 0x17AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD28u;
    // 0x17ad2c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x17AD28u, 0x17AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD30u;
}
