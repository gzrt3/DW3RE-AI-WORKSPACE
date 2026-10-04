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

// Function: FUN_00173630
// Address: 0x173630 - 0x17367c
void FUN_00173630_0x173630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173630_0x173630");
#endif

    ctx->pc = 0x173630u;

    // 0x173630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173634: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x173638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17363c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173640: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x173644: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x173644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x173648: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x173648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
    // 0x17364c: 0x24a53100  addiu       $a1, $a1, 0x3100
    ctx->pc = 0x17364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12544));
    // 0x173650: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x173654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173658: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x17365c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x173660: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x173660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x173664: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x173664u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x173668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17366c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17366cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173670: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x173674: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x173674u;
    SET_GPR_U32(ctx, 31, 0x17367Cu);
    ctx->pc = 0x173678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173674u;
    // 0x173678: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x173674u, 0x17367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17367Cu;
}
