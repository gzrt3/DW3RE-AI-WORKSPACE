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

// Function: FUN_00101c10
// Address: 0x101c10 - 0x101c28
void FUN_00101c10_0x101c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101c10_0x101c10");
#endif

    ctx->pc = 0x101c10u;

    // 0x101c10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x101c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x101c14: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x101c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x101c18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x101c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x101c1c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x101c20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x101c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x101c24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x101c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x101c28u;
}
