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

// Function: FUN_00126fb0
// Address: 0x126fb0 - 0x126fc8
void FUN_00126fb0_0x126fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126fb0_0x126fb0");
#endif

    ctx->pc = 0x126fb0u;

    // 0x126fb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x126fb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x126fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x126fb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x126fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x126fbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x126fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x126fc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x126fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x126fc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x126fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x126fc8u;
}
