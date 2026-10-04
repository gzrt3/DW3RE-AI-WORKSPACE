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

// Function: FUN_00233fd0
// Address: 0x233fd0 - 0x234020
void FUN_00233fd0_0x233fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233fd0_0x233fd0");
#endif

    ctx->pc = 0x233fd0u;

    // 0x233fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233fd4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x233fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x233fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233fe4: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x233fe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233fec: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x233fecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233ff4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x233ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x233ff8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x233ffc: 0x250804b0  addiu       $t0, $t0, 0x4B0
    ctx->pc = 0x233ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1200));
    // 0x234000: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234004: 0x2524000f  addiu       $a0, $t1, 0xF
    ctx->pc = 0x234004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x234008: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x23400c: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x23400cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x234010: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x234010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x234014: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x234018: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x234018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23401c: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x23401cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->pc = 0x234020u;
}
