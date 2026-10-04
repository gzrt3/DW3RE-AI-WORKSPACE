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

// Function: FUN_00138690
// Address: 0x138690 - 0x1386e8
void FUN_00138690_0x138690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138690_0x138690");
#endif

    switch (ctx->pc) {
        case 0x1386e4u: goto label_1386e4;
        default: break;
    }

    ctx->pc = 0x138690u;

    // 0x138690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138698: 0x8f8384fc  lw          $v1, -0x7B04($gp)
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935804)));
    // 0x13869c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13869Cu;
    {
        const bool branch_taken_0x13869c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13869Cu;
        // 0x1386a0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13869c) {
            ctx->pc = 0x1386E4u;
            goto label_1386e4;
        }
    }
    ctx->pc = 0x1386A4u;
    // 0x1386a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1386a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1386a8: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1386a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1386ac: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1386acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1386b0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1386b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1386b4: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x1386b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x1386b8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1386b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1386bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1386bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1386c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1386c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c8: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x1386c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1386cc: 0xa2940  sll         $a1, $t2, 5
    ctx->pc = 0x1386ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1386d0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1386d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1386d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1386d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1386d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1386d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1386dc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1386DCu;
    SET_GPR_U32(ctx, 31, 0x1386E4u);
    ctx->pc = 0x1386E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1386DCu;
    // 0x1386e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1386DCu, 0x1386E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386E4u;
label_1386e4:
    // 0x1386e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1386e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1386e8u;
}
