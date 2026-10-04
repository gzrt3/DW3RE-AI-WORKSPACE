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

// Function: entry_00198874
// Address: 0x198874 - 0x1988c0
void entry_00198874_0x198874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198874_0x198874");
#endif

    ctx->pc = 0x198874u;

    // 0x198874: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x198878: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x19887c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x198880: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x198880u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x198884: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x198884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x198888: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x198888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x19888c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x198890: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x198890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x198894: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x198898: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x19889c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19889cu;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x1988a0: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x1988a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x1988a4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1988a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1988a8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1988a8u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x1988ac: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1988acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1988b0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1988b0u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1988b4: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1988b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1988b8u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x1988bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1988bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1988c0u;
}
