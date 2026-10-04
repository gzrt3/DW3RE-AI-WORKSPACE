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

// Function: entry_0023a9ec
// Address: 0x23a9ec - 0x23aa00
void entry_0023a9ec_0x23a9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a9ec_0x23a9ec");
#endif

    ctx->pc = 0x23a9ecu;

    // 0x23a9ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23a9f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23a9f4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x23a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x23a9f8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x23a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x23a9fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23aa00u;
}
