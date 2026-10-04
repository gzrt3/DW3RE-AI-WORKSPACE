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

// Function: FUN_00231b60
// Address: 0x231b60 - 0x231bc8
void FUN_00231b60_0x231b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231b60_0x231b60");
#endif

    ctx->pc = 0x231b60u;

    // 0x231b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231b64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x231b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x231b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x231b6c: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x231b70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x231b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x231b74: 0x3c130009  lui         $s3, 0x9
    ctx->pc = 0x231b74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)9 << 16));
    // 0x231b78: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x231b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x231b7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x231b7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x231b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x231b84: 0x36731210  ori         $s3, $s3, 0x1210
    ctx->pc = 0x231b84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4624);
    // 0x231b88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x231b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231b8c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x231b90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b98: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231b9c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x231ba0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x231ba4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x231ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x231ba8: 0x8c638008  lw          $v1, -0x7FF8($v1)
    ctx->pc = 0x231ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934536)));
    // 0x231bac: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x231bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x231bb0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x231bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x231bb4: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x231bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x231bb8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x231bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x231bbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x231bc0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x231bc4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x231bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x231bc8u;
}
