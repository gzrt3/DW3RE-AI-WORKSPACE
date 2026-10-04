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

// Function: FUN_001eed40
// Address: 0x1eed40 - 0x1eed60
void FUN_001eed40_0x1eed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eed40_0x1eed40");
#endif

    ctx->pc = 0x1eed40u;

    // 0x1eed40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1eed44: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1eed48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1eed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1eed4c: 0x34643ffc  ori         $a0, $v1, 0x3FFC
    ctx->pc = 0x1eed4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
    // 0x1eed50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1eed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1eed54: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1eed54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1eed58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1eed5c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    ctx->pc = 0x1eed60u;
}
