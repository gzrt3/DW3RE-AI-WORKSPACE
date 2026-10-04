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

// Function: FUN_00178180
// Address: 0x178180 - 0x178194
void FUN_00178180_0x178180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178180_0x178180");
#endif

    ctx->pc = 0x178180u;

    // 0x178180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x178184: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x178188: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x178188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17818c: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x178190: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x178190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x178194u;
}
