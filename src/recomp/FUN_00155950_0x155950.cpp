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

// Function: FUN_00155950
// Address: 0x155950 - 0x155968
void FUN_00155950_0x155950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155950_0x155950");
#endif

    ctx->pc = 0x155950u;

    // 0x155950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x155954: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x155958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x155958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15595c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x155960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155964: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x155968u;
}
