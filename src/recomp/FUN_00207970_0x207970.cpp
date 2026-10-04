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

// Function: FUN_00207970
// Address: 0x207970 - 0x207980
void FUN_00207970_0x207970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207970_0x207970");
#endif

    ctx->pc = 0x207970u;

    // 0x207970: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x207970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x207974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x207974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x207978: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x207978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x20797c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x207980u;
}
