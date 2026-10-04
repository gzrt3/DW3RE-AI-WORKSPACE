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

// Function: FUN_00109c10
// Address: 0x109c10 - 0x109c30
void FUN_00109c10_0x109c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109c10_0x109c10");
#endif

    ctx->pc = 0x109c10u;

    // 0x109c10: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x109c14: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x109c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x109c18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x109c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x109c1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x109c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x109c20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x109c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x109c24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x109c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x109c28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x109c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x109c2c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x109c2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109c30u;
}
