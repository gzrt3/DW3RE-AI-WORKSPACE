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

// Function: FUN_001f01b0
// Address: 0x1f01b0 - 0x1f0204
void FUN_001f01b0_0x1f01b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f01b0_0x1f01b0");
#endif

    ctx->pc = 0x1f01b0u;

    // 0x1f01b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f01b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1f01b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f01bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1f01c0: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1f01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1f01c4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1f01c8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1f01cc: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x1f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
    // 0x1f01d0: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f01d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f01d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f01d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f01dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01e0: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x1f01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1f01e4: 0xa2940  sll         $a1, $t2, 5
    ctx->pc = 0x1f01e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1f01e8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1f01ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f01f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f01f4: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1f01f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f01fc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1F01FCu;
    SET_GPR_U32(ctx, 31, 0x1F0204u);
    ctx->pc = 0x1F0200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01FCu;
    // 0x1f0200: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F01FCu, 0x1F0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0204u;
}
