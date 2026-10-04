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

// Function: FUN_001a14d8
// Address: 0x1a14d8 - 0x1a1514
void FUN_001a14d8_0x1a14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a14d8_0x1a14d8");
#endif

    ctx->pc = 0x1a14d8u;

    // 0x1a14d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a14dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a14e0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1a14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1a14e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1a14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1a14e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a14ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a14f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14f8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1a14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1a14fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1500: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1a1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1a1504: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1a1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1a1508: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a150c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a1510: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->pc = 0x1a1514u;
}
