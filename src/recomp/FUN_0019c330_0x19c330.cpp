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

// Function: FUN_0019c330
// Address: 0x19c330 - 0x19c374
void FUN_0019c330_0x19c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c330_0x19c330");
#endif

    ctx->pc = 0x19c330u;

    // 0x19c330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19c334: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x19c338: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x19c33c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19c33cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c340: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x19c344: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19c348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c34c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c350: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19c354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c358: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19c35c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x19c35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x19c360: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19c364: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19c368: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19c36c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x19c370: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19c374u;
}
