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

// Function: FUN_0019c580
// Address: 0x19c580 - 0x19c5d8
void FUN_0019c580_0x19c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c580_0x19c580");
#endif

    ctx->pc = 0x19c580u;

    // 0x19c580: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x19c584: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x19c588: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x19c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x19c58c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x19c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x19c590: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c594: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x19c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x19c598: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c59c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x19c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x19c5a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19c5a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5a4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x19c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x19c5a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5ac: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x19c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x19c5b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c5b4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x19c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x19c5b8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x19c5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x19c5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5c4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x19c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x19c5c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5cc: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x19c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x19c5d0: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x19c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x19c5d4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x19c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    ctx->pc = 0x19c5d8u;
}
