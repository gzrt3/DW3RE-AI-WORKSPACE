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

// Function: FUN_00231a48
// Address: 0x231a48 - 0x231ab0
void FUN_00231a48_0x231a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231a48_0x231a48");
#endif

    ctx->pc = 0x231a48u;

    // 0x231a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231a4c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231a50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231a54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x231a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x231a5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x231a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231a64: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x231a68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x231a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x231a6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x231a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x231a74: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x231a78: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x231a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x231a7c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x231a80: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231a84: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x231a88: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231a8c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x231a90: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x231a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x231a94: 0x8e108008  lw          $s0, -0x7FF8($s0)
    ctx->pc = 0x231a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934536)));
    // 0x231a98: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x231a98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x231a9c: 0x8e91000c  lw          $s1, 0xC($s4)
    ctx->pc = 0x231a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x231aa0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x231aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x231aa4: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x231aa8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x231aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x231aac: 0xc08cd14  jal         func_233450
    ctx->pc = 0x231AACu;
    SET_GPR_U32(ctx, 31, 0x231AB4u);
    ctx->pc = 0x233450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233450u, 0x231AACu, 0x231AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AB4u;
}
