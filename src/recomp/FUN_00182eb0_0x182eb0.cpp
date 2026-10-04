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

// Function: FUN_00182eb0
// Address: 0x182eb0 - 0x182ee8
void FUN_00182eb0_0x182eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182eb0_0x182eb0");
#endif

    ctx->pc = 0x182eb0u;

    // 0x182eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182ec0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ec8: 0x90830219  lbu         $v1, 0x219($a0)
    ctx->pc = 0x182ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
    // 0x182ecc: 0x90850218  lbu         $a1, 0x218($a0)
    ctx->pc = 0x182eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x182ed0: 0x90c70218  lbu         $a3, 0x218($a2)
    ctx->pc = 0x182ed0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x182ed4: 0x90c40219  lbu         $a0, 0x219($a2)
    ctx->pc = 0x182ed4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
    // 0x182ed8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x182edc: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x182edcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x182ee0: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x182ee4: 0x51822  neg         $v1, $a1
    ctx->pc = 0x182ee4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    ctx->pc = 0x182ee8u;
}
