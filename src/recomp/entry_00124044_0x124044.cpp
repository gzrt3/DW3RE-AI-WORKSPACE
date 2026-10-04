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

// Function: entry_00124044
// Address: 0x124044 - 0x12405c
void entry_00124044_0x124044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124044_0x124044");
#endif

    ctx->pc = 0x124044u;

    // 0x124044: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x124048: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x124048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x12404c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12404cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x124050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124054: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x124054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x124058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12405cu;
}
