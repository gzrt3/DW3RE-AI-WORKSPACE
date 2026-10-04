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

// Function: FUN_00234460
// Address: 0x234460 - 0x234494
void FUN_00234460_0x234460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234460_0x234460");
#endif

    ctx->pc = 0x234460u;

    // 0x234460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234464: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23446c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x234470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234478: 0x2451ac80  addiu       $s1, $v0, -0x5380
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x23447c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234480: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x234488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23448c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234490: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x58AC88u));
    ctx->pc = 0x234494u;
}
