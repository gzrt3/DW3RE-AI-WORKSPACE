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

// Function: FUN_00210390
// Address: 0x210390 - 0x2103a4
void FUN_00210390_0x210390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00210390_0x210390");
#endif

    ctx->pc = 0x210390u;

    // 0x210390: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x210394: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x210394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x210398: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x210398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21039c: 0x344517f0  ori         $a1, $v0, 0x17F0
    ctx->pc = 0x21039cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6128);
    // 0x2103a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2103a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x2103a4u;
}
