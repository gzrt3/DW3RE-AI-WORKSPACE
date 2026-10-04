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

// Function: FUN_0019e548
// Address: 0x19e548 - 0x19e580
void FUN_0019e548_0x19e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e548_0x19e548");
#endif

    ctx->pc = 0x19e548u;

    // 0x19e548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19e54c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19e550: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19e554: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e55c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x19e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19e564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e568: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19e56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e570: 0xae400810  sw          $zero, 0x810($s2)
    ctx->pc = 0x19e570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 0));
    // 0x19e574: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x19e578: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x19e57c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    ctx->pc = 0x19e580u;
}
