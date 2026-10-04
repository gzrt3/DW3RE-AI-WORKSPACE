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

// Function: FUN_001ba660
// Address: 0x1ba660 - 0x1ba678
void FUN_001ba660_0x1ba660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba660_0x1ba660");
#endif

    ctx->pc = 0x1ba660u;

    // 0x1ba660: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ba660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ba664: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x1ba664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1ba668: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ba668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ba66c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x1ba66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ba670: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ba670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ba674: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ba674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x1ba678u;
}
