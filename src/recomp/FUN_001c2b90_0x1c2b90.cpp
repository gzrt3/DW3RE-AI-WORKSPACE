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

// Function: FUN_001c2b90
// Address: 0x1c2b90 - 0x1c2be4
void FUN_001c2b90_0x1c2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2b90_0x1c2b90");
#endif

    ctx->pc = 0x1c2b90u;

    // 0x1c2b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2b94: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c2b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2b9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c2ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2ba4: 0x2442f2c0  addiu       $v0, $v0, -0xD40
    ctx->pc = 0x1c2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963904));
    // 0x1c2ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2bac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c2bb0: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2bb4: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1c2bb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c2bbc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1c2bc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2bc4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c2bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bd4: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c2bd8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c2bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2bdc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C2BDCu;
    SET_GPR_U32(ctx, 31, 0x1C2BE4u);
    ctx->pc = 0x1C2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BDCu;
    // 0x1c2be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C2BDCu, 0x1C2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BE4u;
}
