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

// Function: FUN_001833c0
// Address: 0x1833c0 - 0x1833d8
void FUN_001833c0_0x1833c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001833c0_0x1833c0");
#endif

    ctx->pc = 0x1833c0u;

    // 0x1833c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1833c4: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1833c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
    // 0x1833c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1833c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1833cc: 0x34678bad  ori         $a3, $v1, 0x8BAD
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
    // 0x1833d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1833d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1833d4: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1833d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    ctx->pc = 0x1833d8u;
}
